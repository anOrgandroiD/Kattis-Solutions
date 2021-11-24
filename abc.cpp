#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void reorder(int param1, int param2)
{
    int temp;
    
    if(param1 > param2)
    {
        temp = -param2;
        param2 = param1;
        param1 = temp;
    }
}
    
int main()
{
    int intArray[3];
    string order;
    
    cin >> intArray[0];
    cin >> intArray[1];
    cin >> intArray[2];
    cin >> order;
    
    sort(intArray, intArray + 3);
    
    for(int i = 0; i < 3; i++)
    {
        switch(order.at(i) - 65)
        {
            case 0:
                cout << intArray[0];
                break;
            case 1:
                cout << intArray[1];
                break;
            case 2:
                cout << intArray[2];
                break;
        }
        if(i != 2) cout << " ";
    }
}
