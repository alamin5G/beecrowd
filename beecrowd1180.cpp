/**
 * @file beecrowd1180.cpp
 * Lowest Number and Position - see the problems https://prnt.sc/rbJxwgsJNAnK
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, p=1000, position;
    cin >> n;
    int x[n];

    for(i = 0;i < n;i++)
    {
        cin >> x[i];
        if (x[i] < p)
        {
            p = x[i];
            position = i;
        }
        
    }

    cout << "Menor valor: " << p << endl;
    cout << "Posicao: " << position << endl;
    
    return 0;
}
