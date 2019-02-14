template <typename T>
double norm<T>::operator()(const std::vector<cylindricalNum<T>>& set)const
{
    double total_magnitude;
    
    for(int i = 0; i < set.size(); i++)
    {
        total_magnitude += ~set[i];
    }

    return total_magnitude;
}