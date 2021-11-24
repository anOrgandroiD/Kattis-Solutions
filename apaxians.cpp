#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    std::string name, adjustedName;
    std::cin >> name;
    char nameArray[name.length()];
    strcpy(nameArray, name.c_str());

    adjustedName = nameArray[0];
    for (int i = 1; i < name.length(); i++)
    {
        if (nameArray[i] != nameArray[i - 1])
            adjustedName = adjustedName + nameArray[i];
    }

    std::cout << adjustedName;
}
