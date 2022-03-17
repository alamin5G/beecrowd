/**
 * @file beecrowd1132.cpp
 * Multiples of 13 - see the problems https://prnt.sc/Iedjzxk4x02X
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
    int i, x, y, sum = 0;
    cin >> x >> y;
    for (i = x; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            sum = sum + i;
        }
    }

    cout << sum << endl;
    return 0;
}