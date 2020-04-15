
#include <stdio.h>

int main(){
	int len, num, rev, i;
	scanf("%d",&len);
	char res[len];
	
	for(i=0; i<len; i++){
		num=0,rev=0;
		scanf("%d",&num);
		int temp = num;
		while(temp != 0){
			rev = rev*10 + (temp%10);
			temp = temp/10;
		}
		res[i] = (num==rev)?'E':'N';
	}
	
	for(i=0; i<len; i++){
		printf((res[i]=='E')?"Equal\n":"Not Equal\n");
	}
	
	return 0;
}
