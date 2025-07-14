#include <iostream>
int main()
{
    int A, B;
    std::cin >> A >> B;   
    for (int i = A; i < B; ++i) 
    {
        std::cout << i << " ";
    }
    std::cout << B << std::endl;
}