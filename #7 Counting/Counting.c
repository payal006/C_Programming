
#include <stdio.h>

int main(){
	int len, mark, count=0, i;
	
	scanf("%d",&len);
	
	for(i=0; i<len; i++){
		scanf("%d",&mark);
		count = (mark>=50)?count+1:count;
	}
	
	printf("%d",count);
	return 0;
}
