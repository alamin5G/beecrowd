/**
 * @file beecrowd1079.cpp
 * Weighted Averages - see the problems https://prnt.sc/Fe2yzBGXerSc
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    float a, b, c, avg, reserve[n];

    for (i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        avg = (a*2.0+b*3.0+c*5.0)/10;
        reserve[i] = avg;

    }

    for(i=1; i<=n; i++){
        cout << std::fixed << std::setprecision(1) << reserve[i] << endl;
    }

    return 0;
}
