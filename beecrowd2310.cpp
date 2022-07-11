/**
 * @file beecrowd2310.cpp
 * see the problem - https://prnt.sc/kIgqT5RZFp4A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string name;
    int s,b,a, ss, bb, aa;
    double ps, pb, pa, sss=0, bbb=0, aaa=0, sser=0, sblo=0, satt=0;
    for(auto i=0; i<t; i++){
        cin >> name;
        cin >> s >> b >> a;
        cin >> ss >> bb >> aa;

        sss += s;
        bbb += b;
        aaa += a;
        
        sser += ss;
        sblo += bb;
        satt += aa;

    }
    ps = (100.00/sss)*(double)sser;
    pb = (100.00/bbb)*(double)sblo;
    pa = (100.00/aaa)*(double)satt;

    cout << "Pontos de Saque: " << fixed << setprecision(2) << ps << " %." <<endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << pb << " %." <<endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << pa << " %." <<endl;

    return 0;
}