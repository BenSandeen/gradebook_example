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
#include "Student.h"
using namespace std;

// Then, when compiling this file, we'll link the compiled GradeBook.o file,
// which actually has the function definitions (the .h file has only prototypes)

int main() {
	GradeBook gradeBook1("className here");

	cout << "Current course name: " << gradeBook1.getCourseName() << endl;
	gradeBook1.setCourseName("new className here");
	cout << "New course name: " << gradeBook1.getCourseName() << endl;

	Student student1("Ben Sandeen");
	cout << "Student's name is: " << student1.getName() << endl;
	cout << "Student's grade is: " << student1.getGrade() << endl;
	cout << "Student's earned points: " << student1.getPointsEarned()
		<< "\tout of total points: " << student1.getTotalPoints()
		<< endl;

	student1.setName("Benjamin Jered Sandeen");
	student1.setGrade(99.9);
	student1.addPoints(99.9, 100);

	cout << "Student's name is: " << student1.getName() << endl;
	cout << "Student's grade is: " << student1.getGrade() << endl;
	cout << "Student's earned points: " << student1.getPointsEarned()
		<< "\tout of total points: " << student1.getTotalPoints()
		<< endl;

	vector< float > myVec(3);
	myVec[0] = 12.3;
	myVec[1] = 45.6;
	myVec[2] = 78.9;

	cout << "Size of myVec: " << myVec.size() << "\tValues in myVec: "
		<< myVec[0] << myVec[1] << myVec[2] << endl;
	/* cout << "myVec: " << myVec << endl; */

	// This vector initialization is rather confusing, but I'll attempt to explain it.
	// `vector< vector< float > >` tells us that we're creating a 2D vector, with the
	// innermost vector holding variables of type `float`.
	// `studentVec(GradeBook::numStudentsInClass, vector< float >(GradeBook::numGradesReceivedPerStudent));`
	// names this 2D vector `studentVec` and the 1st argument initializes it with the number of values
	// that is indicated by `GradeBook::numStudentsInClass`.  The 2nd argument indicates that each of these
	// values is a vector of size `GradeBook::numGradesReceivedPerStudent` containing floats
	vector< vector< float > > studentVec(GradeBook::numStudentsInClass, vector< float >(GradeBook::numGradesReceivedPerStudent));
	cout << studentVec[0][0] << "\t" << studentVec.size() << "\t" << studentVec[0].size() << endl;

	// This just shows how one can initialize a vector without a name by appending 
	// parentheses with the number of elements the vector should
	cout <<  vector< int >(2)[0] << vector< int >(2)[1] << endl;

	return 0;
}
