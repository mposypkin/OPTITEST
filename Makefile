all dep clean indent tests::
	cd oneobj && $(MAKE) $@ && cd .. 
	cd testfuncs && $(MAKE) $@ && cd ..
	
doc: indent doxy

clean::
	rm -rf *~ PI* core bin/* obj/* tmp *.log
