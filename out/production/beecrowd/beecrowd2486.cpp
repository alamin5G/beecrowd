/**
 * @file beecrowd2486.cpp
 * see the problem - https://prnt.sc/P-pKLGoq7N0M
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-16
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string food[] = {"suco de laranja", "morango fresco", "mamao", "goiaba vermelha", "manga", "laranja", "brocolis"};
    int amount[] = {120, 85, 85, 70, 56, 50, 34};
    cin >> t;
    int unit, sum = 0;
    string s;
    while (t!=0)
    {
        sum = 0;
        while(t--)
        {
            cin >> unit;
            cin.ignore();
            getline(cin, s);
            for (auto i = 0; i < 7; i++)
            {
                if (s == food[i])
                {
                    sum += unit * amount[i];
                    break;
                }
            }
        }
        if (sum < 110)
        {
            cout << "Mais " << 110-sum << " mg" << endl;

        }
        else if (sum > 130)
        {
            cout << "Menos " << sum-130 << " mg" << endl;
        }
        else
        {
            cout << sum << " mg" << endl;
        }
    cin >> t;

    }


    return 0;
}
