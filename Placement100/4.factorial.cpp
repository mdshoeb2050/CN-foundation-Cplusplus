// factorial 
// 1. simple method
// 2. recursion
#include<iostream>
using namespace std;
int main(){
   int n, fact=1;
   cout<<"Enter a number :"<<endl;
   cin>>n;
   for(int i=n; i>0; i--){    // or  for(int =1; i<=n; i++)
       fact=fact*i;
   }
   cout<<"Factorial of "<<n<<" is :"<<fact<<endl;
   return 0;
}

/*
Enter a number :
6
Factorial of 6 is :720
*/

// ************ using recursion ***************** //

// int fact(int n){
//     //Base case
//     if(n==0) 
//         return 1;
//     else
//         return n*fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     //calling recursive fun
//     int res=fact(n);
//     cout<<"Factorial of "<<n<<" is :"<<res<<endl;
//     return 0;
// }