/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Defines the functions of the GradeBook class prototyped in GradeBook.h
 *
 *        Version:  1.0
 *        Created:  07/01/2016 01:35:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ben Sandeen
 *   Organization:  
 *
 * =====================================================================================
 */
/* #include <stdlib.h> */
#include <string>
#include <iostream>
#include "GradeBook.h" // using quotes tells compiler to look in current dir
		       // to find the GradeBook.h file. The brackets (<>) tell it
		       // to look in the standard location for built-in C++ libs
using namespace std;

// constructor function that the compiler uses to instantiate a gradebook object
GradeBook::GradeBook(string name) {
	setCourseName(name); // uses the class's set function for robustness
}

void GradeBook::setCourseName(string name) {
	courseName = name; // start with a basic setter function
}

string GradeBook::getCourseName() const {
	return courseName;
}

void GradeBook::displayCourseName() const {
	cout << "Course name is: " << getCourseName() << endl;
}
