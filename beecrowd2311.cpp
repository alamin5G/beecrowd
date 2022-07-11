/**
 * @file beecrowd2311.cpp
 * see the problem - https://prnt.sc/dtaLPq3D8o5U
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    double d, sc[7], sum, fs;
    for (auto j = 0; j < t; j++)
    {
        cin >> s;
        cin >> d;
        for (auto i = 0; i < 7; i++)
        {
            cin >> sc[i];
        }

        sort(sc, sc+7);

        sc[0] = 0;
        sc[6] = 0;

        for(auto i=0; i<7; i++){
            fs += sc[i];
        }

        sum = fs * d;

        cout << s << " " << fixed << setprecision(2) << sum << endl;
        fs =0;
        sum = 0;
    }
    return 0;
}