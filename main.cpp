//
//  main.cpp
//  perfect_no
//
//  Created by Sumitha on 9/19/16.
//  Copyright © 2016 Sumitha. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int max;
    int sum = 0;
    
    cin >> max;

    
    for(int i = 1; i <= max; i++)
    {
        for(int j = 1; j < i; j++)
        {
            
            if((i%j)==0)
            {
                sum = sum +j;
                
            }
        }
        
        if(sum==i)
            
        {
            cout << i << " is a perfect number! \n";
                
        }
        sum = 0;
    }
    
    return 0;
}

