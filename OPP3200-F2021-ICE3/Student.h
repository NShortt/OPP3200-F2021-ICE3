/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */

#pragma once
#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include <string>


class Student: public Person {
public: 
    
/**
 * @param firstName
 * @param lastName
 * @param age
 * @param studentID
 */
Student(const std::string& firstName, const std::string& lastName, float age, std::string studentID);
    
std::string GetStudentID() const;
    
/**
 * @param value
 */
void SetStudentID(const std::string& value);
    
void Studies() const;
    
std::string ToString() override;
private:
std::string m_studentID;

};

#endif //_STUDENT_H