/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */


#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"


class Student: public Person {
public: 
    
/**
 * @param firstName
 * @param lastName
 * @param age
 * @param studentID
 */
void Student(string firstName, string lastName, float age, string studentID);
    
string GetStudentID();
    
/**
 * @param value
 */
void SetStudentID(string value);
    
void Studies();
    
string ToString();
private: 
    string m_studentID;
};

#endif //_STUDENT_H