#include <iostream>
int main()
{
    int A, B;
    std::cin >> A >> B;

    if (A / 1000 == B % 10 && (A / 100) % 10 == (B / 10) % 10 && (A / 10) % 10 == (B / 100) % 10 && A % 10 == B / 1000)
    {
        std::cout << "espelho" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "nao espelho" << std::endl;
        return 0;
    }
   return 0;
}