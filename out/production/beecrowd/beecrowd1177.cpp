/**
 * @file beecrowd1177.cpp
 * Array Fill II - see the problems https://prnt.sc/txy7_p3fgTyn
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
    int T, N[1000], i, c = 0, temp;
    cin >> T;
    temp = T;

    for (i = 0; i < 1000; i++)
    {
        N[i] = c;
        c++;
        cout << "N[" << i << "] = " << N[i] << endl;
        T--;
        if (T == 0)
        {
            T = temp;
            c = 0;
        }
    }

    return 0;
}
