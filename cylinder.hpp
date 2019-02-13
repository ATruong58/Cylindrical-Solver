

template <typename T>
cylindricalNum<T>::cylindricalNum(const T sourceR, const T sourceTheta, const T sourceZ_Axis)
{
    this.r = sourceR;
    this.theta = sourceTheta;
    this.z_axis = sourceZ_Axis;
}

template <typename T>
cylindricalNum<T>::cylindricalNum(const cylindricalNum<T> &source)
{
    this.r = source.r;
    this.theta = source.theta;
    this.z_axis = source.z_axis;

}

template <typename T>
cylindricalNum<T>& cylindricalNum<T>::operator=(const cylindricalNum<T> &source)const
{
    this.r = source.r;
    this.theta = source.theta;
    this.z_axis = source.z_axis;
}

