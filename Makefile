#!make -f

CXX=g++ 
CXXFLAGS=-std=c++17

HEADERS=PhoneticFinder.hpp
OBJECTS=PhoneticFinder.o

run: test
	./$^

test: TestRunner.o Test_ofek.o Test_snir.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o test
