#include <iostream>

using namespace std;

int recurse(int len) {
    int count = 0;
    if(len == 0) {
        return 1;
    } else if (len < 0) {
        return 0;
    } else {
        count += recurse(len - 1);
        count += recurse(len - 2);
        count += recurse(len - 3);
    }
    return count;
}

int main() {
    int len;
    cin >> len;

    cout << recurse(len) << "\n";
}
