#include<stdio.h>
#define Space 5
int main(){
	int number[Space];
	int First_Last_Sum = 0;
	printf("Add number ( only five )");
	for(int i=0;i<Space;i++){
		scanf("%d",&number[i]);
		if(i==0){
			First_Last_Sum += number[i];
		}else if(i == 4){
			First_Last_Sum += number[i];
		};
	};
	printf("Firts + Last =  %d",First_Last_Sum);
} 