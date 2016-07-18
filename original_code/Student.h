/*
 * =====================================================================================
 *
 *       Filename:  Student.h
 *
 *    Description:  Header file prototyping the student class
 *
 *        Version:  1.0
 *        Created:  07/05/2016 11:17:40 PM
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

class Student {
public:
	explicit Student(std::string name);
	void setName(std::string name);
	std::string getName() const;
	void setGrade(float grade);
	float getGrade() const;
	void addPoints(float pointsEarned, float pointsWorth);
	// gets total points earned and total possible points
	float getPointsEarned() const;
	float getTotalPoints() const; 
private:
	std::string studentName;
	float gradeInPercent;
	float earnedPoints;
	float totalPoints;
};
