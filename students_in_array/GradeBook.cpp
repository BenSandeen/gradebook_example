/*
 * ===============================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Defines functions of GradeBook class prototyped in GradeBook.h
 *
 *        Version:  1.0
 *        Created:  07/01/2016 01:35:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ben Sandeen
 *   Organization:  
 *
 * ===============================================================================
 */
/* #include <stdlib.h> */
/* #include <string> */
#include <iostream>
#include "GradeBook.h" // using quotes tells compiler to look in current dir
		       // to find the GradeBook.h file. The brackets (<>) tell it
		       // to look in the standard location for built-in C++ libs
using namespace std;

/* int numStudentsInClass = 10; */
/* int numGradesReceivedPerStudent = 4; */

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

void GradeBook::createStudentArray(array< array< float, GradeBook::numGradesReceivedPerStudent >, GradeBook::numStudentsInClass > studentArr) {
	studentArray = studentArr;
}

void GradeBook::createStudentVector( vector< vector< float > > studentVec) {
	studentVector = studentVec;
}

int GradeBook::getNumStudentsInVector() const{
	return studentVector.size();
}

int GradeBook::getNumGradesPerStudentInVector() const{
	return studentVector[0].size();
}

void GradeBook::displayStudentVector() const {
	for (int student = 0; student < getNumStudentsInVector(); student++) {
		cout << "Student #" << student << ":";
		for (int grade = 0; grade < getNumGradesPerStudentInVector(); grade++) {
			cout << "\t" << studentVector[student][grade];
		}
		cout << endl;
	}
	cout << endl;
}

void GradeBook::addStudentsToVector( int numStudentsToAdd ) {
	for (int i = 0; i < numStudentsToAdd; i++ ) {
		studentVector.push_back(vector< float >(getNumGradesPerStudentInVector()));
	}
}
