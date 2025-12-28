#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int min=111111,max=999999;
	int rand_number = (rand() % (max - min + 1)) + min;
	printf("The otp is :%d",rand_number);
	printf("\nEnter the opt for verify :");
	int opt;
	scanf("%d",&opt);
	if(opt==rand_number){
		printf("\nopt is verfied");
	}else{
		printf("\nInvalid");
	}
}
