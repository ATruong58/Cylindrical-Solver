/////////////////////////////////////////////////////////
//   Name: Alan Truong                                 //
//   Date: 2/12/2019                                   //
//   Course: Object Orient Numerical Method            //
//   Purpose: Learning how to use templated class      //
//            and refamiliarize ourself with OOP       //
//                                                     //
/////////////////////////////////////////////////////////

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
        std::istream& operator>>(std::istream& in, const cylindricalNum<U> &obj);


#include "cylinder.hpp"

#endif 