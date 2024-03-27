// C867-Scripting-and-Programming-Applications.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
You are hired as a contractor to help a university migrate an existing student system to a new platform using C++ language. Since the application already exists, its requirements exist as well, and they are outlined in the next section. You are responsible for implementing the part of the system based on these requirements. A list of data is provided as part of these requirements. This part of the system is responsible for reading and manipulating the provided data.

You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course.
Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program.
This information can be found in the “studentData Table” below.
The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below).
While parsing the list of data, the program should create student objects.
The entire student list will be stored in one array of students called classRosterArray.
Specific data-related output will be directed to the console.
*/



#include <iostream>
#include "student.h"
#include "roster.h"


int main()
{
    // F.1 Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
    std::string courseTitle = "C867 - Scripting and Programming Applications";
    std::string programmingLanguage = "C++";
    std::string WGUstudentID = "011010291";
    std::string WGUstudentName = "Joseph 'Edward' Doherty";

    std::cout << "Course: " << courseTitle <<
        "   Programming Language Used: " << programmingLanguage <<
        "   WGU Student ID: " << WGUstudentID <<
        "   WGU Student Name: " << WGUstudentName << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    // F.2 Create an instance of the Roster class called classRoster.
    Roster* classRoster = new Roster(5);

    // F.3 Add each student to classRoster.
    classRoster->parse();
    
    // F.4 printAll()
    classRoster->printAll();

    // F.4 printInvalidEmails()
    classRoster->printInvalidEmails();

    // loop through classRosterArray and for each element printAverageDaysInCourse
    for (int i = 0; i < 5; i++) {
        classRoster->printAverageDaysInCourse(classRoster->classRosterArray[i]->getStudentID());
        // NOTE: For the current_objects's studentID, use an accessor (getter) for the classRosterArray to access the studentID
    };
    std::cout << std::endl;
    
    classRoster->printByDegreeProgram(SOFTWARE);

    classRoster->remove("A3");

    classRoster->printAll();

    classRoster->remove("A3");

    // Demonstrate add() functionality. This wasn't in the requirements but I felt it was important
    classRoster->add("A6", "New", "Student", "email@email.com", 27, 10, 10, 10, NETWORK);

    classRoster->printByDegreeProgram(NETWORK);

    // F.5: Implement the destructor to release the memory that was allocated dynamically in Roster
    classRoster->~Roster();
    delete classRoster;

};

