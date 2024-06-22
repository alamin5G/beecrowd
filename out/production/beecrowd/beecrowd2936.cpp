/**
 * @file beecrowd2936.cpp
 * see the problem - https://prnt.sc/qIZuJYHw0x_W
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int prepare(int a, int b, int c, int d, int e){
    int cur = 300;
    int boi = 1500;
    int bot = 600;
    int map = 1000;
    int iar = 150;

    return cur*a + boi*b + bot*c + map*d + iar*e+225;

}
int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << prepare(a, b, c, d, e) << endl;

    return 0;
}