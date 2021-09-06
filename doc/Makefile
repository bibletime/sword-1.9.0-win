all: doxygen

doxygen: Doxyfile
	cd .. && doxygen doc/Doxyfile

clean:
	rm -rf doxygen

deploy:doxygen
	rm -rf /home/sword/html/apiref
	cp -a doxygen/html /home/sword/html/apiref
