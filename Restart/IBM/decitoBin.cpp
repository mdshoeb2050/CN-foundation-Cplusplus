// Decimal to binary without using Array
#include<iostream>
using namespace std;

int main(){
   int n;
   int rem=0, pValue=1;
   long long binResult=0;  // storing large binary values
   cout<<"Enter a num :"<<endl;
   cin>>n;
   int temp=n;  // storing original value into temp
   while(n>0){
      rem = n%2;   // extrating remainder 
      n = n/2;
      binResult += rem * pValue;    // har bar new extracted digit ki  position shift karte huye using one, tens, hundred ... so on method using multiplication 
      pValue *= 10;   // updating place value 
   }
   cout<<"Binary representation of "<<temp<<" is : "<<binResult<<endl;
   return 0;
}