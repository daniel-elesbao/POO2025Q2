#include <iostream>
#include <iomanip>
int main ()
{
    int D, M, A;
    std::cin >> D >> M >> A;
    if (D == 31 && M == 12)
    {
        D = 1;
        M = 1;
        A++;
    }
    else if (D == 30 && (M == 4 || M == 6 || M == 9 || M == 11)) 
    {
        D = 1;
        M++;
    }
    else if (D == 31 && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10)) 
    {
        D = 1;
        M++;
    }
    else if (D == 28 && M == 2) 
    {
        if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0)) 
        {
            D = 29;
        } 
        else 
        {
            D = 1;
            M++;
        }
    } 
    else if (D == 29 && M == 2) 
    {
        D = 1;
        M++;
    } 
    else 
    {
        D++;
    }
    std::cout << std::setfill('0') 
              << std::setw(2) << D << " "
              << std::setw(2) << M << " "
              << std::setw(4) << A << std::endl;
    return 0;
}