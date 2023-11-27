#include<iostream>
using namespace std;
const int MAX=100;

void printDiagonalSum(int matrix[][MAX], int size){
    int p=0 , s=0;
    for(int i=0; i<size; i++){
       //inner loop
       for(int j=0; j<size; j++){
            // checking condition
             if(i==j)
                p += matrix[i][j];
             
             //checking another condition
             if((i+j)==(size-1)) 
                   s+=matrix[i][j];
       }
    }
    cout<<"Principal Diagonal Sum :"<<p<<endl;
    cout<<"Secondary Diagonal Sum :"<<s<<endl;

    //calculating absolute diffrence 
    cout<<"Digonal sum Difference is :"<<abs(s-p)<<endl;
}
int main(){
    int arr[][MAX]={
           {1,2,3},
           {4,5,6},
           {9,8,9}
    };
    printDiagonalSum(arr,3);
    return 0;

}