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
            cout<<i;  // Program to print  pattern using Row (i) value. 
            j++;
        }
      cout<<endl;
      i++;  
    }
}

/*
Enter a  Number to print n*n pattern:
5
11111
22222
33333
44444
55555   */
//Agar uppar  ke pattern ko dekhe to usme Row(i)  common dikhegi...
