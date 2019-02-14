#include "cylinder.h"
#include "norm.h"

int main(){
    std::vector<cylindricalNum<double>> set_of_coordinate;
    cylindricalNum<double> temp;
    norm driver;
    int loop;
    
    std::cin >> loop;
    try
    {

        if(loop < 5)
        {
            throw "Too little amount of dataset";
        }

        for(int i = 0; i < loop; i++)
        {
            std::cin >> temp;
            set_of_coordinate.push_back(temp);

        }

    }
    catch (std::string message)
    {
        std::cout << message << std::endl;
    }
            
    std::cout << -set_of_coordinate[0] << std::endl;
    std::cout << !set_of_coordinate[1] << std::endl;
    std::cout << (set_of_coordinate[3] < set_of_coordinate[4]);
    std::cout << std::endl << driver(set_of_coordinate) << std::endl;

    return 0;
}