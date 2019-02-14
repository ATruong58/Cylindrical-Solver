#include "cylinder.h"
#include "norm.h"

int main(){
    std::vector<cylindricalNum<int>> set_of_coordinate;
    cylindricalNum<int> temp;
    int loop;

    std::cin >> loop;

    for(int i = 0; i < loop; i++)
    {
        try{
            std::cin >> temp;

            set_of_coordinate.push_back(temp);
        }
        catch (std::string message)
        {
            std::cout << message << std::endl;
        }
    }

    std::cout << -set_of_coordinate[0] << std::endl;
    std::cout << !set_of_coordinate[1] << std::endl;

    return 0;
}