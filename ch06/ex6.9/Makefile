OBJ = ex6.9.o fac.o
EXE = ex6.9

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ)

ex6.9.o: Chapter6.h
fac.o: Chapter6.h

.PHONY: clean
clean:
	-rm $(EXE) $(OBJ)
