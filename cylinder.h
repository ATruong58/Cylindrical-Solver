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
#include <vector>

template <class T>
class cylindricalNum
{
    private:
        T r;
        T theta;
        T z_axis;

    public:
        cylindricalNum(){}
        ~cylindricalNum(){}
        cylindricalNum(const T& sourceR, const T& sourceTheta, const T& sourceZ_Axis);
        cylindricalNum(const cylindricalNum &source);
        
        
        cylindricalNum<T>& operator=(const cylindricalNum<T> &source)const;
        cylindricalNum<T> operator-()const;
        cylindricalNum<T> operator!()const;
        
        double operator~()const;
        T operator[](int index);
        bool operator>(const cylindricalNum<T> &source)const;
        bool operator<(const cylindricalNum<T> &source)const;
        bool operator==(const cylindricalNum<T> &source)const;
        std::string cartesian()const;

        template <typename U>
        friend std::ostream& operator<<(std::ostream& os, cylindricalNum<U> obj);

};

#include "cylinder.hpp"

#endif 