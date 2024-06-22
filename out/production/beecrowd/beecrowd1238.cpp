/**
 * @file beecrowd1238.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/1238
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-31
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
    while (t--)
    {
        string s, st;
        cin >> s >> st;
        string add;
        int len;
        bool bigSt;
        if (s.size() < st.size())
        {
            len = s.size();
            bigSt = true;
        }
        else
        {
            len = st.size();
            bigSt = false;
        }

        bool first = true;
        int e = 0;
        int d = 0;
        for (auto i = 0; i < len * 2; i++)
        {
            if (first)
            {
                char c = s[e];
                add += c;
                first = false;
                e++;
            }
            else
            {
                char c = st[d];
                add += c;
                first = true;
                d++;
            }
        }
        cout << add;

        if (bigSt)
        {
            for (auto i = (add.size()/2); i < st.size(); i++)
            {
                cout << st[i];
            }
        }else{
            for (auto i = (add.size()/2); i<s.size(); i++){
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}