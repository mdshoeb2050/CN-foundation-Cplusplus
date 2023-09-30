#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: "<<endl;
  cin>>n;
  int d=2;
  while(d<=n)
  {   
       if(d%2 != 0)
          {
           cout<<d<<endl;
          }
     d=d+1;
  }
return 0;
}
