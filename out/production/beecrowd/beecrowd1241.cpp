/**
 * @file beecrowd1241.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/1241
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-30
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
        string a, b;
        cin >> a >> b;
        int len = a.size() - b.size();
        int lenB = 0;
        if (a.size() >= b.size())
        {
            for (auto i = len; i < a.size(); i++)
            {
                if (a[i] == b[lenB])
                {
                    lenB++;
                }
            }

            if(lenB == b.size()){
                cout << "encaixa" << endl;
            }else{
            cout << "nao encaixa" << endl;
            }
        }else {
            cout << "nao encaixa" << endl;
        }
    }
    return 0;
}