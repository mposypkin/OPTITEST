import sys
import matplotlib.pyplot as plt
import numpy as np
import re

def pow(x, n):
   return np.power(x, n)

def sqr(x):
    return x * x

def sqrt(x):
    return np.sqrt(x)

def ln(x):
    #print('ln x = ', x)
    return np.log(x)

def sin(x):
    return np.sin(x)

def cos(x):
    return np.cos(x)

def exp(x):
    return np.exp(x)

def f(x, expr):
    v = eval(expr)
    return v

def plotFunc(a, b, xbest, ybest, expr, name, ofolder):
    fig, ax = plt.subplots()
    x = np.linspace(a, b, 1000)
    y = [f(z, expr) for z in x]
    ax.plot(x, y)
    ax.plot([xbest], [ybest], 'o')
    exprt = expr.replace('*', '')
    exprname = exprt.replace(' ', '')
    ax.set(title = name + '\n' + exprname)
    #ax.grid()
    if ofolder:
        fig.savefig(ofolder + '/' + name + '.png')
    plt.show()


# plotFunc(-4, 4, 3, 7, 'x if x <= 3 else ln(x)', 'test')

if len(sys.argv) >= 2:
    ifname = sys.argv[1]
    if len(sys.argv) >= 3:
        ofolder = sys.argv[2]
    else:
        ofolder = None
else:
    print("usage: " + sys.argv[0] + ' input_file ' + ' [output_folder] ')
    exit(-1)

file = open(ifname)

for line in file:
    mo = re.match('^description: (\w+)', line)
    if mo:
         descr = mo.group(1)
    mo = re.match('^bounds:.*\[(.+)\,(.+)\]', line)
    if mo:
        a = float(mo.group(1))
        b = float(mo.group(2))
    mo = re.match('^expression: (.+)', line)
    if mo:
        expr = mo.group(1)
        expression = expr.replace('x[0]', 'x')
        print(expression)
    mo = re.match('^globMinX: (.+)', line)
    if mo:
        xbest = float(mo.group(1))
    mo = re.match('^globMinY: (.+)', line)
    if mo:
        ybest = float(mo.group(1))
    mo = re.match(('^Steps'), line)
    if mo:
        plotFunc(a, b, xbest, ybest, expression, descr, ofolder)



file.close()