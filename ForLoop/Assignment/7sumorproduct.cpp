#include<iostream>
using namespace std;
int main(){
    int i,num,choice;
    double product=1,sum=0;
    cout<<"Enter your Range Number and Choice:"<<endl;
    cin>>num>>choice;
    for(i=1;i<=num;i++){
          sum+=i;
          product*=i;
    }
    if(choice==1){
        cout<<sum<<endl;
    }
    else if(choice==2){
        cout<<product<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
/*
Enter your Range Number and Choice:
10
1
55

Enter your Range Number and Choice:
10
2
3.6288e+006

Enter your Range Number and Choice:
10
4
-1

*/