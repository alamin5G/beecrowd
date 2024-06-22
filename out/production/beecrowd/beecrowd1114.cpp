/**
 * @file beecrowd1114.cpp
 * Fixed Password - see the problems https://prnt.sc/X0Nh5r_enGF9
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
    int password;

    while (true)
    {
        cin >> password;
            if (password != 2002)
            {
                cout << "Senha Invalida" << endl;
            } else {
                cout << "Acesso Permitido" << endl;
                break;
            }
    }

    return 0;
}
