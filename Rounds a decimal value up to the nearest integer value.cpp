#include <iostream>
double n;
int round_up(double n);
int round_up(double n)
{
    return int(n+0.5);
}

int main() {
    std::cout << "Please enter a decimal number : " ;
    std::cin >> n;
    std::cout << "The integer value of this number is : " << round_up(n) << std::endl;
    return 0;
}

