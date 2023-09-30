#include<iostream>
#include <cmath>
using namespace std;
int main(){
  int start,end;
  float result;
  cout<<"Enter two number: "<<endl;
  cin>>start>>end;
  cout<<"Square Roots are: "<<endl;
  while(start<=end)
  {
   result=sqrt(start);
   cout<<"The Square Root of "<<start<<" is: "<<result<<endl;
   start+=1;
  }
  return 0;
}