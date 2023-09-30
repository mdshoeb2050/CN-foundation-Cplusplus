#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k,dec_no=0;
    cout<<"Enter Binary number:"<<endl;
    cin>>n;
    int count=0;
    while(n!=0){
        k=n%10;
        n=n/10;
        if(k==1){
            dec_no=dec_no+pow(2,count);
        }  
        count++; 
    } 
    cout<<dec_no<<endl;
    return 0; 
}
/*
Enter Binary number:
1100
12

Enter Binary number:
111
7

Enter Binary number:
100000000
256

Enter Binary number:
1000000000
512





*/
