
#include <stdio.h>
#include <math.h>	//math.h only include mathematical operations for float points
#include <stdlib.h> //math.h doesnot include mathematical operations for integers

int main(){
	int len;
	scanf("%d",&len);
	
	int num[len], i, j, numLen, temp[5]={};
	
	for(i=0; i<len; i++){
		scanf("%d",&num[i]);
		numLen = floor(log10(abs(num[i]))) + 1;
		temp[numLen];
		for(j=0; j<numLen;j++){
			temp[j]=temp[j]*10+((num[i]%10)+1);
			num[i]=num[i]/10;
		}
		for(j=numLen; j>=0; j--){
			num[i]=num[i]*10+(temp[j]);
			temp[j]=0;
		}
	}
	
	for(i=0; i<len; i++){
		printf("%d\n",num[i]);
	}
	
	return 0;
}
