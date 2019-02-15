/////////////////////////////////////////////////////////
//   Name: Alan Truong                                 //
//   Date: 2/12/2019                                   //
//   Course: Object Orient Numerical Method            //
//   File: norm.h                                      //
//                                                     //
/////////////////////////////////////////////////////////

// Name: operator()
// Pre: Must have ~ overloaded and return a double
//      T += must be define
//      size() must be define
// Post:No value is change 
// Description: Return the total maginitude of the calling set 

#ifndef NORM_H
#define NORM_H

#include <vector>

class norm
{
    public: 

        template <typename T>
        double operator()(const std::vector<T>& set)const;

};

#include "norm.hpp"

#endif 