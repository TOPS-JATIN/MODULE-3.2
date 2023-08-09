#include<stdio.h>
int main(){
	int number;
	printf("Add Number = ");
	scanf("%d",&number);
	(number % 2 == 0)? printf("Nmber is Even") : printf("Nmber is Odd");
}