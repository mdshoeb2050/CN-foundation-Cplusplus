#include<iostream>
using namespace std;
void closureSum(int arr[], int n){
    // using two pointer approach
    int i=0, j=n-1;
    
    // cout<<"value of i: "<<i<<" value of  j :"<<j<<endl;

    //creating an array to store each pair 
    int res[n];
    while(i<=j){
        //  cout<<"value of i: "<<i<<" value of  j :"<<j<<endl;
       if(i==j){
           res[i]=arr[i];
           break;
       }
       res[i]=(arr[i]*10) + arr[j];
       i++;
       j--;
    }
    //  cout<<"value of out of Loop sum is : "<<sum<<endl;
    // for(int k=0; k<n; k++){
    //     cout<<"value of sum: "<<sum<<endl;
    //     // cout<<res[k]<<" ";
    //     sum = sum + res[k];
    // }
    int k=0;
    int sum = 0;
    while(n--){
        // cout<<"value of n: "<<n<<endl;
        // cout<<"value of sum: "<<sum<<endl;
        // cout<<"value of k: "<<k<<endl;
        sum = sum + res[k];
        k++;
    }
    cout<<"closure sum is :"<<sum<<endl;
}


int main(){
    int arr[]={6,5,8,3};
    // int arr[]={6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size<<endl;
    // cout<<"Enter a number :"<<endl;
    // for(int i=0; i<size; i++){
    //      cin>>arr[i];
    // }
    closureSum(arr,size);
    return 0;
}