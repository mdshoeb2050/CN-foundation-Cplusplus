
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: "<<endl;
  cin>>n;
  int d=2;
  bool divided = false;
  while(d<n)
  {
       if(n%d == 0)
          {
         
           divided = true;
          }
     d=d+1;
  }

if(!divided)
{    // not true hoga mtlb false hoga flag ki value tabhi to prime no kahlayega number.
    cout<<"<<< Prime Number >>>"<<endl;
}
else {
      cout<<"NOT A Prime Number."<<endl;
}
 return 0;       
}