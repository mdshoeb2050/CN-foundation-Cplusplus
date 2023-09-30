#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a  Number to print n*n pattern:"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
         j=1;
         int p=i;  //Storing index of of i into p  taki  next line me next value se start ho
         while(j<=n){
             char ch='A'+p-1;        // j ke value ke hisab se chalega  
             cout<<ch;
             p++;
             j++;
         }
      cout<<endl;
      i++;   
    }
}