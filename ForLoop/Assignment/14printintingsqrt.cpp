#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  double s_value;
  cout<<"Enter a number:"<<endl; 
  cin>>n;
  int i=1;
  while(i<=n){
  s_value=pow(i,0.5);
  cout<<"Square Root of"<<" "<<i<<" = "<<s_value<<endl;
  i++;
  }
  return 0;
}
/*
Enter a number:
10
Square Root of 1 = 1
Square Root of 2 = 1.41421
Square Root of 3 = 1.73205
Square Root of 4 = 2
Square Root of 5 = 2.23607
Square Root of 6 = 2.44949
Square Root of 7 = 2.64575
Square Root of 8 = 2.82843
Square Root of 9 = 3
Square Root of 10 = 3.16228

*/