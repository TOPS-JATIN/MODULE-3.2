#include<stdio.h>
int main(){
	int Table = 1;
	printf("Give Nuber For Table = ");
	scanf("%d",&Table);
	for(int J = 1;J<=Table;J ++){
		
		for(int i=1;i<=10;i++){
			printf("%d * %d = %d \n",J,i , J * i);
		}
		printf("------------------- \n");
	}
}