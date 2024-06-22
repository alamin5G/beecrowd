/**
 * @file beecrowd2582.cpp
 * see the problem - https://prnt.sc/X1rWf-keimpa
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin >> c;
    while(c--){
        int x, y;
        cin >> x >> y;

        switch (x+y)
        {
        case 0:
            cout << "PROXYCITY" << endl;
            break;
        case 1:
            cout << "P.Y.N.G." << endl;
            break;
        case 2:
            cout << "DNSUEY!" << endl;
            break;
        case 3:
            cout << "SERVERS" << endl;
            break;
        case 4:
            cout << "HOST!" << endl;
            break;
        case 5:
            cout << "CRIPTONIZE" << endl;
            break;
        case 6:
            cout << "OFFLINE DAY" << endl;
            break;
        case 7:
            cout << "SALT" << endl;
            break;
        case 8:
            cout << "ANSWER!" << endl;
            break;
        case 9:
            cout << "RAR?" << endl;
            break;
        case 10:
            cout << "WIFI ANTENNAS" << endl;
            break;
        }
    }
return 0;
}