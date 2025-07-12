#include <iostream>
int main()
{
    std::string A;
    bool P;
    std::cin >> A;
    P = (A == "true");
    std::cout << (!P ? "true" : "false") << std::endl;
    return 0;
}