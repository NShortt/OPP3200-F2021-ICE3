/**
 * Project ICE4
 * @author Nicholas Shortt
 * @version 1.0
 */


#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    
/**
 * @param firstName
 * @param lastName
 * @param age
 */
void Person(string firstName, string lastName, float age);
    
float GetAge();
    
/**
 * @param value
 */
void SetAge(float value);
    
string GetFirstName();
    
/**
 * @param value
 */
void SetFirstName(string value);
    
string GetLastName();
    
/**
 * @param value
 */
void SetLastName(string value);
    
void SaysHello();
    
string ToString();
private: 
    float m_age;
    string m_firstName;
    string m_lastName;
};

#endif //_PERSON_H