/**
 * @file beecrowd1048.cpp
 * Salary increase - https://prnt.sc/KCfxYOPpC1U6
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    double s, newS, moneyEarn;
    int per;
    cin >> s;

    if (s > 0 && s <= 400)
    {
        moneyEarn = 400 * 0.15;
        newS = 400 + moneyEarn;
        per = 15;
        cout << "Novo salario: " << fixed << setprecision(2) << newS << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarn << endl;
        cout << "Em percentual: " << per << " %" << endl;
    }
    else if (s > 400 && s <= 800)
    {
        moneyEarn = s * 0.12;
        newS = s + moneyEarn;
        per = 12;
        cout << "Novo salario: " << fixed << setprecision(2) << newS << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarn << endl;
        cout << "Em percentual: " << per << " %" << endl;
    }
    else if (s > 800 && s <= 1200)
    {
        moneyEarn = s * 0.10;
        newS = s + moneyEarn;
        per = 10;
        cout << "Novo salario: " << fixed << setprecision(2) << newS << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarn << endl;
        cout << "Em percentual: " << per << " %" << endl;
    }
    else if (s > 1200 && s <= 2000)
    {
        moneyEarn = s * 0.07;
        newS = s + moneyEarn;
        per = 7;
        cout << "Novo salario: " << fixed << setprecision(2) << newS << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarn << endl;
        cout << "Em percentual: " << per << " %" << endl;
    }
    else if (s > 2000)
    {
        moneyEarn = s * 0.04;
        newS = s + moneyEarn;
        per = 4;
        cout << "Novo salario: " << fixed << setprecision(2) << newS << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarn << endl;
        cout << "Em percentual: " << per << " %" << endl;
    }

    return 0;
}