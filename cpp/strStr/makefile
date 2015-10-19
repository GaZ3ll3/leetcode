CXX:=g++-4.8

#CXX:=clang

CXXFLAGS:=-g -std=c++11 -O3 -Wall -Werror -fPIC

EXE:=a.out

all: $(EXE) test clean

$(EXE):
	@$(CXX) $(CXXFLAGS) -o $(EXE) main.cpp  

test: $(EXE)
	@./$(EXE)

clean: $(EXE)
	@rm -rf *~ *.out *.o *.so 
	
