#include <iostream>
int main()
{
    int T, pA, pB;
    double gA, gB;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        std::cin >> pA >> pB >> gA >> gB;
        int anos = 0;
        while (pA <= pB && anos <= 100)
        {
            pA += (pA * gA / 100);
            pB += (pB * gB / 100);
            anos++;
        }
        if (anos > 100)
        {
            std::cout << "Mais de 1 seculo." << std::endl;
        }
        else
        {
            std::cout << anos << " anos." << std::endl;    
        }
    }
    return 0;
}