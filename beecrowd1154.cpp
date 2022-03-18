/**
 * @file beecrowd1154.cpp
 * Ages - see the problems https://prnt.sc/jBpNDOcWK689
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-19
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, age = 0.0, avg = 0.0;
    int count = 0;

    while (cin >> n)
    {

        if (n < 0) break;

        age = age + n;
        count++;
    }
    avg = age / count;
    cout << std::fixed << std::setprecision(2) << avg << endl;
    return 0;
}