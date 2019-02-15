/////////////////////////////////////////////////////////
//   Name: Alan Truong                                 //
//   Date: 2/12/2019                                   //
//   Course: Object Orient Numerical Method            //
//   Purpose: Learning how to use templated class      //
//            and refamiliarize ourself with OOP       //
//                                                     //
/////////////////////////////////////////////////////////

// Name: Default Constructor
// Pre: Any type defined for the tempalted class
// Post: A class of the user name type 
// Description: Default constructor for the class cylindricalNum

// Name: Parametized Constructor
// Pre: User must pass in three variable of the same type in parameter
//      Order of variable the user want must be in Radius -> Theta -> Z
// Post: Return a cylindricalNum class with all of its member variable defined 
// Description: Parametized cosntructor takes 3 variable of the same type and
//              make a class with its member variable value as the user want

// Name: Copy Constructor
// Pre: The cynlidricalNum class in the parameter member variable must have a value
//      The calling cyblindricalNum does not need it member variable to be define
// Post: A cylindricalNum class with its member variable as the same value as 
//       the one in the parameters
// Description: Make a copy of a cylindricalNum class

// Name: Operator =
// Pre: Same as copy cosntructor 
// Post: Same as copy cosntructor    
// Description: Take the right hand side of the the equal and set the left hand
//              side member variable as the same as the right hand side.

// Name: Operator -
// Pre: A cynlidricalNum class and its member variable must have a value
//      T *(multiple) must be define
// Post: Returns a cylindricalNum class with its r and theta multiplied by -1
// Description: Return the coordinate of the calling object if it was 
//              reflected across the origin.

// Name: Operator !
// Pre: A cynlidricalNum class and its member variable must have a value
//      T *(multiple) must be define
// Post: Returns a cylindricalNum class with its Z multiplied by -1
// Description: Return the coordinate of the calling object if it was 
//              reflected across the Z-Axis

// Name: operator ~
// Pre: A cylindricalNum class with its member defined
//      Must have T +(addition) defined
//      pow(T) must be define
//      sqrt(T) must be define
// Post: The magitude of the object passed
// Description: Return a double with the maginitude of the calling object

// Name: operator [] with refernce
// Pre: User input must be in range of 0-2
//      cylindricalNum member variable must have a value
// Post: Return the value of a member variable as the user request
//       0 -> r , 1 -> theta , 2 -> z
// Description: return the value of a member variable of the calling class as a
//               reference so the user may change the value if they desire
// Note: Must implement this so input overloading is allow

// Name: operator [] const
// Pre: Same as operator [] with reference
// Post: Same as operator [] with reference
// Description: return the value of a member variable of the calling class as a 
//              const so user may not change it
// Note: Must implement this so output overloading is allow

// Name: operator >
// Pre: Two cylindricalNum class that has a value for each of its member variable
//      Magintude overload on ~ must be define for the calss
// Post: Return a bool either 1(true) or 0(false) if the lhs is further than the
//       origin than the rhs
// Description: Check if lhs is further to the origin than the other

// Name: operator <
// Pre: Same as operator >
// Post: Return a bool either 1(true) or 0(false) if the lhs is closer than the
//       origin than the rhs
// Description: Check if lhs is closerto the origin than the other

// Name: operator == 
// Pre: Two cylindricalNum of the same type
//      Both object member variable must be define
//      [] operator must me defined to return its member variable value
//      T -(subtraction) must be define
//      abs(T) must be define
// Post: A bool that tells if the difference between the two object are less than .005
// Description: Check if the two object are nearly eqal
// Note: We check if the difference is less than 0.005 because of an issue with double

// Name: 
// Pre: 
// Post: 
// Description: 

// Name: 
// Pre: 
// Post: 
// Description: 

// Name: 
// Pre: 
// Post: 
// Description: 



#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
#include <cmath>
#include <string>

template <class T>
class cylindricalNum
{
    private:
        T m_r;
        T m_theta;
        T m_z;

    public:
        cylindricalNum(){}
        ~cylindricalNum(){}
        cylindricalNum(const T& sourceR, const T& sourceTheta, const T& sourceZ_Axis);
        cylindricalNum(const cylindricalNum &source);
        
        
        cylindricalNum<T>& operator=(const cylindricalNum<T> &source)const;
        cylindricalNum<T> operator-()const;
        cylindricalNum<T> operator!()const;
        
        double operator~()const;
        T& operator[](int index);
        T operator[](int index)const;
        bool operator>(const cylindricalNum<T> &source)const;
        bool operator<(const cylindricalNum<T> &source)const;
        bool operator==(const cylindricalNum<T> &source)const;
        std::string cartesian()const;




};

        template <typename U>
        std::ostream& operator<<(std::ostream& os, const cylindricalNum<U> &obj);
        
        template <typename U>
        std::istream& operator>>(std::istream& in, cylindricalNum<U> &obj);


#include "cylinder.hpp"

#endif 