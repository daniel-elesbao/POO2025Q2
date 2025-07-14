#include <iostream>
int main()
{
    long K;
    std::cin >> K;
    bool primo = true;
    while (K >= 0)
    {
        if (K <= 1)
        {
            primo = false;
        }
        else
        {
            primo = true;
        }
        for (long i = 2; i < K; ++i)
        {
            if (K % i == 0)
            {
                primo = false;
            }
        }
        if (primo)
        {
            std::cout << "SIM" << std::endl;
        }
        else
        {
            std::cout << "NAO" << std::endl;
        }
        std::cin >> K;
    }
    return 0;
}