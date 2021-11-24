#include <iostream>

using namespace std;

int main()
{
    int numberTotal;
    cin >> numberTotal;
    int *numberList = new int[numberTotal];
    
    for(int i = 0; i < numberTotal; i++)
    {
        cin >> numberList[numberTotal - 1 -i];
    }
    
    for(int i = 0; i < numberTotal; i++)
    {
        printf("%d\n", numberList[i]);
    }

    return 0;
}
