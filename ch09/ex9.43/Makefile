# C++ Primer
# Chap. 9 Ex. 9.43
# Hao Zhang
# 2016.09.18
# Makefile

OBJ = main.o replace.o
EXE = main
CXX = g++
CXXFLAGS = -O0 -std=c++11 -Wall -Wextra -Weffc++ -Werror -pedantic

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: replace.h
replace.o: replace.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
