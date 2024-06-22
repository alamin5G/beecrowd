/**
 * @file beecrowd1049.cpp
 * see the problem - 1049
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
 string c;

 cin >> c;

 if(c == "vertebrado"){
  
  cin >> c;
  if(c == "ave"){

   cin >> c;
   if(c == "carnivoro"){
    cout << "aguia" << endl;
   }else{
    cout << "pomba" << endl;
   }
  }else{

   cin >> c;
   if(c == "onivoro"){
    cout << "homem" << endl;
   }else{
    cout << "vaca" << endl;
   }
  }
 }else{

  cin >> c;
  if(c == "inseto"){

   cin >> c;
   if(c == "hematofago"){
    cout << "pulga" << endl;
   }else{
    cout << "lagarta" << endl;
   }
  }else{

   cin >> c;
   if(c == "hematofago"){
    cout << "sanguessuga" << endl; 
   }else{
    cout << "minhoca" << endl;
   }
  }
 }
 return 0;
}