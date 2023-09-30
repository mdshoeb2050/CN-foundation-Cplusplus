#include<iostream>
#include<cmath>
using namespace std;

long long convert_fun(int n);

int main(){
   int n, b_value;
    cout<<"Enter A Number:"<<endl;
    cin>>n;
    b_value=convert_fun(n);   // yaha se fun call hoga 
    cout<<b_value<<endl;
    return 0;
}
 
 long long convert_fun(int n){
      long long bin=0;   // binary value long ho sakta hai
      int rem, i=1;
       //AB yaha se logic start hoga 
      while(n!=0){
          rem=n%2;  // extracting remainder
          n=n/2;      //  store quotient
          bin=bin+rem*i;   //remainder ko place value se multiply karke (bin) variable me store karenge
          i=i*10;      //Place value(i) ki position  har bar increase karte jayenge 
      }
    return bin;
 }
/*
Enter A Number:
12
1100

Enter A Number:
63
111111

*/

