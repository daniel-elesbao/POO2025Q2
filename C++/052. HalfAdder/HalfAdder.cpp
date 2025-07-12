#include <iostream>
int main()
{
    std::string A, B;
    bool P, Q;
    std::cin >> A >> B;
    P = (A == "true");
    Q = (B == "true");
    if (P && Q) {
        std::cout << "true false" << std::endl; 
        return 0;
    }
    else if (!P && !Q) {
        std::cout << "false false" << std::endl; 
        return 0;
    }
    else if (P && !Q) {
        std::cout << "false true" << std::endl; 
        return 0;
    }
    else if (!P && Q) {
        std::cout << "false true" << std::endl; 
        return 0;
    }
    return 0;
}