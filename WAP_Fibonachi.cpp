#include<stdio.h>
int main(){
	int i=0;
	int next;
	int First = 0;
	int Second = 1;
	int number;
	
	printf("Add nuber For febonachi = ");
	scanf("%d",&number);
	
	while( i < number){
		if(i <= 1){
			next = i;
		}
		else{
			next =First + Second;
			First = Second;
			Second = First;
		}
		printf("%d \n", next);
		i++;
	}
}