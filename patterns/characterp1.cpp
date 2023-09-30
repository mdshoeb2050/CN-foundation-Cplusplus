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
             char ch='A'+j-1;
             cout<<ch;
             j++;
         }
      cout<<endl;
      i++;   
    }
}