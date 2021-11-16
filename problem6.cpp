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
    int number = 100;

    int sum_100 = 0;
    int sum_square_100=0;

    for (int i = 1; i <= number; i++)
    {
        sum_100 += i;
        sum_square_100 += i*i;
    }
    
    int sum_100_squared = sum_100 * sum_100;

    int difference = sum_100_squared - sum_square_100;

    std::cout << sum_100_squared << std::endl;
    std::cout << sum_square_100 << std::endl;
    std::cout << difference << std::endl;


    return 0;
}