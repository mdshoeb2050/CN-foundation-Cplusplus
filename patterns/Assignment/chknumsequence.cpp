#include<iostream>
using namespace std;
int main ()
{
    int n,currNum,prevNum;
    bool isDec=true;
    cin>>n;
    cin>>prevNum;
    while(--n)
     {
        cin>>currNum;
          if(currNum>prevNum)
           {
              isDec=false;
           } 
          else if(currNum<prevNum)
                   {
                    if(!isDec)
                        {
                        cout<<"false"<<endl;
                        return 0;
                        }
                   }    
                else if(prevNum==currNum)
                 {
                     cout<<"false"<<endl;
                     return 0;    
                 }
         prevNum=currNum;
    }
     cout<<"true"<<endl;
}
/*
5   //input
8
6
3
2
1
true

5   //input
2
4
5
8
9
true

6  //input
8
7
6
5
8
2
false

*/