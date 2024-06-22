/**
 * @file beecrowd1172.c
 * Array Replacement I - see the problem - https://prnt.sc/cK-EqKyLvke2
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[10], i, replace = 1;
    for (i = 0; i < 10; i++)
    {
        cin >> x[i];
        if (x[i] == 0 || x[i] <= 0)
        {
            x[i] = replace;
        }
    }

    for (i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
