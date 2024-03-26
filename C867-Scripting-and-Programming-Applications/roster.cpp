
#include <iostream>
#include "student.h"
#include "degree.h"
#include "roster.h"

/*
// E.1 array of pointers, classRosterArray, to hold the data provided in the "studentData Table"

// E.2 Create a student object for each student in the data table and populare classRosterArray
	// Parse each set of data identified in the "studentData Table"
	// add each student object to classRosterArray

// E.3 Define the following functions:
// a. public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse 1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
	// Sets the instance variables from the student class and updates the roster

// b. public void remove(string studentID)
	// removes students from the roster by studentID. If studentID doesn't exist, print an error message indicating that the student was not found.

// c. public void printAll()
	// prints a complete tab-separated list of student data in the provided format:
		// A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security
	// The printAll() function should loop through all the students in classRosterArray and call the print() function for each student

// d. public void printAverageDaysInCourse(string studentID)
	// correctly prints a student's average number of days in the three courses.The student is identified by the studentID param

// e. public void printInvalidEmails()
	// verifies student email addresses and displays all invalid email addresses to the user
	// A valid email should include an @ symbol and a . and should not include a space

// f. public void printByDegreeProgram(DegreeProgram degreeProgram)
	// Prints out student information for a degree program specified by an enumerated type

	*/

// Constructor
Roster::Roster() {

};

// Destructor
Roster::~Roster() {

};

void Roster::add(
	std::string studentID,
	std::string firstName,
	std::string lastName,
	std::string emailAddress,
	int age,
	int daysInCourse1,
	int daysInCourse2,
	int daysInCourse3,
	DegreeProgram degreeProgram) {
	
}

void Roster::remove(std::string studentID) {

};

void Roster::printAll() {

};

void Roster::printAverageDaysInCourse(std::string studentID) {

};

void Roster::printInvalidEmails() {

};

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

};