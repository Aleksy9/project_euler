#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
#include <cstdio>


void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main()
{

    std::vector<int> list;
    int first = 1;
    int second = 1;
    int new_value;
    int sum = 0;

    while (second<4000000)
    {
        new_value = first + second;

        if (new_value%2 ==0)
        {
            sum+=new_value;
        }

        first = second;
        second = new_value;
    }
    
    



    std::cout << sum << std::endl;


    return 0;
}