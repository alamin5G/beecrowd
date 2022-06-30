/**
 * @file beecrowd1164.cpp
 * see the problem - https://prnt.sc/b-p8wRwbsdnk
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum = 0, n, i;

    cin >> t;
    while (t--)
    {
        cin >> n;
        for ( i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
        {
            cout << n << " eh perfeito" << endl;
        }
        else
        {
            cout << n << " nao eh perfeito" << endl;
        }
        sum = 0;
    }

    return 0;
}