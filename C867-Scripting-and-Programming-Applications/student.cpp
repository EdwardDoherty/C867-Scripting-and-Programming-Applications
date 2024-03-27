
#include <iostream>
#include "student.h"
#include "degree.h"
#include "roster.h"


	// Getters
	std::string Student::getStudentID() {
		return studentID;
	};

	std::string Student::getFirstName() {
		return firstName;
	};

	std::string Student::getLastName() {
		return lastName;
	};

	std::string Student::getEmailAddress() {
		return emailAddress;
	};

	int Student::getAge() {
		return age;
	};

	int *Student::getDaysPerCourseArray() {
		return daysPerCourseArray;
	};

	DegreeProgram Student::getDegreeProgram() {
		return degreeProgram;
	};



	// Setters
	void Student::setStudentID(std::string newStudentID) {
		studentID = newStudentID;
	};

	void Student::setFirstName(std::string newFirstName) {
		firstName = newFirstName;
	};

	void Student::setLastName(std::string newLastName) {
		lastName = newLastName;
	};

	void Student::setEmailAddress(std::string newEmailAddress) {
		emailAddress = newEmailAddress;
	};

	void Student::setAge(int newAge) {
		age = newAge;
	};

	void Student::setDaysPerCourseArray(int courseTime1, int courseTime2, int courseTime3) {
		daysPerCourseArray[0] = courseTime1;
		daysPerCourseArray[1] = courseTime2;
		daysPerCourseArray[2] = courseTime3;
	};

	void Student::setDegreeProgram(DegreeProgram newDegreeProgram) {
	
	};


	// Constructor
	Student::Student(
		std::string sID,
		std::string fName,
		std::string lName,
		std::string email,
		int sAge,
		int courseTime1,
		int courseTime2,
		int courseTime3,
		DegreeProgram degreeProg
	) {
		studentID = sID;
		firstName = fName;
		lastName = lName;
		emailAddress = email;
		age = sAge;
		daysPerCourseArray[0] = courseTime1;
		daysPerCourseArray[1] = courseTime2;
		daysPerCourseArray[2] = courseTime3;
		degreeProgram = degreeProg;
	};


	// Print student info
	void Student::print() {
		
		std::cout << "StudentID: " << studentID <<
			"\n First Name: " << firstName <<
			"\n Last Name: " << lastName <<
			"\n Email Address: " << emailAddress <<
			"\n Age: " << age <<
			"\n Days in Course: " << daysPerCourseArray[0] << ", " << daysPerCourseArray[1] << ", " << daysPerCourseArray[2] <<
			"\n Degree Program: " << Roster::castDegreeProgramToString(degreeProgram) << std::endl;

		std::cout << std::endl;
	};
