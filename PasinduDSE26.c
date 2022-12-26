#include<stdio.h>
int find_max(){
	int num1;
	int num2;
	int max;
	printf("Enter the Num1:");
	scanf("%d",&num1);
	printf("Enter the Num2:");
	scanf("%d",&num2);
	if(num1>num2){
		max=num1;
	}else if(num1<num2){
		max=num2;
	}else{
		printf("Both are equal\n");
	}
	printf("Maximum number:%d\n",max);
	return max;
}
int main(){
	int max=find_max();
	int count;
	int total=0;
	
	for(count=1;count<=max;count++){
		total=total+count;
	}
	printf("Total:%d\n",total);
	return 0;
}