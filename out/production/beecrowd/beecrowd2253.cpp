/**
 * @file beecrowd2253.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2253
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    while(getline(cin >> ws, s))
    {
        bool up=false, low=false, num=false;
        if(s.size()>=6 && s.size()<=32)
        {
            for(auto i=0; i<s.size(); i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    up = true;
                }
                else if(s[i]>='a' && s[i]<='z')
                {
                    low = true;
                }
                else if(s[i]>='0' && s[i]<='9')
                {
                    num = true;
                }
                else
                {
                    up = false;
                    low = false;
                    num = false;
                    break;
                }
            }
            if(up && low && num)
            {
                cout << "Senha valida." <<endl;
            }
            else
            {
                cout << "Senha invalida." <<endl;
            }
        }
        else
        {
            cout << "Senha invalida." <<endl;
        }


    }
    return 0;
}
