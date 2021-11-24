#include <iostream>

using namespace std;

int main()
{
    int fizz, buzz, limit;
    bool b;
    
    cin >> fizz;
    cin >> buzz;
    cin >> limit;
    
    for(int i = 1; i <= limit; i++){
        b = false;
        if(i % fizz == 0)
        {
            cout << "Fizz";
            b = true;
        }
        if(i % buzz == 0)
        {
            cout << "Buzz";
            b = true;
        }
        if(b == false)
        {
            cout << i;
        }
        
        cout << "\n";
    }
}
