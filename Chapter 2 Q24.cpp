//(Odd or Even) Write a program that reads an integer and determines and prints whether
//it’s odd or even. [Hint: Use the modulus operator. An even number is a multiple of two. Any multiple
//of two leaves a remainder of zero when divided by 2.]


#include<iostream>
using namespace std;

   int main(){
       int a;
        cout<<" write down and integer ";
        cin>>a;
        if (a%2==0) {
            cout << "your number  is even ";
        }
        else{
            cout<<"your number is odd";

        }
        return 0;
   }