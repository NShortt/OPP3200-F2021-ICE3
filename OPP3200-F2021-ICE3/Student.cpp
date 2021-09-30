/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */


#include "Student.h"

#include <iostream>

/**
 * Student implementation
 */


/**
 * @param firstName
 * @param lastName
 * @param age
 * @param studentID
 */
Student::Student(const std::string& firstName, const std::string& lastName, const float age, std::string studentID)
	: Person(firstName, lastName, age), m_studentID(std::move(studentID))
{

}

/**
 * @return std::string
 */
std::string Student::GetStudentID() const
{
    return m_studentID;
}

/**
 * @param value
 */
void Student::SetStudentID(const std::string& value)
{
    m_studentID = value;
}

/**
 * @return void
 */
void Student::Studies() const
{
    std::cout << GetFirstName() << " is Studying!" << std::endl;
}

/**
 * @return std::string
 */
std::string Student::ToString()
{
    std::string outputString;

    outputString += Person::ToString();
    outputString += "------------------------------------------------\n";
    outputString += "Student ID: " + GetStudentID() + "\n";
    outputString += "------------------------------------------------\n";

    return outputString;
}