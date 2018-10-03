#include <iostream>
unsigned int n;
unsigned int detection_prime(unsigned int n)
{
    
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main() {
    std::cout << "Please enter a number more than 1 to detect : " ;
    std::cin >> n;
    if (detection_prime(n))
    {
        std::cout << "This is a prime" << std::endl;
    }
    else
    {
        std::cout << "This is not prime" << std::endl;
    }
    return 0;
}

3.    Write a C++ program that prints to the console all prime numbers within a specified
range of numbers (between two numbers).

#include <iostream>
unsigned int num1;
unsigned int num2;

unsigned int detection_prime(unsigned int num1)
{
    
    for (int i = 2; i <= num1/2; i++)
    {
        if (num1 % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main() {
    std::cout << "Please enter the first integer : " ;
    std::cin >> num1;
    std::cout << "Please enter the first integer : " ;
    std::cin >> num2;
    int i;
    for (i=num1;i<=num2/2;i++)
    {
        if(detection_prime(i))
        {
            std::cout << "The primes between" << num1 << " and " << num2 << " is : " << i << std::endl;
        }
    }
    return 0;
}

