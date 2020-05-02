CXX = clang++
CXXFLAGS = -std=c++2a -framework Hypervisor

all: bin/elfloader

bin/elfloader: src/main.cpp
	$(CXX) $(CXXFLAGS) src/main.cpp -o bin/elfloader

clean:
	$(RM) bin/elfloader obj/*.o obj/*.pcm

run: bin/elfloader
	./bin/elfloader