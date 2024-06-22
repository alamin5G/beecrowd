/**
 * @file beecrowd2543.cpp
 * see the problem - https://prnt.sc/0zRG6istP6nX
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-21
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, id;
    int i, j;
    int contraStrike;

    while (cin >> n >> id)
    {
        contraStrike = 0;
        while (n--)
        {
            cin >> i >> j;
            if (i == id && j == 0)
            {
                contraStrike++;
            }
        }
        cout << contraStrike << endl;
        
    }
    
    return 0;
}