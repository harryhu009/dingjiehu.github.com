//Friendliness of a number 9 is 2. This is because 9 can be written as
2+3+4 = 9 and 4+5 = 9
Friendliness of a number 150 is 5. This is because 150 can be written as one of the following:
3+4+5+6+7+8+9+10+11+12+13+14+15+16+17 = 150 7+8+9+10+11+12+13+14+15+16+17+18 = 150 28+29+30+31+32 = 150
36+37+38+39 = 150
49+50+51 = 150 //

#include <iostream>
unsigned int n;
int cout = 0;
int main() {
    std::cout << "Please enter the number n to count the friendliness : " ;
    std::cin >> n;
    unsigned int i;
    unsigned int x;
    
    
    for (x = 1; x <= (n+1)/2;x++)
    {
        for (i = 1;i <= (n+1)/2;i++)
        {
            if ((x*i+(i-1)*i/2) == n )
            {
                cout +=1;
            }
        }
    }
    std::cout<< "The friendliness of a given number n is : " << cout << std::endl;
    return 0;
}
