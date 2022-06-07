all: clean compile run

compile: exercise.cpp
	g++ *.cpp -o exercise
	cp exercise build
	rm -f exercise
run: 
	clear
	build/exercise
clean:
	rm -f build/exercise
debug: 
	g++ *.cpp -g -o dexercise
	gdb dexercise
	rm -f dexercise

	
