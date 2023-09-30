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
            cout<<j;  // Program to print  pattern using COLUMN (J) value. 
            j++;
        }
      cout<<endl;
      i++;  
    }
}
     
/*
Enter a  Number to print n*n pattern:
5
12345       
12345
12345 
12345
12345  */
//Agar uppar  ke pattern ko dekhe to usme column(j)  common dikhegi...