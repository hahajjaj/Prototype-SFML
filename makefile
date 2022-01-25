main: main.cpp
	g++ main.cpp -o main -lsfml-graphics -lsfml-window -lsfml-system
clean:
	rm -f main