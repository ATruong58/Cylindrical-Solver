template <typename T>
double norm::operator()(const std::vector<T>& set)const
{
    double total_magnitude = 0;
    
    for(unsigned i = 0; i < set.size(); i++)
    {
        total_magnitude += ~set[i];
    }

    return total_magnitude;
}

