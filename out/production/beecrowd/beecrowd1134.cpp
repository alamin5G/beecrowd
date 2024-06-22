/**
 * @file beecrowd1134.cpp
 * Type of Fuel - see the problems https://prnt.sc/Aru2-9X8Q6Yt
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
int main(){
    
    int x;
    int alcohol = 0;
    int gasoline = 0;
    int disel = 0;
    
    while(true){
                cin >> x;
                if(x == 1) alcohol++;
                else if(x == 2) gasoline++;
                else if(x == 3) disel++;
                else if(x == 4) break;
                else continue;
    }
    
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcohol << "\n";
    cout << "Gasolina: " << gasoline << "\n";
    cout << "Diesel: " << disel << "\n";
    return 0;
}