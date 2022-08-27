/**
 * @file beecrowd3241.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/3241
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
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
        string s;
        string sa;
        string sb;
        int index = 0;
        int a;
        int b;
        cin >> s;
        if (s == "P=NP")
        {
            cout << "skipped" << endl;
        }
        else
        {
            for (auto i = 0; i < s.size(); i++)
            {
                if (s[i] == '+')
                {
                    break;
                }
                else
                {
                    char c = s[i];
                    sa += c;
                    index = i;
                }
            }
            a = stoi(sa);
            
            for (auto i = index+2; i < s.size(); i++)
            {
                    char c = s[i];
                    sb += c;
                
            }
            b = stoi(sb);
            cout << a + b <<endl;
        }
    }

    return 0;
}