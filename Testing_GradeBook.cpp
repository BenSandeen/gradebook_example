/*
 * =====================================================================================
 *
 *       Filename:  Testing_GradeBook.cpp
 *
 *    Description:  Automated testing program for verification of GradeBook class
 *
 *        Version:  1.0
 *        Created:  07/02/2016 01:48:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ben Sandeen 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include "GradeBook.h" // we must include the header file to be able to use it
using namespace std;

// Then, when compiling this file, we'll link the compiled GradeBook.o file,
// which actually has the function definitions (the .h file has only prototypes)

int main() {
	GradeBook gradeBook1("className here");

	/* cout << "poop" << endl; */
	cout << "Current course name: " << gradeBook1.getCourseName() << endl;
	gradeBook1.setCourseName("new className here");
	cout << "New course name: " << gradeBook1.getCourseName() << endl;
	return 0;
}
