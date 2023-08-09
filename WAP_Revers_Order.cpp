#include<stdio.h>


int main(){
	int Reminder , reverse;
	int number ;
	printf("ADD  number = ");
	scanf("%d",&number);
	
	while(number != 0){
		Reminder = number % 10;
		reverse = reverse * 10 + Reminder;
		number = number / 10;
				
	};
	printf("reversed number = %d", reverse);
}