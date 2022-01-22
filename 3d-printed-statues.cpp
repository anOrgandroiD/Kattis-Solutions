#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int input;

    cin >> input;

    cout << ceil(log2(input)) + 1;
}