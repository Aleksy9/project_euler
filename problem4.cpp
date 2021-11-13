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
    // Input number
    int max_palyndrome;
    int multiplication;

    for (int i = 100; i < 1000; i++)
    {
        
        for (int j = 100; j < 1000; j++)
        {
            multiplication = i * j;
            int temp = multiplication;
            int sum=0;

            // Flips the number
            while (temp>0)
            {
                int r = temp%10;
                sum = (sum*10)+r;
                temp = (temp)/10;
            }
            
            // If condition is met the number is a palindrome
            if(multiplication == sum)
            {
                if (multiplication > max_palyndrome)
                {
                    max_palyndrome = multiplication;
                }
            }
            
        }
        
    }
    std::cout << max_palyndrome << std::endl;
    

    return 0;
}