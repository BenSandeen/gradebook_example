g++ -c -o GradeBook.o GradeBook.cpp # compiles but doesn't link GradeBook.cpp
g++ -c -o Student.o Student.cpp # compiles but doesn't link Student.cpp
g++ -c -o Testing_GradeBook.o Testing_GradeBook.cpp # compiles but doesn't link Testing_GradeBook.cpp
g++ -o executable_file_name GradeBook.o Student.o Testing_GradeBook.o # finally fully compiles AND LINKS the separate files
