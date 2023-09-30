#include<iostream>
using namespace std;
int main (){
int bor =15 |30;
int band =15 &30;
int bnot = ~15;
int bxor = 15 ^ 30;
int bls = 15 << 2;
int brs = 15 >> 2; 

cout<<"Results Are:"<<endl;
cout<<bor<<endl;
cout<<band<<endl;
cout<<bnot<<endl;
cout<<bxor<<endl;
cout<<bls<<endl;
cout<<brs<<endl;


}   
/*
Results Are:
31
14
-16
17
60
3
*/