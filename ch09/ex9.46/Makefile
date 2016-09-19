# C++ Primer
# Chap. 9 Ex. 9.46
# Hao Zhang
# 2016.09.18
# Makefile

OBJ = main.o suf_prefix.o
EXE = main
CXX = g++
CXXFLAGS = -O0 -std=c++11 -Wall -Wextra -Weffc++ -Werror -pedantic

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: suf_prefix.h
suf_prefix.o: suf_prefix.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean: 
	-rm $(EXE) $(OBJ)
