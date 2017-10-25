#ifndef BENCHMARKS__HPP
#define BENCHMARKS__HPP

#include <iostream>
#include <vector>
#include <memory>

#include "expression/expr.hpp"
#include "interval/interval_air.hpp"
#include "derivatives/valder.hpp"
#include "derivatives/intervalder.hpp"
#include "testfuncs.hpp"


using namespace snowgoose::expression;
using namespace snowgoose::derivative;
using namespace OPTITEST;

template <class T>
using Bound = std::pair<T, T>;

template <class T>
class Benchmark
{
protected:
	std::string desciption;
	int dimension;
	T globMinY;
	bool multiModal;
	T *globMinX = nullptr;
	Bound<T> *bounds = nullptr;
	void destroy();

public:
	std::string getDesc() const { return desciption; }
	int getDim() const { return dimension; }
	bool getMulMod() const { return multiModal; }
	T getGlobMinY() const { return globMinY; }

	T getGlobMinX(int index) const { return globMinX[index]; }	
	void setGlobMinX(int index, T value) const { globMinX[index] = value; }
	Bound<T> getBounds(int index) const { return bounds[index]; }
	void setBounds(int index, const Bound<T> &value) const { bounds[index] = value; }

	virtual T calcFunc(const std::vector<T>& point) const = 0;
        virtual Interval<T> calcInterval(const std::vector<Interval<T>>& box) const = 0;
	virtual ValDer<T> calcGrad(const std::vector<T>& point) const = 0; 
	virtual IntervalDer<T> calcIntervalGrad(const std::vector<Interval<T>>& box) const = 0;

	Benchmark(std::string desc, int dim, T globmin, bool multimodal = true);
	Benchmark(const Benchmark& bm);
	Benchmark& operator=(const Benchmark& bm);
	Benchmark(Benchmark&& bm);
	Benchmark& operator=(Benchmark&& bm);
	virtual ~Benchmark();
        template <class T2> friend std::ostream& operator<<(std::ostream &out, const Benchmark<T2> &bm);
};

template <class T> void Benchmark<T>::destroy()
{		
	delete[] globMinX;
	delete[] bounds;
}

template <class T> Benchmark<T>::Benchmark(std::string desc, int dim, T globmin, bool multimodal) :  desciption(desc), dimension(dim), globMinY(globmin), multiModal(multimodal)
{
	globMinX = new T[dimension];
	bounds = new Bound<T>[dimension];
}

template <class T> Benchmark<T>::Benchmark(const Benchmark& bm) : desciption(bm.desciption), dimension(bm.dimension), globMinY(bm.globMinY), multiModal(bm.multiModal)
{
	globMinX = new T[dimension];
	memcpy(globMinX, bm.globMinX, dimension * sizeof(T));
	bounds = new Bound<T>[dimension];
	memcpy(bounds, bm.bounds, dimension * sizeof(Bound<T>));
}

template <class T> Benchmark<T>& Benchmark<T>::operator=(const Benchmark& bm)
{
	destroy();
	desciption = bm.desciption;
        dimension = bm.dimension;
        globMinY = bm.globMinY;
        multiModal = bm.multiModal;		
	globMinX = new T[dimension];
	memcpy(globMinX, bm.globMinX, dimension * sizeof(T));
	bounds = new Bound<T>[dimension];
	memcpy(bounds, bm.bounds, dimension * sizeof(Bound<T>));
	return *this;		
}

template <class T> Benchmark<T>::Benchmark(Benchmark&& bm) : desciption(bm.desciption), dimension(bm.dimension), globMinY(bm.globMinY), multiModal(bm.multiModal)
{
	destroy();
	globMinX = bm.globMinX;
	bounds = bm.bounds;
	bm.globMinX = nullptr;
	bm.bounds = nullptr;
}

template <class T> Benchmark<T>& Benchmark<T>::operator=(Benchmark&& bm)
{
	destroy();
	desciption = bm.desciption;
        dimension = bm.dimension;
        globMinY = bm.globMinY;
        multiModal = bm.multiModal;
	globMinX = bm.globMinX;
	bounds = bm.bounds;
	bm.globMinX = nullptr;
	bm.bounds = nullptr;
	return *this;		
}

template <class T> Benchmark<T>::~Benchmark()
{
	destroy();
}

template <class T2> std::ostream& operator<<(std::ostream &out, const Benchmark<T2> &bm)
{
	out << "desciption: " << bm.desciption << '\n';
	out << "dimension: " << bm.dimension << '\n';
	out << "globMinY: " << bm.globMinY << '\n';
	out << "multiModal: " << bm.multiModal << '\n';
	out << "globMinX: \n"<< '\n';
	for(int i=0; i < bm.dimension; ++i)
		out << "x[" << i << "]:" <<  bm.globMinX[i] << '\n';
	out << "bounds: \n"<< '\n';
	for(int i=0; i < bm.dimension; ++i)
		out << "[ " << bm.bounds[i].first << " , " << bm.bounds[i].second << " ]:" << '\n';
	return out;	
}


template <class T>
class Ackley1Benchmark : public Benchmark<T>
{
public:
	virtual T calcFunc(const std::vector<T>& point) const { 
		return ::calcFunc(Ackley1<T>(this->dimension), point); 
	}

        virtual Interval<T> calcInterval(const std::vector<Interval<T>>& box) const { 
		return ::calcInterval(Ackley1<Interval<T>>(this->dimension), box); 
	}

	virtual ValDer<T> calcGrad(const std::vector<T>& point) const { 
		return ::calcGrad(Ackley1<ValDer<T>>(this->dimension), point); 
	}

	virtual IntervalDer<T> calcIntervalGrad(const std::vector<Interval<T>>& box) const { 
		return ::calcIntervalGrad(Ackley1<IntervalDer<T>>(this->dimension), box); 
	}

	Ackley1Benchmark(int size) : Benchmark<T>("Ackley 1 function", size, 0.0)
	{
		for(int i=0; i < size; ++i)
		{
			this->setGlobMinX(i, 0.0);
			this->setBounds(i, {-32.0, 32.0});
		}
	}
};

template <class T>
class Ackley3Benchmark : public Benchmark<T>
{
public:
	virtual T calcFunc(const std::vector<T>& point) const { 
		return ::calcFunc(Ackley3<T>(), point); 
	}
        virtual Interval<T> calcInterval(const std::vector<Interval<T>>& box) const { 
		return ::calcInterval(Ackley3<Interval<T>>(), box); 
	};
	virtual ValDer<T> calcGrad(const std::vector<T>& point) const { 
		return ::calcGrad(Ackley3<ValDer<T>>(), point); 
	};
	virtual IntervalDer<T> calcIntervalGrad(const std::vector<Interval<T>>& box) const { 
		return ::calcIntervalGrad(Ackley3<IntervalDer<T>>(), box); 
	};

	Ackley3Benchmark() : Benchmark<T>("Ackley 3 function", 2, 82.4617, false)
	{
		for(int i=0; i < this->getDim(); ++i)
		{
			this->setGlobMinX(i, -32.0);
			this->setBounds(i, {-32.0, 32.0});
		}
	}
};

template <class T>
class Ackley4Benchmark : public Benchmark<T>
{
public:
	virtual T calcFunc(const std::vector<T>& point) const { 
		return ::calcFunc(Ackley4<T>(), point); 
	}
        virtual Interval<T> calcInterval(const std::vector<Interval<T>>& box) const { 
		return ::calcInterval(Ackley4<Interval<T>>(), box); 
	};
	virtual ValDer<T> calcGrad(const std::vector<T>& point) const { 
		return ::calcGrad(Ackley4<ValDer<T>>(), point); 
	};
	virtual IntervalDer<T> calcIntervalGrad(const std::vector<Interval<T>>& box) const { 
		return ::calcIntervalGrad(Ackley4<IntervalDer<T>>(), box); 
	};

	Ackley4Benchmark() : Benchmark<T>("Ackley 4 function", 2, -4.9999521818884851)
	{
		this->setBounds(0, {-32.0, 32.0});
		this->setBounds(1, {-32.0, 32.0});
		this->setGlobMinX(0, -23.5625);
		this->setGlobMinX(1, -29.0625);
	}
};

template <class T>
class Alpine2Benchmark : public Benchmark<T>
{
public:
	virtual T calcFunc(const std::vector<T>& point) const { 
		return ::calcFunc(Alpine2<T>(), point); 
	}
        virtual Interval<T> calcInterval(const std::vector<Interval<T>>& box) const { 
		return ::calcInterval(Alpine2<Interval<T>>(), box); 
	};
	virtual ValDer<T> calcGrad(const std::vector<T>& point) const { 
		return ::calcGrad(Alpine2<ValDer<T>>(), point); 
	};
	virtual IntervalDer<T> calcIntervalGrad(const std::vector<Interval<T>>& box) const { 
		return ::calcIntervalGrad(Alpine2<IntervalDer<T>>(), box); 
	};
	Alpine2Benchmark() : Benchmark<T>("Alpine 2 function", 3, -17.212404253615528)
	{
		for(int i=0; i < this->getDim(); ++i)
			this->setBounds(i, {0.0, 10.0});
		this->setGlobMinX(0, 7.9170526982459462172);
		this->setGlobMinX(1, 7.9170526982459462172);
		this->setGlobMinX(2, 4.81584);
	}
};


template <class T>
using PtrBench = std::shared_ptr<Benchmark<T>>;

template <class T>
class Benchmarks
{
private:
	std::vector<PtrBench<T>> vbm;
public:
	void Fill()
	{
		Clear();
		Add(std::make_shared<Ackley1Benchmark<T>>(2)); 
		Add(std::make_shared<Ackley3Benchmark<T>>());
		Add(std::make_shared<Ackley4Benchmark<T>>());
		Add(std::make_shared<Alpine2Benchmark<T>>());
	}
	void Clear()
	{
		vbm.clear();
	}
	void Add(const PtrBench<T> &ptrBenchmark)
	{
		vbm.push_back(ptrBenchmark);
	}
	
	void Print() const
	{
		for(PtrBench<T> ptrBench : *this)
			std::cout << *ptrBench;
	}	

	typename std::vector<PtrBench<T>>::iterator begin()
	{
        	return vbm.begin();
    	}
    	typename std::vector<PtrBench<T>>::iterator end()
	{
        	return vbm.end();
    	}
    	typename std::vector<PtrBench<T>>::const_iterator begin() const 
	{
        	return vbm.begin();
    	}
    	typename std::vector<PtrBench<T>>::const_iterator end() const 
	{
        	return vbm.end();
    	}
};

#endif


