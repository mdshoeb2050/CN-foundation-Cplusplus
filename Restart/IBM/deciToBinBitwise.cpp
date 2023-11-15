#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i=31; i>=0; i--){
        int k=n>>i;
        //cheking bits using bitwise AND operator
        if(k&1)
           cout<<"1";
        else
           cout<<"0";
    }
    cout<<endl;
    return 0;
}

/*
Enter a number: 
10
00000000000000000000000000001010
*/