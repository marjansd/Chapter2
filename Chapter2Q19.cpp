//(Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard
//and prints the sum, average, product, smallest and largest of these numbers. The screen dialog
//should appear as follows:


#include <iostream>
using namespace std;

   int main() {
       int a;
       int b;
       int c;
       int sum;
       int average;
       int product;
       int smallest;
       int largest;

       cout << " write down three integers number";
       cin >> a >> b >> c;
       sum = a + b + c;
       average = (a + b + c) / 3;
       product = a * b * c;
       cout << "sum: " << sum << "\naverage: " << average << "\nproduct: " << product<<endl;
       //largest number
       if (a>=b && a>>c){
       cout<<"largest: "<<a;
       }
       else if (b>=a && b>=c){
           cout<<"largest: "<<b<<endl;
       }
       else {
           cout<<"largest: "<<c<<endl;
       }

       //smallest number
       if (a<=b && a<=c){
           cout<<"smallest: "<<a<<endl;
       }
       else if (b<=c && b<<a){
           cout<<"smallest: "<<b<<endl;
       }
       else {
           cout<< "smallest: "<<c<<endl;
       }
       return 0;
   }










