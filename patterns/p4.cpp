#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a  Number to print n*n pattern:"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-j+1;  // Program to print  pattern using value of (n) and (j)  in decreasing order . 
            j++;
        }
      cout<<endl;
      i++;  
    }
}

/*
Enter a  Number to print n*n pattern:
4
4321
4321
4321
4321
*/   
// yaha j ki value n se start hokar decresing order me hai .