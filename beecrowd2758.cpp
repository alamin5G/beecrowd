/**
 * @file beecrowd2758.cpp
 * see the problem 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a, b;
    double c, d;
    cin >> a >> b;
    cin >> c >> d;

    cout << "A = " << fixed << setprecision(6) << a << ", B = " << fixed << setprecision(6) << b <<endl;
    cout << "C = " << fixed << setprecision(6) << c << ", D = " << fixed << setprecision(6) << d <<endl;
    
    cout << "A = " << fixed << setprecision(1) << a << ", B = " << fixed << setprecision(1) << b <<endl;
    cout << "C = " << fixed << setprecision(1) << c << ", D = " << fixed << setprecision(1) << d <<endl;
    
    cout << "A = " << fixed << setprecision(2) << a << ", B = " << fixed << setprecision(2) << b <<endl;
    cout << "C = " << fixed << setprecision(2) << c << ", D = " << fixed << setprecision(2) << d <<endl;
    
    cout << "A = " << fixed << setprecision(3) << a << ", B = " << fixed << setprecision(3) << b <<endl;
    cout << "C = " << fixed << setprecision(3) << c << ", D = " << fixed << setprecision(3) << d <<endl;
   
    printf("A = %.3E, B = %.3E\n", a, b);
	printf("C = %.3E, D = %.3E\n", c, d);

    cout << "A = " << fixed << setprecision(0) << a << ", B = " << fixed << setprecision(0) << b <<endl;
    cout << "C = " << fixed << setprecision(0) << c << ", D = " << fixed << setprecision(0) << d <<endl;
   return 0;
}