# C++ Primer
# Chap. 9 Ex. 9.41
# Hao Zhang
# 2016.09.19
# Makefile

OBJ = main.o find.o
EXE = main
CXX = g++
CXXFLAGS = -O0 -std=c++11 -Wall -Wextra -Weffc++ -Werror -pedantic

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: find.h
find.o: find.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

clean:
	-rm $(EXE) $(OBJ)
