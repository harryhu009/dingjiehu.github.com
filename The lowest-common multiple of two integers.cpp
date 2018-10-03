//============================================================================
// Name        : rolling.cpp
// Author      : harry hu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
int a;
int b;
int mod(int a, int b)
{
    if (a > b)
    {
        return a%b;
    }
    else
    {
        return b%a;
    }
}
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int calculation1(int a, int b)
{
    int c = a%b;
    
    while (a%b &&  b%a !=0) {
        
        
        if (a > b) {
            b = mod(a,b);
        } else {
            a = mod(a,b);
        }
    }
    return min(a,b);
}
int calculation2(int a, int b)
{
    return a*b/calculation1(a,b);
}

int main() {
    std::cout << "Please enter the first number  : " ;
    std::cin >> a;
    std::cout << "Please enter the second number  : " ;
    std::cin >> b;
    std::cout << "The lowest-common multiple of two integers is : " << calculation2(a,b) << std::endl;
}

