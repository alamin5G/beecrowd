/**
 * @file beecrowd1173.c
 * Array Fill I - see the problem https://prnt.sc/c3OxPfiSK__N
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
    int x[10], i, v;
    cin >> v;

    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            x[i] = v;
            v = v * 2;
        }
        else
        {
            x[i] = v;
            v *= 2;
        }
    }

    for (i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
