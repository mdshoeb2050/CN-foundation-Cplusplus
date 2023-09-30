#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a  Number to print character pattern:"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){       // J ki i par dependency
            char ch='A'+j-1;  //  Jaise J increment hoga ... waise hi character print hoga
            cout<<ch;   
            j++;
        }
      cout<<endl;
      i++;  
    }
}
/*
Enter a  Number to print character pattern:
4
A
AB
ABC
ABCD
*/