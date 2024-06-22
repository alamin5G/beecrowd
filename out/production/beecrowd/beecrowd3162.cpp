/**
 * @file beecrowd3162.cpp
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
    int n;
    cin >> n;
    int a, b, c;
    while(n--){
        cin >> a >> b >> c;
        int distance1, distance2, mainDistance;
        if(a>b){
            distance1 = a-b;
        }else{
            distance1 = b-a;
        }

        if(b>c){
            distance2 = b-c;
        }else{
            distance2 =c-b;
        }

        if(distance1>distance2){
            mainDistance = distance1;
        }else{
            mainDistance = distance2;
        }
        
        if(mainDistance >50 ){
            cout << "B" << endl;
        }else if(mainDistance>20 && mainDistance <=50){
            cout << "M" << endl;
        }else if(mainDistance>=0 && mainDistance <=20){
            cout << "A" << endl;
        }

        distance1=0; distance2=0, mainDistance=0;
    }
    return 0;
}

//brute force but wrong answer