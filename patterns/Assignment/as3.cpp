#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a  Number to print n*n pattern:"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){ // Tringle -- j ka i par dependency
            cout<<i;   // Program to print * pattern 
            j++;
        }
      cout<<endl;
      i++;  
    }
}
  