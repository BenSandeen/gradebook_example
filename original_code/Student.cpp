/*
 * =====================================================================================
 *
 *       Filename:  Student.cpp
 *
 *    Description:  Defines functions of the Student class
 *
 *        Version:  1.0
 *        Created:  07/05/2016 11:28:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ben Sandeen 
 *   Organization:  
 *
 * =====================================================================================
 */
// Needn't include this, as Testing_GradeBook.cpp includes it
/* #include <stdlib.h> */ 
// Needn't include this, as including Student.h implicitly includes it
/* #include <string> */
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name) {
	setName(name);
	gradeInPercent = -1.0; // initialize to -1 to avoid errors with uninitialization
	earnedPoints = 0.0;
	totalPoints = 0.0;
}

void Student::setName(string name) {
	studentName = name;
}

string Student::getName() const {
	return studentName;
}

void Student::setGrade(float grade) {
	gradeInPercent = grade;
}

float Student::getGrade() const {
	return gradeInPercent;
}

void Student::addPoints(float pointsEarned, float pointsWorth) {
	earnedPoints += pointsEarned;
	totalPoints += pointsWorth;
}

float Student::getPointsEarned() const {
	return earnedPoints;
}

float Student::getTotalPoints() const {
	return totalPoints;
}
