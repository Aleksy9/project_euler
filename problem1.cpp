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
    int sum = 0;

    for (int i = 0; i < 1000; i++)
    {
        
        if(i%3==0 || i%5==0)
        {
            list.push_back(i);
            sum+=i;
        }


    }
    



    std::cout << sum << std::endl;


    return 0;
}