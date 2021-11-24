#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int wireLength, distanceApart, currentBirds, leftSide, rightSide, birdsThatCanFit = 0;
    
    cin >> wireLength;
    cin >> distanceApart;
    cin >> currentBirds;
    
    if(currentBirds == 0)
    {
        birdsThatCanFit += (wireLength - 12) / distanceApart + 1;
    }
    
    else
    {
        int birdPositions [currentBirds];
    
        for(int i = 0; i < currentBirds; i++)
        {
            cin >> birdPositions[i];
        }
        
        sort(birdPositions, birdPositions + currentBirds);
        
        leftSide = birdPositions[0] - 6;
        rightSide = wireLength - birdPositions[currentBirds - 1] - 6;
        birdsThatCanFit += (leftSide / distanceApart) + (rightSide / distanceApart);
        
        for(int i = 0; i < currentBirds - 1; i++)
        {
            birdsThatCanFit += ((birdPositions[i + 1] - birdPositions[i]) / distanceApart) - 1;
        }
    }
    
    printf("%d\n", birdsThatCanFit);
}
