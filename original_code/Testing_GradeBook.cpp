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

	/* cout << "poop" << endl; */
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
	return 0;
}
