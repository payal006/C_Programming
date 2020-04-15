
#include <stdio.h>

int main(){
	int len, digit, sum=0, i;
	
	scanf("%d",&len);
	
	for(i=0; i<len; i++){
		digit=0;
		scanf("%d",&digit);
		sum = sum + digit;
	}
	
	printf("%d",sum);
	return 0;
}
