#include <iostream>

using namespace std;

int main()
{
    string codeStr, guessStr;
    int pegCount, rightChar = 0, rightPos = 0;
    cin >> pegCount;
    cin >> codeStr;
    cin >> guessStr;
    
    for(int i = 0; i < codeStr.length(); i++)
    {
        if(codeStr[i] == guessStr[i]){
            rightPos++;
            codeStr = codeStr.substr(0, i) + codeStr.substr(i + 1, codeStr.length() - i - 1);
            guessStr = guessStr.substr(0, i) + guessStr.substr(i + 1, guessStr.length() - i - 1);
            i--;
        }
    }
    
    for(int i = 0; i < codeStr.length(); i++)
    {
        for(int j = 0; j < guessStr.length(); j++)
        {
            if(codeStr[i] == guessStr[j]){
                rightChar++;
                codeStr = codeStr.substr(0, i) + codeStr.substr(i + 1, codeStr.length() - i - 1);
                guessStr = guessStr.substr(0, j) + guessStr.substr(j + 1, guessStr.length() - j - 1);
                i--;
                break;
            }
        }
    }
    
    cout << rightPos << " " << rightChar;
}
