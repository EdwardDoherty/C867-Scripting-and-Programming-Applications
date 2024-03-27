
#include <iostream>
#include <string>
#include <map>
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
Roster::Roster(int rosterSize) {
	Roster::rosterSize = rosterSize;
	Roster::parse();
};

Roster::~Roster() {
	return;
};

void Roster::parse() {

	// Parse each student, create Student objects and place them into classRosterArray
	for (int student = 0; student < (sizeof(studentData) / sizeof(std::string)); student++) {

		classRosterArray[student] = Roster::parseLine(studentData[student]);

		classRosterArray[student]->print();
	};
};

Student* Roster::parseLine(std::string dataLine) {

	std::string delimiter = ","; // Set the delimiter you'd like to use to parse the data
	std::string studentArray[9]; // Contains the parsed information for each student, which is then fed into the class constructor at the bottom of this loop
	std::size_t lastDelimiter = 0; // Track the previous delimiter end point
	int counter = 0;

	// Parse student info string
	while ((dataLine.find(delimiter, lastDelimiter + delimiter.length())) != std::string::npos) {

		// Add the student's data to the array
		studentArray[counter] = dataLine.substr(lastDelimiter, dataLine.find(delimiter, lastDelimiter) - lastDelimiter);

		// Locate and save the delimiter for future loop
		lastDelimiter = dataLine.find(delimiter, lastDelimiter) + delimiter.length();

		counter++;
	};
	// Catch the final line of information
	studentArray[8] = dataLine.substr(lastDelimiter);

	return new Student(
		studentArray[0], // studentID
		studentArray[1], // firstName
		studentArray[2], // lastName
		studentArray[3], // email
		std::stoi(studentArray[4]), // age, cast to int
		std::stoi(studentArray[5]), // courseTime1, cast to int
		std::stoi(studentArray[6]), // courseTime2, cast to int
		std::stoi(studentArray[7]), // courseTime3, cast to int
		castToDegreeProgram(studentArray[8]) // degreeProgram, cast to enum DegreeProgram
	);
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



};

void Roster::remove(std::string studentID) {

};

void Roster::printAll() {

	// Loop throught students and call their print() function
	for (int student = 0; student < (sizeof(studentData) / sizeof(std::string)); student++) {

		classRosterArray[student]->print();
	};
};

void Roster::printAverageDaysInCourse(std::string studentID) {

};

void Roster::printInvalidEmails() {

};

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

};

// Helper functions
	// Cast string into degreeProgram
DegreeProgram Roster::castToDegreeProgram(std::string degreeString) {

	if (degreeString == "SECURITY") {
		return SECURITY;
	}
	else if (degreeString == "NETWORK") {
		return NETWORK;
	}
	else if (degreeString == "SOFTWARE") {
		return SOFTWARE;
	}
	else {
		return UNDECLARED;
	}

};

// Cast Degree Program to a string
std::string Roster::castDegreeProgramToString(DegreeProgram degreeEnum) {
	if (degreeEnum == SECURITY) {
		return "SECURITY";
	}
	else if (degreeEnum == NETWORK) {
		return "NETWORK";
	}
	else if (degreeEnum == SOFTWARE) {
		return "SOFTWARE";
	}
	else {
		return "UNDECLARED";
	};
};
