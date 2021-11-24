#include <iostream>
using namespace std;

int main() {
    std::string today, lookingFor;
    std::cin >> today;
    std::cin >> lookingFor;
    if(today.length() >= lookingFor.length())
    {
        std::cout << "go";
    }
    else
    {
        std::cout << "no";
    }
    return 0;
}