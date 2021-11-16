#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
#include <cstdio>
#include <algorithm>


bool isPalindrome(int x) 
{
        
    if(x<0)
    {
        x = -x;
    }
    
    long int n = x;
    long int sum=0;
    long int r;
    long int temp = x;
    
    while(n>0)
    {
        r = n % 10;
        sum = (sum*10)+r;
        n = n/10;
        std::cout << sum << std::endl;
    }
    
    
    bool is_palindrome;
    
    if(sum == temp)
    {
        is_palindrome = true;
    }
    else 
    {
        is_palindrome = false;
    }
    std::cout << sum << "  " << temp << std::endl;
    return is_palindrome;
        
}

int main()
{
    int number = 13031;
    bool answer;
    answer = isPalindrome(number);

    std::cout << answer << std::endl;

    return 0;
}