#ifndef NORM_H
#define NORM_H

#include "cylinder.h"

template <class T>
class norm
{
    public: 
        double operator()(const std::vector<cylindricalNum<T>>& set)const;

};

#include "norm.hpp"

#endif 