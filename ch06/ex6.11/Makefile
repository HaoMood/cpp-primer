OBJ = main.o reset.o
EXE = main

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

main.o: reset.h
reset.o: reset.h

.PHONY = clean
clean:
	-rm $(EXE) $(OBJ)
