/**
 * @file beecrowd1145.cpp
 * Logical Sequence 2 - see the problems https://prnt.sc/5TdtjGTFNGid
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

    int i, x, y, swap, n = 1;

    cin >> x >> y;

    if (x > y)
    {
        swap = x;
        x = y;
        y = swap;
    }

    for (int i = 1; i <= y; i++)
    {
        if (n == x)
        {
            cout << i << endl;
            n = 1;
        }
        else
        {
            cout << i << " ";
            n++;
        }
    }
    return 0;
}