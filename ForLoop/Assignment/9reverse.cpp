#include<iostream>
using namespace std;
int main(){
  int n,last_digit,rev_no=0;
  cout<<"Enter a number:"<<endl;
  cin>>n;
  while(n!=0)      // ya phir aap ye use kar sakte hai-->  for(;n!=0;)
  {
      last_digit=n%10; //extract last digit
      n=n/10;  //store rest of digits
      rev_no=rev_no*10+last_digit;
  }
  cout<<rev_no<<endl;
}
/*
Enter a number:
1234
4321

Enter a number:
1980
891

Enter a number:
10400
401
*/