#include<iostream>
using namespace std;
int main (){
  int n,i,j;
   cout<<"Enter a number to print Triangular pattern:"<<endl;
   cin>>n;
   i=1;
   while(i<=n){
        j=1;                
        while(j<=i){      //  yaha (column) j , i(Rows) par Dependent hai..
            cout<<j;    
            j++;
        }
      cout<<endl; 
      i++;  
   }
/*
Enter a number to print Triangular pattern:
5
1
12
123
1234
12345    */










}