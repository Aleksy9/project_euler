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

    // Vector that will store all the prime factors
    std::vector<long int> factors_list;
    // Vector that will store all the prime numbers needed
    std::vector<long int> primes;
    
    while (number !=1)
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
                break;
            }
            
        }
        
        
        long int prime_divider = primes.back();

        // checks if the last prime number found is a factor of the target number and appends it the list
        if (number % prime_divider == 0)
        {
            number = number / prime_divider;
            factors_list.push_back(prime_divider);
        }
        
        i += 1;

    }
    
    // Finds the maximum factor
    auto max_factor = *std::max_element(factors_list.begin(), factors_list.end());
    
    std::cout << max_factor << std::endl;

    return 0;
}