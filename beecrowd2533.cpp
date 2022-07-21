/**
 * @file beecrowd2533.cpp
 * see the problem - https://prnt.sc/nncdA7_2_Ufp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
        double n, c, sumOfNC = 0, sumOfC = 0;
        for (auto i = 0; i < t; i++)
        {
            cin >> n >> c;
            sumOfNC += n * c;
            sumOfC += c;
        }
        cout << fixed << setprecision(4) << sumOfNC/(sumOfC*100)  << endl;
        
    }
    return 0;
}