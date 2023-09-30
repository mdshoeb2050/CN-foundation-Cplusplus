#include<iostream>
using namespace std;
int main(){
  int n,i,j;
  cin>>n;
   i=1;
while(i<=n)
{
     j=1;
     int p=i;
    while(j<=i)
    {
      cout<<p<<" ";
      p--;
      j--;
    }
    cout<<endl;
    i--;
}
return 0;
}