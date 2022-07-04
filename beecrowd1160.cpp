/**
 * @file beecrowd1160.cpp
 * see the problem - https://prnt.sc/d7-JSSoDEubl
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int pa, pb;
    double g1, g2, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        c = 0;
        cin >> pa >> pb >> g1 >> g2;

        while (pa <= pb)
        {
            pa += ((pa * g1) / 100);
            pb += ((pb * g2) / 100);
            c++;
            if (c > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (c <= 100)
        {
            cout << c << " anos." << endl;
        }
    }
    return 0;
}