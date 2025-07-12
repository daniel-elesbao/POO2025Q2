#include <iostream>
int main()
{
    char A;
    std::cin >> A;
    if (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' ||
        A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U') 
    {
        std::cout << "vogal" << std::endl;
        return 0;
    }
    else 
    {
        std::cout << "consoante" << std::endl;
    }
    return 0;
}