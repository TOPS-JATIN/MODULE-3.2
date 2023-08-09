#include<stdio.h>
#define Space 5
int main(){
 int number[Space];
 int max=0;
 int min=0;
 
 printf("Add number only 5 = ");
 for(int i = 0 ; i<Space ; i++){
 	scanf("%d",&number[i]);
 }
 for(int i=0;i<Space;i++){
 	(number[i] > max)? max = number[i] : min = number[i];
 }
 
 printf("Max = %d",max);
 printf("Min = %d",min);
}