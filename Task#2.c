#include<stdio.h>
void balance(int *ptr);
float avg(int *ptr);
int main(){
	int acc[]={100,200,300,400,500};
	//int *ptr= acc;
	balance(acc);
	float a=avg(acc);
	printf("the value of avg is %f",a);
	return 0;
}
void balance(int *ptr){
	int choice;
	printf("enter the choice 1 for withdrawal and 2 for deposit ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			for(int i=0;i<5;i++){
				int amount=0;
				printf("enter the amount you want to withdraw ");
				scanf("%d",&amount);
				ptr[i]= ptr[i] - amount; 
				break;
			}
		case 2:
		    for(int i=0;i<5;i++){
		    	int amount=0;
		    	printf("enter the amount you want to deposit ");
		    	scanf("%d",&amount );
		    	ptr[i]= ptr[i]+amount;
			}	
	}
	printf("record updated succesfully");
	
}
float avg(int *ptr){
	float avg;
	int sum=0;
	for(int i=0;i<5;i++){
		printf("%d\n",ptr[i]);
		sum = sum + ptr[i];
		
	}
	avg= sum/5;
	return avg;
}