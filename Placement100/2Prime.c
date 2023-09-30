// Check Number is prime or Not

#include<stdio.h>
int main(){
   int n ,flag=0;
   printf("Enter a number :\n");
   scanf("%d",&n);
  
   int halfRange=n/2;
   for(int i=2; i<halfRange; i++){
      if(n%i==0) 
      {
         printf("Not A Prime Number\n");
         return 0;
      } 
   }
    //Humne har ek no se try kar liya hia kisi se bhi completely divisible na hone par 
    // control yaha is line me aayega aur flag humara change nahi hua hia to ...
    // Prime no print ho jayega
   if(flag==0)
    printf("Prime Number\n");  
   return 0;
}