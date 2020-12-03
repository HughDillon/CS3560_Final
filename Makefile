CXXFLAGS = -Wall -I./lib
LINK = Link

count : program.o
	  g++ -o count program.o 

program.o: program.cc
	g++ -Wall -c program.cc

doc: Doxyfile
	doxygen Doxyfile

Doxyfile:
	doxygen -g

check: cppcheck valgrind

cppcheck:
	cppcheck program.cc

valgrind:
	valgrind ./count

test: program.o test.o
	g++ -Wall -o $@ $^
clean :
	rm -f *.o all core *.core