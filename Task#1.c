#include<stdio.h>

void currentstatus(int bed , int wards ,int arr[][5]);
void display(int bed , int wards ,int arr[][5]);
void ava_space(int bed , int wards ,int arr[][5]);
int main(){
	int bed,wards;
	printf("enter the number of beds and wards in the hospital ");
	scanf("%d %d",&bed,&wards);
	int arr[wards][5];
    currentstatus(bed , wards , arr);
    display(bed ,wards ,arr);
    ava_space(bed,wards,arr);
	
}

void currentstatus(int bed , int wards ,int arr[][5]){
	for(int i=0;i<wards;i++){
		for(int j=0; j<bed;j++){
			printf("enter the status for bed "); 
			scanf("%d",&arr[i][j]);
			
		}
	}
}
void display(int bed , int wards ,int arr[][5]){
	for(int i=0;i<wards;i++){
		if(i==0){
			printf("GENERAL:");
		}
		if(i==1){
			printf("ICU:");
		}
		if(i==2){
			printf("PRIVATE:");
		}
		
		for(int j=0;j<bed;j++){
			printf("  %d,\t",arr[i][j]);
		}
		printf("\n");
	}
}
void ava_space(int bed , int wards ,int arr[][5]){

int *occ = &arr[0][0];
int total=bed*wards;
int full=0;

for(int i=0;i<total;i++){
	if(*(occ+i)==1){
		full++;
	}
}
	int empty= total - full;
	
	
	
	printf("the total empty beds are %d\n",empty);
	printf("number of occupied bed %d\n",full);


}
