/**
 * @file beecrowd1158.cpp
 * Sum of Consecutive Odd Numbers III - see the problems https://prnt.sc/1zyIybyf7uiI
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, i, temp = 0, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        temp = x;

        if (x % 2 == 0)
            temp++;

        for (i = 1; i <= y; i++)
        {

            if (temp % 2 != 0)
            {
                sum = sum + temp;
                temp = temp + 2;
            }
        }

        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
