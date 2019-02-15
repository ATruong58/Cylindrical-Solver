/////////////////////////////////////////////////////////
//   Name: Alan Truong                                 //
//   Date: 2/12/2019                                   //
//   Course: Object Orient Numerical Method            //
//   File: cylinder.hpp                                //
//                                                     //
/////////////////////////////////////////////////////////

template <typename T>
cylindricalNum<T>::cylindricalNum()
{
    m_r = 0;
    m_theta = 0;
    m_z = 0;
}

template <typename T>
cylindricalNum<T>::cylindricalNum(const T& sourceR, const T& sourcem_theta, const T& sourcem_z)
{
    m_r = sourceR;
    m_theta = sourcem_theta;
    m_z = sourcem_z;
}

template <typename T>
cylindricalNum<T>::cylindricalNum(const cylindricalNum<T> &source)
{
    m_r = source.m_r;
    m_theta = source.m_theta;
    m_z = source.m_z;

}

template <typename T>
cylindricalNum<T>& cylindricalNum<T>::operator=(const cylindricalNum<T> &source)const
{
    m_r = source.m_r;
    m_theta = source.m_theta;
    m_z = source.m_z;
}

template <typename T>
cylindricalNum<T> cylindricalNum<T>::operator-()const
{
    cylindricalNum<T> reflected_origin_coordinate;

    reflected_origin_coordinate.m_r = m_r * -1;
    reflected_origin_coordinate.m_theta = m_theta * -1;
    reflected_origin_coordinate.m_z = m_z;

    return reflected_origin_coordinate;
}

template <typename T>
cylindricalNum<T> cylindricalNum<T>::operator!()const
{
    cylindricalNum<T> reflected_origin_coordinate;

    reflected_origin_coordinate.m_r = m_r;
    reflected_origin_coordinate.m_theta = m_theta;
    reflected_origin_coordinate.m_z = m_z * -1;

    return reflected_origin_coordinate;
}

template <typename T>
double cylindricalNum<T>::operator~()const{
    return sqrt(pow(m_r,2)+pow(m_z,2));
}

template <typename T>
T& cylindricalNum<T>::operator[](int index)
{
    if(index == 0)
    {
        return m_r;
    }
    else if(index == 1)
    {
        return m_theta;
    }
    else if(index == 2)
    {
        return m_z;
    }
    else
    {
        throw "Out of Bounds";
    }
}

template <typename T>
T cylindricalNum<T>::operator[](int index)const
{
    if(index == 0)
    {
        return m_r;
    }
    else if(index == 1)
    {
        return m_theta;
    }
    else if(index == 2)
    {
        return m_z;
    }
    else
    {
        throw "Out of Bounds";
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
    return(m_r == source.m_r && m_theta == source.m_theta && m_z == source.m_z);
}

template <typename T>
std::string cylindricalNum<T>::cartesian()const
{
    double x = r * cos(m_theta);
    double y = r * sin(m_theta);
    return("(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(m_z) + ")");    
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const cylindricalNum<T> &obj)
{
    os << "(" << obj[0] << ',' << obj[1] << ',' << obj[2] << ")";
    return os;
}

template <typename T>
std::istream& operator>>(std::istream& in, const cylindricalNum<T> &obj)
{
    in >> obj[0] >> obj[1] >> obj[2];
    return in;
}
