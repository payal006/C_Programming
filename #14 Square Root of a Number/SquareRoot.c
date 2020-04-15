
#include <stdio.h>

int main(){
	int len, num, i;
	scanf("%d",&len);
	
	float temp, sqrt[len];
	for(i=0; i<len; i++){
		num=0;
		scanf("%d",&num);
		temp=0;
		while(temp*temp<num){
			temp += 0.00001;
		}
		sqrt[i]=temp;
	}
	for(i=0; i<len; i++){
		printf("%.2f\n",sqrt[i]);
	}
}
