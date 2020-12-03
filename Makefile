count : program.o
	  g++ -o count program.o 

program.o: program.cc
	g++ -Wall -c program.cc

doc: Doxyfile
	doxygen

Doxyfile:
	doxygen -g

clean :
	rm -f *.o all core *.core