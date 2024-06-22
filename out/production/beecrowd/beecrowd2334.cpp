/**
 * @file beecrowd2334.cpp
 * see the problem - https://prnt.sc/BzbF72aDblTh
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-23
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;

    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }

        if (n == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << n-1 << endl;
        }
    }
    return 0;
}