#include <iostream>
int main()
{
    long K;
    std::cin >> K;
    bool primo = true;
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
        std::cout << "PRIMO" << std::endl;
    }
    else
    {
        std::cout << "COMPOSTO" << std::endl;
    }
    return 0;
}