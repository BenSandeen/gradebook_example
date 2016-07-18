/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.h
 *
 *    Description:  Implements gradebook example from textbook
 *
 *        Version:  1.0
 *        Created:  07/01/2016 01:21:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ben Sandeen 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string> // courseName is stored as a string
// We still need to use the specifier `std::` before using the string library,
// because we can't use `using namespace std;` in header files for some reason

class GradeBook {
public: // allows other programs to use these member functions
	explicit GradeBook(std::string); // constructor
	void setCourseName(std::string); // sets courseName

	// these two member functions are declared with the `const` thing,
	// indicating that they don't change the state of an object
	std::string getCourseName() const; // gets courseName
	void displayCourseName() const; // displays courseName
private: // the data is hidden from other programs
	std::string courseName; // the course's name is stored as a string
}; // DON'T FORGET TO END THE CLASS DESCRIPTION WITH A SEMI-COLON 

