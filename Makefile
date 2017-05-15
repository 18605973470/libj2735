all:
	$(MAKE) -C src

install: all 
	mkdir /usr/local/include/j2735
	cp ./src/*.h /usr/local/include/j2735
	cp ./lib/libj2735.a /usr/local/lib/libj2735.a

clean:
	$(MAKE) clean -C src
