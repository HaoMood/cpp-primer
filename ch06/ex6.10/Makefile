OBJ = main.o swap.o
EXE = main

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: swap.h
swap.o: swap.h

.PHONY: clean
clean:
	-rm $(EXE) $(OBJ)
