#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int s=1;
         while(s<=n-i)       //logic yaha hai...
          {   
            cout<<" ";
            s++;
          }
     int j=1;
     int k=i;  //temp variable taking control
     while(j<=i)
      {
        cout<<k;
        k--;
        j++;
      }  
     int m=2;
     j=2*i-2;       //logic yaha bhi hai...
     while(j>=i)
     {
       cout<<m;
       j--;
       m++;
     }
    cout<<endl;
    i++;
   }
   return 0;
}
/*

5  //input

    1
   212
  32123
 4321234
543212345

*/