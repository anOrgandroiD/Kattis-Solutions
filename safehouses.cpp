#include <iostream>
#include <climits>
#include <tuple>
#include <vector>

using namespace std;

int main()
{
    int cases, maxDistance = 0, currDistance, tempDistance;
    string street;
    typedef vector<tuple<int, int>> entityVector;
    entityVector spyVector, houseVector;
    
    cin >> cases;
    
    for(int i = 0; i < cases; i++)
    {
        cin >> street;
        
        for(int j = 0; j < street.length(); j++)
        {
            if(street.at(j) == 'H')
            {
                houseVector.emplace_back(i, j);
            }
            else if(street.at(j) == 'S')
            {
                spyVector.emplace_back(i, j);
            }
        }
    }
    
    for(auto & spyElem : spyVector)
    {
        currDistance = INT_MAX;
        
        for(auto & houseElem : houseVector)
        {
            tempDistance = abs(get<0>(houseElem) - get<0>(spyElem)) + abs(get<1>(houseElem) - get<1>(spyElem));
            if(tempDistance < currDistance) currDistance = tempDistance;
        }
        
        if(currDistance > maxDistance) maxDistance = currDistance;
    }
    
    cout << maxDistance;
}
