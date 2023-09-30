//finnd fibonacci numbers
//  eg - 0 1 1 2 3 5 8 13 

#include<iostream>
using namespace std;
int main(){
    int a=0, b=1, c=0;
    int n;
    cout<<"Enter the no of fibonacci terms to be printed :"<<endl;
    cin>>n;
    cout<<"Fibonacci Series is :"<<endl;
    cout<<a<<"  "<<b<<"  ";
    
    // 0th and 1st terms has been already printed
    for(int i=2; i<n; i++)
    {
        c=a+b;
        cout<<c<<"  ";
        a=b;
        b=c;
    }
    cout<<endl;
    return 0;
}

/*
Enter the no of fibonacci terms to be printed :
9
Fibonacci Series is :
0  1  1  2  3  5  8  13  21  
*/