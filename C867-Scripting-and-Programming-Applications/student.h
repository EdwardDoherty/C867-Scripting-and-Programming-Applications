#pragma once

#include "degree.h"

// Student Class definitions:

class Student {
public:
	// Getters
	std::string getStudentID();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmailAddress();
	int getAge();
	int *getDaysPerCourseArray();
	DegreeProgram getDegreeProgram();

	// Setters
	void setStudentID(std::string newStudentID);
	void setFirstName(std::string newFirstName);
	void setLastName(std::string newLastName);
	void setEmailAddress(std::string newEmailAddress);
	void setAge(int newAge);
	void setDaysPerCourseArray(int courseTime1, int courseTime2, int courseTime3);
	void setDegreeProgram(DegreeProgram newDegreeProgram);

	// Constructor
	Student(
		std::string sID,
		std::string fName,
		std::string lName,
		std::string email,
		int sAge,
		int courseTime1,
		int courseTime2,
		int courseTime3,
		DegreeProgram degreeProg
	);

	// Print specific student info
	void print();


private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int daysPerCourseArray[3];
	DegreeProgram degreeProgram;
};

