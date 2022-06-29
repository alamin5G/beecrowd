/**
 * @file beecrowd1094.cpp
 * see the problem - https://prnt.sc/27oNfSe3slbg
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int sum = 0, csum = 0, rsum = 0, ssum = 0;
    double pc, pr, ps;
    cin >> t;
    while (t--)
    {
        int a;
        char c;
        cin >> a >> c;
        sum = sum + a;
        if (c == 'c' || c == 'C')
        {
            csum += a;
            
        }
        else if (c == 'r' || c == 'R')
        {
            rsum += a;
            
        }
        else if (c == 's' || c == 'S')
        {
            ssum += a;
            
        }
    }

    pc =  ((double)csum/sum) * 100;
    pr =  ((double)rsum/sum) * 100;
    ps =  ((double)ssum/sum) * 100;

    cout << "Total: " << sum << " cobaias" << endl;
    cout << "Total de coelhos: " << csum << endl;
    cout << "Total de ratos: " << rsum << endl;
    cout << "Total de sapos: " << ssum << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << pc << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << pr << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ps << " %" << endl;

    return 0;
}
