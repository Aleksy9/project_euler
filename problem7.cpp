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
    auto number = 600851475143;

    // Starting prime number
    long int i = 2;

    // Vector that will store all the prime numbers needed
    std::vector<long int> primes;
    
    while(primes.size()<10001)
    {
        
        for (int j = 2; j <= i; j++)
        {
            
            int modulo = i%j;
            
            // Stops the loop if this condition is met as the number will not be prime
            if (modulo==0 & i != j)
            {
                break;
            }

            // If this condition is met the number i is prime
            if (modulo==0 & i == j)
            {
                primes.push_back(i);
            }
        }

        i +=1;
    }

    std::cout << primes.back() << std::endl;

    return 0;
}