/**
 * @file beecrowd2150.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2150
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, st;
    while (cin >> s && getline(cin >> ws, st))
    {
        int c = 0;
        for (auto i = 0; i < st.size(); i++)
        {
            for (auto j = 0; j < s.size(); j++)
            {
                if (st[i] == s[j])
                {
                    c++;
                }
            }
        }
        cout << c <<endl;
    }

    return 0;
}