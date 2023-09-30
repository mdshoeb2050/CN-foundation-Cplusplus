#include<iostream>
using namespace std;
int main(){
  int n,i,j;
  cin>>n;
  for(i=1; i<=n; i++){
      for (j=n; j!=0; j--){
            if (j==i){ 
                int l=j;
              while(l!=0)
              {
               cout<<l<<" ";
               l--;
              }
            }   
      }
       cout<<endl;
  }
 
return 0;


}

/*
4
1
2 1
3 2 1
4 3 2 1

isi ka short cut way 
int i=1;
while(i<=n){
    int j=1;
    int p=i;
    while(j<=i){
      cout<<p<<" ";
      p--;
      j--;
    }
    cout<<endl;\
    i--;
}
*/
