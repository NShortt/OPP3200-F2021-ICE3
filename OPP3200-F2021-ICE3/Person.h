/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */

#pragma once
#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person {
public: 
    
/**
 * @param firstName
 * @param lastName
 * @param age
 */
Person(std::string firstName, std::string lastName, float age);
    
float GetAge() const;
    
/**
 * @param value
 */
void SetAge(float value);
    
std::string GetFirstName() const;
    
/**
 * @param value
 */
void SetFirstName(const std::string& value);
    
std::string GetLastName() const;
    
/**
 * @param value
 */
void SetLastName(const std::string& value);
    
void SaysHello() const;
    
virtual std::string ToString();

private: 
    float m_age;
    std::string m_firstName;
    std::string m_lastName;
};

#endif //_PERSON_H