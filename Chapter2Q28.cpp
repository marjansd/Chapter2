//(Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
//into its digits and prints them separated by three spaces each. [Hint: Use the integer division and
//modulus operators.] For example, if the user types in 42339, the program should print:
#include<iostream>


using namespace std;

   int main(){
       int a=0;
       cout<<"enter a 5digit number:  ";
       cin>>a;
       cout<<a%10<<"   "<<(a%100)/10<<"   "<<(a%1000)/100<<"   "<<(a%10000/1000)<<"   "<<(a%100000)/10000;

   }


