/**
 * @file beecrowd2547.cpp
 * see the problem - https://prnt.sc/b8G6v3RZkKPl
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-23
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, m, p, c = 0;
    while (cin >> N >> m >> p)
    {
        int a[N];
        for (auto i = 0; i < N; i++)
        {
            cin >> a[i];
            if (a[i] >= m && a[i] <= p)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}