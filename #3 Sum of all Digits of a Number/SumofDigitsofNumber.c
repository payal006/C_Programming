
#include <stdio.h>

void main(){
	int A,Sum,temp,rem;
	
	scanf("%d",&A);
	int num[A],i;
	
	for(i=0; i<A; i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0; i<A; i++){
		temp = num[i];
		Sum = 0;
		while(temp!=0){
			rem = temp % 10;
			Sum = Sum + rem;
			temp = temp / 10;
		}
		printf("%d\n",Sum);
	}
}
