#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
       int p=i;
        while(j<=2*i-1){
            cout<<p<<" ";
            /*if(p==1){
                p=2;
                while(p<=n){
                    cout<<p<<" ";
                    p++;
                  } */
               p--;  
        }
       i--; 
    }
    return 0;
}