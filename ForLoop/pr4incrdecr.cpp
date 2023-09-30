#include<iostream>
using namespace std;
int main (){
    int a = 50;
    a+=30; 
    a*=2;
    cout<<a++<<endl;  //160   --> 161
    cout<<++a<<endl;  //162 
    cout<<a--<<endl;  //162   --> 161
    cout<<--a<<endl;  //160
}