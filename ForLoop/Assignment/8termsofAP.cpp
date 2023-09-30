#include<iostream>
using namespace std;
int main(){
    int n,i,count=0,series;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(i=1;count<n;i++){
        series=3*i+2;
        if(series%4!=0){
            cout<<series<<" ";
            count++;
        }
       
    }
   return 0; 
}
/*
Enter a number:
10
5 11 14 17 23 26 29 35 38 41

Enter a number:
4
5 11 14 17         

*/