/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */


#include "Professor.h"

#include <iostream>

/**
 * Professor implementation
 */


/**
 * @param firstName
 * @param lastName
 * @param age
 * @param employeeID
 */
Professor::Professor(const std::string& firstName, const std::string& lastName, const float age, std::string employeeID)
	: Person(firstName, lastName, age), m_employeeID(std::move(employeeID))
{
}

/**
 * @return std::string
 */
std::string Professor::GetEmployeeID() const
{
    return m_employeeID;
}

/**
 * @param value
 */
void Professor::SetEmployeeID(const std::string& value)
{
    m_employeeID = value;
}

/**
 * @return void
 */
void Professor::Teaches() const
{
    std::cout << GetFirstName() << " is Teaching!" << std::endl;
}

/**
 * @return std::string
 */
std::string Professor::ToString()
{
    std::string outputString;

    outputString += Person::ToString();
    outputString += "------------------------------------------------\n";
    outputString += "Employee ID: " + GetEmployeeID() + "\n";
    outputString += "------------------------------------------------\n";

    return outputString;
}