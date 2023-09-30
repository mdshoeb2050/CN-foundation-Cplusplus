#include<iostream>
using namespace std;
int main(){
    int num,choice,temp;
    double product=0,sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>num>>choice;
    if(choice==1){
        while(num!=0){
            temp=num%10;
            num=num/10;
            sum+=temp;
           }
    }   
    else if(choice==2){
         while(num!=0){
             temp=num%10;
             num=num/10;
             product*=temp;
            }
      }
    else{
        cout<<"-1"<<endl;
        }     
cout<<sum<<endl;
cout<<product<<endl;  
return 0;   
}