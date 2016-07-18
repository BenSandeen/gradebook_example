G++=g++ # sets variable `G++` to hold specific compiler we wish to use

# This is the default thing that is run when you run `make` on the command line.
# `gradebook` is the chosen name of the final executable for make to compile.
# Since its dependencies (everything following the colon) must be compiled in
# order for `gradebook` to be compiled, any outdated (or nonexistant)
# dependencies will be compiled as described appropriately for the respective
# dependency.

# gradebook : GradeBook.o Student.o Testing_GradeBook.o
build: GradeBook.o Student.o Testing_GradeBook.o
	# This is how we substitute in the variable's value in order to 
	# run the compilation command.  If any of the input dependencies of the 
	# *.o files have been updated since the *.o files were last compiled,
	# they will first be recompiled
	# $(G++) -o gradebook GradeBook.o Student.o Testing_GradeBook.o
	g++ -std=gnu++11 -o gradebook GradeBook.o Student.o Testing_GradeBook.o

GradeBook.o : GradeBook.cpp GradeBook.h
	# $(G++) -c -o GradeBook.o GradeBook.cpp
	g++ -c -std=gnu++11 -o GradeBook.o GradeBook.cpp

Student.o : Student.cpp Student.h
	# $(G++) -c -o Student.o Student.cpp
	g++ -c -std=gnu++11 -o Student.o Student.cpp

Testing_GradeBook.o : Testing_GradeBook.cpp 
	# $(G++) -c -o Testing_GradeBook.o Testing_GradeBook.cpp
	g++ -c -std=gnu++11 -o Testing_GradeBook.o Testing_GradeBook.cpp

# calling `make clean` will delete all the compiled files
clean :
	rm gradebook GradeBook.o Student.o Testing_GradeBook.o
