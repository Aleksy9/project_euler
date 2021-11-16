#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
#include <cstdio>
#include <algorithm>

void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}


int main()
{
    bool solution_found = false;
    int number=0;
    int divisors = 20;
    bool not_divisible;

    while(solution_found == false)
    {
        not_divisible = false;
        number += 1;
        for (int i = 2; i < divisors+1; i++)
        {
            if (number%i!=0)
            {
                not_divisible = true;
            }
    
        }

        if(not_divisible==false)
        {
            solution_found = true;
        }
        
    }

    std::cout << number << std::endl;

    return 0;
}