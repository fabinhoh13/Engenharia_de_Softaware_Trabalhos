api_lib = -lmyvensim

all: lib tests
lib: lib.so
tests: tests-funcional tests-unit

lib.so:
	g++ -shared -fPIC src/*.cpp -o bin/libmyvensim.so -Wall

tests-funcional:
	g++ test/funcional/*.cpp -L./bin $(api_lib) -Wl,-rpath,bin -o bin/funcional_tests.out

tests-unit:
	g++ test/unit/*.cpp -L./bin $(api_lib) -Wl,-rpath,bin -o bin/unit_tests.out	

clean:
	rm -f bin/*.so bin/*.o bin/*.out

run-funcional:
	./bin/funcional_tests.out

run-unit:
	./bin/unit_tests.out

