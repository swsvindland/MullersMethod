SRC= main.cpp functions.cpp muller.cpp
OBJ=$(SRC:.cpp=.o)

prog: $(OBJ)
	g++ $(OBJ) -o proj

.cpp.o: $<
	g++ -I. -c $<

clean:
	rm *.o proj
