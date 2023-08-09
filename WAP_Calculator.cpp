#include<stdio.h>

int choice;
char module_sigh = '%';

int Additio(float First,float Second){
	printf("%f + %f = %.1f \n",First,Second,First + Second);
}
int Subtraction(float First,float Second){
	printf("%f - %f = %.1f \n",First,Second,First - Second);
}
int Multiplication(float First,float Second){
	printf("%f * %f = %.1f \n",First,Second,First * Second);
}
int Divition(float First,float Second){
	printf("%f / %f = %.1f \n",First,Second,First / Second);
}
int Module( int First, int Second){

	printf("%d %c %d = %d \n",First,module_sigh,Second,First % Second);
}

int calculator(float First,float Second){
	switch (choice){
		case 1:{
			Additio(First,Second);
			break;
		}
		case 2:{
			Subtraction( First, Second);
			break;
		}
		case 3:{
			Multiplication( First, Second);
			break;
		}
		case 4:{
			Divition( First, Second);
			break;
		}
		case 5:{
			Module( First, Second);
			break;
		}
		default:{
			printf("invalid Choice");
			break;
		}
	}
}

int main(){
	float FistValue ,SecondValue; 
	char More = 'n';
	printf("----------------- \n");
	
	printf("Add First Value = ");
	fflush(stdin);
	scanf(" %f",&FistValue);
	fflush(stdin);
	
	printf("----------------- \n");
	
	printf("----------------- \n");
	
	printf("Add Second Value = ");
	fflush(stdin);
	scanf(" %f",&SecondValue);
	fflush(stdin);
	
	printf("----------------- \n");
	
	do{
		printf("1. + \n2. -\n3. *\n4. /\n5. %c \n",module_sigh);
		scanf("%d",&choice);
		calculator(FistValue,SecondValue);
		printf("Anyting Else ? (y / n) \n");
		scanf(" %c", &More);
	}while(More == 'y' || More == 'Y');
	
};