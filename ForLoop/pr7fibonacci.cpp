#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3,i,num;
    cout<<"Enter A number:"<<endl;
    cin>>num;
    cout<<"Fibonacci Series is printing ... "<<endl;
    cout<<n1<<" "<<n2<<" ";
    // Ab for loop ka use karke fibonacci series print karenge...
    for(i=2;i<num;++i){
        //fibonacci ka formula use karenge 
        n3=n1+n2;
        cout<<n3<<" ";
        // ab lagayenge asli Logic
        n1=n2;
        n2=n3;
    }
    cout<<endl;
    return 0;
}
/*
Enter A number:
10
Fibonacci Series is printing ...
0 1 1 2 3 5 8 13 21 34

*/