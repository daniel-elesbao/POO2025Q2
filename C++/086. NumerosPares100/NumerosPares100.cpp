#include <iostream>
int main()
{
    for (int i = 1; i < 100; ++i) 
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << "100" << std::endl;
}