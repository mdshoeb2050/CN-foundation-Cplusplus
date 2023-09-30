//Palindrome Logic :
// 1. find reverse 
// 2. if (rev== originalNimber) 

#include<iostream>
using namespace std;
int main(){
    int n, r , rev=0;
    cout<<"Enter a number  : "<<endl;
    cin>>n;
    //storing original number 
    int originalNum=n;
    while(n>0){
       r =n%10;  // extracting last digit(remainder)
       n=n/10;     // reducing  number 
       rev=(rev*10)+r;
    }
    if(originalNum== rev) 
         cout<<"Palindrome number"<<endl;
    else 
       cout<<"Not a palindrome number."<<endl;

    return 0;
}