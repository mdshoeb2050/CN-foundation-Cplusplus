#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a  Number to print n*n pattern:"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int p=i;
        while(j<=i){ // Tringle -- j ka i par dependency
            cout<<p;   // Program to print * pattern 
            j++;
            p--;
        }
      cout<<endl;
      i++;  
    }
}
  /* 
Enter a  Number to print n*n pattern:
4
1
21
321
4321       */