/*
 * ==============================================================================
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
 * ==============================================================================
 */
#include <string> // courseName is stored as a string
#include <array> // use this for a static object, initialized at compile time
#include <vector> // use this for a resizeable object to add/remove students
// We still need to use the specifier `std::` before using the string library,
// because we can't use `using namespace std;` in header files for some reason

class GradeBook {
public: // allows other programs to use these member functions
	
	// these variables are used for size of array and vector objects
	static const size_t numStudentsInClass = 10;
	static const size_t numGradesReceivedPerStudent = 4;

	explicit GradeBook(std::string); // constructor
	void setCourseName(std::string); // sets courseName

	// these two member functions are declared with the `const` thing,
	// indicating that they don't change the state of an object
	std::string getCourseName() const; // gets courseName
	void displayCourseName() const; // displays courseName
	
	// functions for setting up the *ARRAY* of students
	// array of students, with each having an array for their grades
	void createStudentArray(std::array < std::array< float, numGradesReceivedPerStudent >, numStudentsInClass >); 

	// functions for setting up the *VECTOR* of students
	void createStudentVector( std::vector< std::vector< float > > studentVec );
	void addStudentToVector( std::vector< float > ); // may need to add `&` after `>`

	// takes index of student to be removed and returns vector of their grades
	/* std::vector removeStudentFromVector( int index ); */ 
	/* std::string removeStudentFromVector( int index ); */
private: // the data is hidden from other programs
	/* int numStudentsInClass = 10; */
	/* int numGradesReceivedPerStudent = 4; */
	std::string courseName; // the course's name is stored as a string
	std::array< std::array< float, numGradesReceivedPerStudent >, numStudentsInClass > studentArray;
	/* std::vector< std::vector< float > grades(numGradesReceivedPerStudent) > studentVector(numStudentsInClass); */
	std::vector< std::vector< float > > studentVector; //numStudentsInClass);
}; // DON'T FORGET TO END THE CLASS DESCRIPTION WITH A SEMI-COLON 

