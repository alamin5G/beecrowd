/**
 * @file beecrowd1099.cpp
 * Sum of Consecutive Odd Numbers II - see the problems https://prnt.sc/KxpKzsseVb_5
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, swap, sum = 0, x, y;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;
        if (x > y)
        {
            swap = x;
            x = y;
            y = swap;
        }

        for (i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }

        cout << sum << endl;
        sum = 0;
    }

    return 0;
}