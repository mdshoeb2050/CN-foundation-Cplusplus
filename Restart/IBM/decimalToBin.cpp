// decimal to binary using Array
#include<iostream>
using namespace std;

int main(){
    int n, bin[25], i=0;
    cout<<"Enter a num :"<<endl;
    cin>>n;
    int temp=n;
    while(n>0){
       bin[i]=n%2;  // storing remainder / bin[i++] = n%2
       n=n/2;  // n/=2
       i++;
    }
    cout<<"Binary representation of "<<temp<<" is :"<<endl;
    // printing 0's 1's stored in Array in Reverse order
    // i ki value jaha tak h usse 1 kam kare reverse order me loop chalayenge
    for(int j=i-1; j>=0;  j--){
       cout<<bin[j];
    }
    cout<<endl;
   return 0;
}