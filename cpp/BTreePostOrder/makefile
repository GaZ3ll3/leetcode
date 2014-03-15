CXX:=g++

#CXX:=clang

CXXFLAGS:=-g -O3 -Wall -Werror -fPIC

EXE:=a.out

all: $(EXE) test clean

$(EXE):
	@$(CXX) $(CXXFLAGS) -o $(EXE) main.cpp  

test: $(EXE)
	@./$(EXE)

clean: $(EXE)
	@rm -rf *~ *.out *.o *.so 
	
