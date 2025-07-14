#include <iostream>
int main()
{
    int A,B;
    std::cin >> A >> B;
    for (int i = A; i < B - 1; ++i) 
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
    if (B % 2 == 0)
    {
        std::cout << B << std::endl;
    }
    else
    {
        std::cout << B - 1 << std::endl;
    }
}