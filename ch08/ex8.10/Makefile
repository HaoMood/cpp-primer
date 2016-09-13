# C++ Primer
# Chap. 8 Ex. 8.10
# Hao Zhang
# 2016.09.13
# Makefile

OBJ = main.o File_content.o
EXE = main
CXX = g++
CXXFLAGS = -Wall -std=c++11

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ)

main.o: File_content.h
File_content.o: File_content.h

release: clean
release: CXXFLAGS += -D NDEBUG
release: $(EXE)

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
