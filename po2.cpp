#include <iostream>

int main() 
{
    int exp;
    std::cout << "Enter value of n: "; //2^n
    std::cin >> exp;

    int res = 1;
    for (int i = 0; i < exp; ++i) {  //and i starts from 0 so the loop will run till i<exp that is given in input
        res *= 2;   //multiples the previous result by 2
    }

    std::cout << "2^" << exp << " = " << res << std::endl;

    return 0;
}