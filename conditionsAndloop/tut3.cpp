#include<iostream>
#include <cmath>
using namespace std;
int main(){
  int start,end, count,flag,inum;
  cout<<"Enter start and end value (1<value>100) : "<<endl;
  cin>>start>>end;
  cout<<"Prime number from "<<start<<" to "<<end<<" are:"<<endl;
  while(start<=end)
  {
    inum=sqrt(start);
    count=2;
    flag=true;
    while(count<=inum)
    {
         if(start % count==0)
          {
          flag=false;
          break;
          }
     count+=1;
    }
     if (flag)
       {
         cout<<start<<",";
       }  
   start+=1;  
  }
  cout<<endl;
  return 0;
}