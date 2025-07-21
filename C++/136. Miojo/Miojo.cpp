#include <iostream>

int main()
{
    int T, A, B, xA, xB;
    std::cin >> T, A, B;
    xA = A, xB = B;
    if (A == T || A - B == T)
    {
        std::cout << A << std::endl;
        return 0;
    }
    else if (B == T || B - A == T)
    {
        std::cout << B << std::endl;
        return 0;
    }
    else
    {
        while (xA - xB != T && xB - xA != T)
        {
            if (xA < xB)
            {
                xA += A;
            }
            else
            {
                xB += B;
            }
        }
        if (xA < xB)
        {
            std::cout << xA << std::endl;
        }
        else
        {
            std::cout << xB << std::endl;
        }
        return 0;
    }
    return 0;
}