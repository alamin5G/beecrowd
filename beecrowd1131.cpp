/**
 * @file beecrowd1131.cpp
 * see the problem - https://prnt.sc/3qLNguiEhSBK
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int in, gr, chose, match = 1, inter = 0, gremio = 0, draw = 0;
    cin >> in >> gr;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> chose;
    if (in > gr)
    {
        inter++;
    }
    else
    {
        gremio++;
    }
    while (chose != 2)
    {
        cin >> in >> gr;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> chose;
        if (in > gr)
        {
            inter++;
        }
        else if (in == gr)
        {
            draw++;
        }
        else
        {
            gremio++;
        }
        match++;
        in = 0;
        gr = 0;
    }

    cout << match << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << draw << endl;

    if (inter == gremio)
    {
        cout << "Não houve vencedor" << endl;
    }
    else if (inter > gremio)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (gremio > inter)
    {
        cout << "Gremio venceu mais" << endl;
    }
    return 0;
}
