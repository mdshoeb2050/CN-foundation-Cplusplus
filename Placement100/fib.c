//finnd fibonacci numbers
//  eg - 0 1 1 2 3 5 8 13 

#include<stdio.h>

int main(){
    int a=0, b=1, c=0;
    int n;
    printf("Enter the no of fibonacci terms to be printed :\n");
    scanf("%d",&n);
    printf("Fibonacci Series is :");
    printf("%d  %d  ", a, b);
    
    // 0th and 1st terms has been already printed
    for(int i=2; i<n; i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}


/*
Enter the no of fibonacci terms to be printed :
9
Fibonacci Series is :0  1  1  2  3  5  8  13  21  
*/