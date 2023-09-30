#include<iostream>
using namespace std;

string Count(string str){
    int upper =0,lower=0,digits=0,special_char=0;
    for(int i=0;i<str.length();i++)
    {
        if (str[i]>='A'&& str[i]<='Z')
        upper++;
        else if (str[i]>='a'&& str[i]<='z')
        lower++;
        else if (str[i]>='0'&& str[i]<='9')
        digits++;
        else
        special_char++;
    }
cout<<"Upper case letters:"<<upper<<endl;
cout<<"Lower case letters:"<<lower<<endl;
cout<<"Digits are:"<<digits<<endl;
cout<<"Special charcters:"<<special_char<<endl;

}
int main(){
     string str;
     cout<<"Enter characters:"<<endl;
     cin>>str;
     cout<<Count(str)<<endl;
     return 0;
}