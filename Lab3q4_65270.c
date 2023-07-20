#include <stdio.h>
	int main(){
		int input = 1,sum = 0;
		float i = 0.0;
		while(input > 0){
			printf("enter number : ");
			scanf("%d",&input);
			if(input > 0){
				sum += input;
				i++;
				
			}
		}
		printf("total sum is : %d \n",sum);
		printf("total average is : %.2f \n",sum/i);
		return 0;
	}
