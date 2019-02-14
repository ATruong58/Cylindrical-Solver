template <typename T>
cylindricalNum<T>::cylindricalNum(const T& sourceR, const T& sourceTheta, const T& sourceZ_Axis)
{
    r = sourceR;
    theta = sourceTheta;
    z_axis = sourceZ_Axis;
}

template <typename T>
cylindricalNum<T>::cylindricalNum(const cylindricalNum<T> &source)
{
    r = source.r;
    theta = source.theta;
    z_axis = source.z_axis;

}

template <typename T>
cylindricalNum<T>& cylindricalNum<T>::operator=(const cylindricalNum<T> &source)const
{
    r = source.r;
    theta = source.theta;
    z_axis = source.z_axis;
}

template <typename T>
cylindricalNum<T> cylindricalNum<T>::operator-()const
{
    cylindricalNum<T> reflected_origin_coordinate;

    reflected_origin_coordinate.r = r * -1;
    reflected_origin_coordinate.theta = theta * -1;
    reflected_origin_coordinate.z_axis = z_axis;

    return reflected_origin_coordinate;
}

template <typename T>
cylindricalNum<T> cylindricalNum<T>::operator!()const
{
    cylindricalNum<T> reflected_origin_coordinate;

    reflected_origin_coordinate.r = r;
    reflected_origin_coordinate.theta = theta;
    reflected_origin_coordinate.z_axis = z_axis * -1;

    return reflected_origin_coordinate;
}

template <typename T>
double cylindricalNum<T>::operator~()const{
    return sqrt(pow(r,2)+pow(z_axis,2));
}

template <typename T>
T cylindricalNum<T>::operator[](int index)
{
    if(index == 0)
    {
        return r;
    }
    else if(index == 1)
    {
        return theta;
    }
    else if(index == 2)
    {
        return z_axis;
    }
}

template <typename T>
bool cylindricalNum<T>::operator>(const cylindricalNum<T> &source)const
{
    cylindricalNum<T> p = this;
    return(~p > ~source);
}

template <typename T>
bool cylindricalNum<T>::operator<(const cylindricalNum<T> &source)const
{
    return(~this < ~source);
}

template <typename T>
bool cylindricalNum<T>::operator==(const cylindricalNum<T> &source)const
{
    return(r == source.r && theta == source.theta && z_axis == source.z_axis);
}

// template <typename T>
// std::string cylindricalNum<T>::cartesian()const
// {
    // double x = r * cos(theta);
    // double y = r * sin(theta);
    // return("(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z_axis) + ")");    
// }

template <typename T>
std::ostream& operator<<(std::ostream& os, cylindricalNum<T> obj)
{
    os << obj.r << ',' << obj.theta << ',' << obj.z_axis;
    return os;
}
