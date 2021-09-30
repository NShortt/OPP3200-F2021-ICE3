/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */

#pragma once
#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"
#include <string>


class Professor: public Person {
public: 
    
/**
 * @param firstName
 * @param lastName
 * @param age
 * @param employeeID
 */
Professor(const std::string& firstName, const std::string& lastName, float age, std::string employeeID);
    
std::string GetEmployeeID() const;
    
/**
 * @param value
 */
void SetEmployeeID(const std::string& value);
    
void Teaches() const;
    
std::string ToString() override;
private: 
    std::string m_employeeID;

};

#endif //_PROFESSOR_H