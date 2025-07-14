#include <iostream>
int main()
{
    long S, F;
    std::cin >> S >> F;
    bool primo = true;
    std::cout << "Primos entre " << S << " e " << F << ":";
    for (long i = S; i <= F; i++)
    {
        bool primo = true;
        if (i <= 1)
        {
            primo = false;
        }
        else
        {
            primo = true;
        }
        for (long j = 2; j * j <= i && primo; j++)
        {
            if (i % j == 0)
                primo = false;
        }
        if (primo)
        {
            std::cout << " " << i;
        }
    }
    std::cout << std::endl;
}