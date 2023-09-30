#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter characters:"<<endl;
    cin>>c;
    int count=0;
    while(c!='$'){
        count++;
        cin>>c;
    }
    cout<<count<<endl;
    return 0;
}
/*
Enter characters:
g
f


h
$

3  // output -- cin only count alphabets and ignores whitespaces , newline, tab etc.
*/
