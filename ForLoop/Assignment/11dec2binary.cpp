#include<iostream>
using namespace std;
int main(){
 int n,rem,i=1;
 long long b_value=0;

 cout<<"Enter A Number:"<<endl;
 cin>>n;
 while(n!=0){
     rem=n%2;                  // extracting remainder
     n=n/2;                   // store quotient
     b_value=b_value+rem*i;  // remainder ko place value se multiply karke b_value variable me store karenge
     i =i*10;               // Place value(i) ki position  har bar increase karte jayenge 
 }
 cout<<b_value<<endl;
 return 0;
}

/*
Enter A Number:
12
1100

Enter A Number:
7
111

Enter A Number:
128
10000000

Enter A Number:
28
11100

*/
