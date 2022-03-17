/**
 * @file beecrowd1117.cpp
 * Score Validation - see the output https://prnt.sc/eiL-WR5Z_UR9
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, avg;
    int count = 0;

    while (true)
    {
        cin >> x;
        if (x < 0 || x > 10)
        {
            cout << "nota invalida" << endl;
        }
        else
        {
            count++;
            avg = avg + x;
        }

        if (count == 2)
        {
            cout << "media = " << fixed << std::setprecision(2) << avg / count << endl;
            break;
        }
    }

    return 0;
}