#pragma once

#include "student.h"
#include "degree.h"

class Roster {
public:

	// Constructor
	Roster();

	// Destructor
	~Roster();

	// E.3.a Add to classRosterArray
    void add(
        std::string studentID,
        std::string firstName,
        std::string lastName,
        std::string emailAddress,
        int age,
        int daysInCourse1,
        int daysInCourse2,
        int daysInCourse3,
        DegreeProgram degreeProgram
    );

    // E.3.b Remove from classRosterArray 
    void remove(std::string studentID);
	
    // E.3.c Print all students. Call print() on every student object
    void printAll();

    // E.3.d Print a students average number of days in their course array
    void printAverageDaysInCourse(std::string studentID);

    // E.3.e Verifies student email addresses and display all invalid email addresses to the user.
        // Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    void printInvalidEmails();

    // E.3.f Prints out student information for a degree program specified by the enum
    void printByDegreeProgram(DegreeProgram degreeProgram);


private:

	// E.1 Create an array of pointers, classRosterArray, to hold the data provided in the "studentData Table"
	Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };

};

