#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter characters:"<<endl;
    c=cin.get();
    int count=0;
    while(c!='$'){
        count++;
        c=cin.get();  // ab sab count hoga 
    }
    cout<<count<<endl;
    return 0;
}

/*
Enter characters:
dddd dddrr      32#@$sdfgfggg
15   // output 

*/

/* backspace bhi count hoga */