/////////////////////////////////////////////////////////
//   Name: Alan Truong                                 //
//   Date: 2/12/2019                                   //
//   Course: Object Orient Numerical Method            //
//   File: driver.cpp                                  //
//                                                     //
/////////////////////////////////////////////////////////

#include "cylinder.h"
#include "norm.h"
#include <fstream>

int main(int argc,  char * argv[])
{
    std::vector<cylindricalNum<double>> set_of_coordinate;
    cylindricalNum<double> temp;
    norm driver;
    int loop;
    try
    {
        if(argc > 1)
        {
            std::ifstream fs(argv[1]);
            if (!(fs.is_open() && fs.good()))
            {
                throw "File not read correctly\n";
            }
            fs >> loop;
            if(loop < 5)
            {
                throw "Too little amount of dataset\n";
            }

            for(int i = 0; i < loop; i++)
            {
                fs >> temp;
                set_of_coordinate.push_back(temp);

            }

            
            std::cout << -set_of_coordinate[0] << std::endl;
            std::cout << !set_of_coordinate[1] << std::endl;
            std::cout << (set_of_coordinate[3] < set_of_coordinate[4]);
            std::cout << set_of_coordinate[5].cartesian() << std::endl;
            std::cout << std::endl << driver(set_of_coordinate) << std::endl;
        }
        else
        {
            throw "No arguments.\n";
        }
    }
    catch (std::string message)
    {
        std::cerr << message << std::endl;
    }

    return 0;
}