#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
    int arr1[]={2,3,5,6,7,8,9,10,12,23,45};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    // int i=0, j=n-1;
    int sum=40;
    // while(i<j)
    // {
    //     if(arr1[i]+arr1[j]==sum)
    //     {
    //     cout<<"("<<arr1[i]<<" "<<arr1[j]<<")"<<endl;
    //     }
    //     else if(arr1[i]+arr1[j]>sum) j--;
    //     else 
    //         i++;
    // }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++) {
              for(int k=j+1; k<n; k++){
                  for(int p=k+1; p<n; p++)
                  {
                    if(arr1[i]+arr1[j]+arr1[k]+arr1[p]==sum) 
                    cout<<arr1[i]<<arr1[j]<<arr1[k]<<arr1[p]<<endl;
                  }

              }
        }
    }


    return 0;
}