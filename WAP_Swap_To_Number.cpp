#include<stdio.h>
int number_one = 10;
int number_two = 15;

int Swap(int one ,int two){
	 number_one = two;
	 number_two = one;
};
int main(){	
	Swap(number_one , number_two);
	printf("%d \n%d",number_one,number_two);
}