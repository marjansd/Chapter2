//Multiples) Write a program that reads in two integers and determines and prints if the first
//is a multiple of the second. [Hint: Use the modulus operator.]

#include<iostream>
using namespace std;

   int main(){
       int a;
       int b;
       cout<<"enter 2 integers number";
       cin>>a>>b;
       if (a%b==0){
           cout<<a<<" is a multiple of "<<b;
       }
       else{
           cout<<a<<" is  not a multiple of "<<b;
       }

       return 0;
   }