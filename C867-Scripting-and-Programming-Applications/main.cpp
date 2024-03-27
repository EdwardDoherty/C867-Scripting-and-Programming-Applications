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
        "\n Programming Language Used: " << programmingLanguage <<
        "\n WGU Student ID: " << WGUstudentID <<
        "\n WGU Student Name: " << WGUstudentName << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    // F.2 Create an instance of the Roster class called classRoster.
    Roster* classRoster = new Roster(5);

    // F.3 Add each student to classRoster.
    classRoster->parse();
    
    // F.4 printAll()
    std::cout << "PRINT ALL: " << std::endl;
    classRoster->printAll();
    std::cout << "--------------------------------------------" << std::endl;

    // F.4 printInvalidEmails()
    std::cout << "PRINT INVALID EMAILS: " << std::endl;
    classRoster->printInvalidEmails();
    std::cout << "--------------------------------------------" << std::endl;

    // loop through classRosterArray and for each element printAverageDaysInCourse
    std::cout << "PRINT AVERAGE DAYS IN COURSE: " << std::endl;
    for (int i = 0; i < 5; i++) {
        classRoster->printAverageDaysInCourse(classRoster->classRosterArray[i]->getStudentID());
        // NOTE: For the current_objects's studentID, use an accessor (getter) for the classRosterArray to access the studentID
    };
    std::cout << "--------------------------------------------" << std::endl;
    
    std::cout << "PRINT SOFTWARE STUDENTS: " << std::endl;
    classRoster->printByDegreeProgram(SOFTWARE);
    std::cout << "--------------------------------------------" << std::endl;

    std::cout << "REMOVE STUDENTID A3: " << std::endl;
    classRoster->remove("A3");
    std::cout << "--------------------------------------------" << std::endl;

    std::cout << "PRINT ALL: " << std::endl;
    classRoster->printAll();
    std::cout << "--------------------------------------------" << std::endl;

    std::cout << "REMOVE STUDENTID A3 (FAILURE): " << std::endl;
    classRoster->remove("A3");
    std::cout << "--------------------------------------------" << std::endl;

    // Implement the destructor to release the memory that was allocated dynamically in Roster
    classRoster->~Roster();
    delete classRoster;

};












// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// string input;
// cout << "Hello World!\n";
// cin >> input;
// cout << "You entered: " << input << "!";
