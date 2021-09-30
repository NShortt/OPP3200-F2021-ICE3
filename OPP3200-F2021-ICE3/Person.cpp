/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */


#include "Person.h"

#include <iostream>


/**
 * Person implementation
 */


/**
 * @param firstName
 * @param lastName
 * @param age
 */
Person::Person(std::string firstName, std::string lastName, const float age)
	: m_age(age), m_firstName(std::move(firstName)), m_lastName(std::move(lastName))
{

}

/**
 * @return float
 */
float Person::GetAge() const
{
    return m_age;
}

/**
 * @param value
 */
void Person::SetAge(const float value)
{
    m_age = value;
}

/**
 * @return std::string
 */
std::string Person::GetFirstName() const
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::SetFirstName(const std::string& value)
{
    m_firstName = value;
}

/**
 * @return std::string
 */
std::string Person::GetLastName() const
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::SetLastName(const std::string& value)
{
    m_lastName = value;
}

/**
 * @return void
 */
void Person::SaysHello() const
{
    std::cout << GetFirstName() << " says Hello!" << std::endl;
}

/**
 * @return std::string
 */
std::string Person::ToString()
{
    std::string outputString;

    outputString += "------------------------------------------------\n";
    outputString += "First Name: " + GetFirstName() + "\n";
    outputString += "Last Name : " + GetLastName() + "\n";
    outputString += "Age       : " + std::to_string(GetAge()) + "\n";
    outputString += "------------------------------------------------\n";

    return outputString;
}