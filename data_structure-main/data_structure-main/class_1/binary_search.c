#include<stdio.h>
int main()
{
	int a[]={1,2,4,5,67,89,100};
	int item=4;
	
	int left,right,middle;
	left=0;
	right=6;
	
	while(left<=right){
		
		middle=(left+right)/2;
		if(a[middle]==item){
			
			printf("Item found at index:%d\n",middle);
			return 0;
			
		}
		else if(a[middle]<item){
			
			left=middle+1;
			
		}
		else{
			
			right=middle-1;
		}
	}
	
	printf("Item not found\n");
// 	printf("Item not found\n");

	
	
	return 0;
}
