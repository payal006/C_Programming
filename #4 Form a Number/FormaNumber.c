#include <stdio.h>

int formNumber(){
	int len, digit, i, num=0;
	scanf("%d",&len);

	for(i=0;i<len;i++){
		scanf("%d",&digit);
		num = num*10+digit;
	}
	return num;
}

int main(){
	printf("%d",formNumber());
  	return 0;
}
