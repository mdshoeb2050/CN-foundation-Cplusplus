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
            cout<<n;   // Program to print n (user input == jo user dalega wahi value ) pattern  ke form me print hoga
            j++;
        }
      cout<<endl;
      i++;  
    }
}
