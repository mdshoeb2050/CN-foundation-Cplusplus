#include<iostream>
using namespace std;
int main (){
  int n,i,j;
   cout<<"Enter a number to print Triangular pattern:"<<endl;
   cin>>n;
   i=1;
   while(i<=n)
     {
        j=1;
        int p=i;        // Yaha p ko i ki har iteration ki Last value store karenge p variable me. 
        while(j<=i)
        {     //  yaha (column) j , i(Rows) par Dependent hai..
            cout<<p;
            j++;
            p++;
        }
      cout<<endl; 
      i++;  
     }
}    
/*
Enter a number to print Triangular pattern:
5

1
23
345
4567
56789  */