#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter number"<<endl;
    cin>>c;
    int count=0;
    while(c!='$'){
        count++;
        cin>>c;
    }
    cout<<count<<endl;
    return 0;
}