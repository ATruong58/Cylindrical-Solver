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