all:
	g++-7 main.cpp buzz.hpp -std=c++1z -o build/main.out

test:
	g++-7 buzz.hpp -fprofile-arcs -ftest-coverage unit_test.cpp -std=c++1z -o build/test.out

