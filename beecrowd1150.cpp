/**
 * @file beecrowd1150.cpp
 * Exceeding Z - see the problems https://prnt.sc/XM9xKrtSBlkX
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, z, a = 1, c = 0, i;
    cin >> x >> z;
    while (x >= z)
    {
        cin >> z;
    }

    for (i = x; i < z; i++)
    {
        c += i;
        if (c > z){
            break;
        }
           
        a++;
    }
    cout << a << endl;

    return 0;
}
