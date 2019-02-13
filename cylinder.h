/////////////////////////////////////////////////////////
//   Name: Alan Truong                                 //
//   Date: 2/12/2019                                   //
//   Course: Object Orient Numerical Method            //
//   Purpose: Learning how to use templated class      //
//            and refamiliarize ourself with OOP       //
//                                                     //
/////////////////////////////////////////////////////////

#pragma once

#include <iostream>

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
        cylindricalNum(const T sourceR, const T sourceTheta, const T sourceZ_Axis);
        cylindricalNum(const cylindricalNum &source);
        
        
        cylindricalNum<T>& operator=(const cylindricalNum<T> &source)const;
        cylindricalNum<T>& operator-(cylindricalNum<T> &source)const;
        cylindricalNum<T>& operator!()const;
        cylindricalNum<T>& operator~()const;
        
        T operator[](cylindricalNum<T> &source);
        bool operator>(const cylindricalNum<T> &source)const;
        bool operator<(const cylindricalNum<T> &source)const;
        bool operator==(const cylindricalNum<T> &source)const;
        std::string cartesian(const cylindricalNum<T> &source)const;
        
        



};

#include "cylinder.hpp"