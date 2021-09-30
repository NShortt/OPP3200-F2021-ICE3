/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param firstName
 * @param lastName
 * @param age
 * @param employeeID
 */
void Professor(string firstName, string lastName, float age, string employeeID);
    
string GetEmployeeID();
    
/**
 * @param value
 */
void SetEmployeeID(string value);
    
void Teaches();
    
string ToString();
private: 
    string m_employeeID;
};

#endif //_PROFESSOR_H