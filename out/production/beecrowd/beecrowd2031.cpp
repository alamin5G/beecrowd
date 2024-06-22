/**
 * @file beecrowd2031.cpp
 * see the problem - https://prnt.sc/SO8LR1IdUEE1
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-21
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
        string p, p2;
        cin >> p;
        cin >> p2;
        if(p[1]=='e' && p2[1]=='e'){
            cout << "Sem ganhador" << endl;
        }else if(p[1]=='t' && p2[1]=='t'){
            cout << "Aniquilacao mutua" << endl;
        }else if(p[1]=='a' && p2[1]=='a'){
            cout << "Ambos venceram" << endl;
        }else if(p[1]=='t'|| (p[1]=='e' && p2[1]=='a' )){
            cout << "Jogador 1 venceu" << endl;
        }else{
            cout << "Jogador 2 venceu" << endl;
        }
    }
    return 0;
}