#include <iostream>
int main()
{
    std::string A, B;
    bool P, Q;
    std::cin >> A >> B;
    P = (A == "true");
    Q = (B == "true");
    std::cout << (P && Q ? "true" : "false") << std::endl;
    return 0;
}