#include <iostream>
#include <iomanip>
int main ()
{
    int D, M, A;
    std::cin >> D >> M >> A;
    if (A < 1582 || A == 1582 && (M < 10 || (M == 10 && D <= 15))) 
    {
        std::cout << "nao existe dia anterior para esta data" << std::endl;
        return 0;
    }
    if (D == 01 && M == 01)
    {
        D = 31;
        M = 12;
        A--;
    }
    else if (D == 1 && (M == 5 || M == 7 || M == 10 || M == 12)) 
    {
        D = 30;
        M--;
    }
    else if (D == 1 && (M == 2 || M == 6 || M == 8 || M == 9 || M == 11)) 
    {
        D = 31;
        M--;
    }
    else if (D == 1 && M == 3) 
    {
        if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0)) 
        {
            D = 29;
            M--;
        } 
        else 
        {
            D = 28;
            M--;
        }
    } 
    else 
    {
        D--;
    }
    std::cout << std::setfill('0') 
              << std::setw(2) << D << " "
              << std::setw(2) << M << " "
              << std::setw(4) << A << std::endl;
    return 0;
}