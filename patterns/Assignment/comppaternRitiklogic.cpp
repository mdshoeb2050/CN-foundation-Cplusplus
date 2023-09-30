#include<iostream>
using namespace std;
int main(){
    int n=5;
    int t=n;
    int sp=t;
    int x=1;
    
    while(t--)
    {
       for(int i ; i<sp ; i++)
       {
         cout<<" ";
           sp--;
       }
       for(int i=x ; i>1 ; i--)
       {
         cout<<i;
       } 
       for(int i=1; i<=x; i++)
       {
          cout<<i;
       }
     cout<<endl;
     x++;    
    }
   return 0; 
}