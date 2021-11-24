#include <iostream>

using namespace std;

int main()
{
    int trials, timestamp, distance, prevTime, prevDist, timeDiff, speed, maxSpeed;
    prevTime = 0;
    prevDist = 0;
    maxSpeed = 0;
    
    cin >> trials;
    
    for(int i = 0; i < trials; i++)
    {
        cin >> timestamp;
        cin >> distance;
        
        timeDiff = timestamp - prevTime;
        
        if(timeDiff == 0)
        {
            timeDiff = 1;
        }
        
        speed = (distance - prevDist) / timeDiff;
        
        if (speed > maxSpeed)
        {
            maxSpeed = speed;
        }
        
        prevTime = timestamp;
        prevDist = distance;
    }
    
    printf("%d", maxSpeed);
}
