# C++ Primer
# Chap. 7 Ex. 7.57
# Hao Zhang
# 2016.09.12
# Makefile

OBJ = main.o Account.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: Account.h
Account.o: Account.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
