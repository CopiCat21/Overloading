CXX?=g++ 
CXXFLAGS+= --std=c++17 -O3 -Wall -Wextra -I.
SOURCES=src/main.cpp src/PersegiPanjang.cpp

src/%.o: src/%.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

sim: $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) -o $@ $^