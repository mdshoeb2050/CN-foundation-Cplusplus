#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a  Number to print character pattern:"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int p=i;     // concept of temp variable to store value of i so that it  can start form next value in next line 
        while(j<=i){       // J ki i par dependency
            char ch='A'+p-1;  //  Jaise hi p  increment hoga ... waise hi  j ke loop ke karan next character  print hota jayega..
            cout<<ch;   
            j++;
            p++;
        }
      cout<<endl;
      i++;  
    }
}
/*
Enter a  Number to print character pattern:
4
A
BC
CDE
DEFG
        */