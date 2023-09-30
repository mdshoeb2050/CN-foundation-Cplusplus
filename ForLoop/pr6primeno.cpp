#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter A number:"<<endl;
    cin>>n;
    bool divided=false;
    for(d=2;d<n;d++){
        if(n%d==0){
          divided=true;  
        }
    } 
    if(divided){
         cout<<"Not Prime"<<endl;
         }
    else{
        cout<<"No is Prime"<<endl;
    }
 }