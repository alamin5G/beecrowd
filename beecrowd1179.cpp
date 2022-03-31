/**
 * @file beecrowd1179.cpp
 * Array Fill IV - https://prnt.sc/iakXlbYFUuIs
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int par[5], impar[5], i, temp, n, eCount = 0, oCount = 0;
    for (i = 0; i < 15; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            par[eCount] = n;
            eCount++;
        }
        else
        {
            impar[oCount] = n;
            oCount++;
        }

        if (eCount == 5)
        {
            temp = 0;
            while (temp != 5)
            {
                cout << "par[" << temp << "] = " << par[temp] << endl;
                temp++;
            }
            eCount = 0;
        }

        if (oCount == 5)
        {
            temp = 0;
            while (temp != 5)
            {
                cout << "impar[" << temp << "] = " << impar[temp] << endl;
                temp++;
            }
            oCount = 0;
        }

        if (i == 14)
        {
            temp = 0;
            while (temp < oCount)
            {
                cout << "impar[" << temp << "] = " << impar[temp] << endl;
                temp++;
            }

            temp = 0;
            while (temp < eCount)
            {
                cout << "par[" << temp << "] = " << par[temp] << endl;
                temp++;
            }
        }
    }

    return 0;
}
