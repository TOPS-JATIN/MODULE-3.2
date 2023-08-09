#include<stdio.h>
int main(){


	for(int i=1;i<6;i++){
		
	
		//printf("I");
	/*	switch(i){
			case 0 :{
				printf("* \n");
				break;
			}
			case 1 :{
				printf("* * \n");
				break;
			}
			case 2 :{
				printf("* * *\n");
				break;
			}
			case 3 :{
				printf("* * * * \n");
				break;
			}
			case 4 :{
				printf("* * * * *\n");
				break;
			}
		} */
		
		/*
		//Right Ulta peramid
		for (int j = 0 ; j<i ; j++){
			printf("  ");
		};
		for (int j = 6 ; j>i ; j--){
			printf("%d ", j);
		};
		printf("\n");  
		*/
		
		/*
		//Left Ulta peramid
		for (int j = 6 ; j>i ; j--){
			printf("%d ", j);
		};
		for (int j = 0 ; j<i ; j++){
			printf("  ");
		};
		printf("\n");  
		*/
		
		
		//Left Peramid
		for(int L = 0 ; L < i ; L++){
			printf(" %d ",L );
		};
		printf("\n"); 
		
		
		/*
		// Center piramid 
		for(int H = 6; H>i; H--){
			printf(" ");
		};
		for(int w = 0; w<i; w++){
			printf(" %d", w);
		};
		printf("\n");
		*/
		
		/*
		//Right Peramid
		for(int H = 6; H>i; H--){
			printf("  ");
		};
		for(int w = 0; w<i; w++){
			printf(" %d", w);
		};
		printf("\n");
		*/
		
		/*
		//Ulta Peramid
		for(int H = 0; H<i; H++){
			printf(" ");
		};
		for(int w = 6; w>i; w--){
			printf(" %d ", w);
		};
		printf("\n");
		*/
		
		
	}   ; 
	 
	/*
//Dimond 
	for(int i=0; i<5; i++){
		
		for(int H = 6; H>i; H--){
			printf(" ");
		};
		for(int w = 0; w<i; w++){
			printf("* ");
		};
			printf("\n");
	} ;
	for(int i=0; i<5; i++){
		for(int H = 0; H<i; H++){
			printf(" ");
		};
		for(int w = 5; w>i; w--){
			printf(" *");
		};
			printf("\n");
	};
	*/
	
	/*
	// Print Letter A 
	for(int i=0; i<5; i++){
	
		for(int H = 5; H>i; H--){
			printf(" ");
		};
		for(int w = 0; w<1; w++){
			if(i==2){
				printf("*");
			}else{
				printf("*");
			}
		};
		for(int D=0 ; D<i; D++){
	    	if(i==2){
				printf("**");
			}else{
				printf("  ");
			}
	    	
		}
		for(int H = 0; H<1; H++){
			
				printf("*");
			
		};
		printf("\n");
	} ; 
	 */
	 
	
};