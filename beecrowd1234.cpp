/**
 * @file beecrowd1234.cpp
 * see the main problem - https://www.beecrowd.com.br/judge/en/problems/view/1234
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
    string s;
    while (getline(cin, s))
    {
        bool firstChar = true;
        for (auto i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                if (firstChar)
                {
                    char c = toupper(s[i]);
                    cout << c;
                    firstChar = false;
                }
                else
                {
                    char c = tolower(s[i]);
                    cout << c;
                    firstChar = true;
                }
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}