#include<stdio.h>

int main(){

int num;
   printf("Enter the number for whose table you want to print  :  ");
   scanf("%d",&num); 
    printf("The requird table is  : ");
   int i;
   for(i=1; i<=10; i++){
       printf("%dx%d=%d\n",num,i,num*i);
   }
    return 0;
}