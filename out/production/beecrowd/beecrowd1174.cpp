/**
 * @file beecrowd1174.cpp
 * Array Selection I - see the problem https://prnt.sc/SB83iaD47aGQ
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
    float A[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < 100; i++)
    {
        if (A[i] <= 10)
        {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << A[i] << endl;
        }
    }

    return 0;
}
