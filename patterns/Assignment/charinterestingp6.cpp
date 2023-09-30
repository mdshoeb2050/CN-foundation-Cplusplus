#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"Enter  A number to print interesting pattern :"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int p=i;   // concept of temp variable to store value of i so that it can start from next value in next line
        while(j<=i){  // Dependency of j on i
            char ch='A'+n-p;  // n ki value wahi rahegi jo user input karega bus p ki value decrement hoti rahegi 
            cout<<ch;
            j++;
            p--;  // p ko decrese karenge tabhi to Reverse order me value print hogi...
        }
    cout<<endl;
    i++;
    }
}
/*
Enter  A number to print interesting pattern :
5      
E
DE
CDE
BCDE
ABCDE

Enter  A number to print interesting pattern :
8
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/