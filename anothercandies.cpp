#include <iostream>

using namespace std;

int main() {
    int sets;

    cin >> sets;

    for(int i = 0; i < sets; i++) {
        int numKids, candies = 0;

        cin >> numKids;

        for(int j = 0; j < numKids; j++) {
            unsigned long long numCandy;

            cin >> numCandy;
            candies += numCandy % numKids;
        }

        if(candies % numKids == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
