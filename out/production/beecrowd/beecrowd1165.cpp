/**
 * @file beecrowd1165.cpp
 * Prime Number - https://prnt.sc/ehKv5urIay05
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n;
    cin >> a;

    while (a--)
    {
        cin >> n;
        int f = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                cout << n << " nao eh primo" << endl;
                f++;
                break;
            }
        }
        if (f == 0)
        {
            cout << n << " eh primo" << endl;
        }
    }

    return 0;
}
