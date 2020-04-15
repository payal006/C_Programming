
#include <stdio.h>

int gcd(int i, int j){
	int a, gcd=1;
	for(a=2; a<=i && a<=j; a++){
		if(i%a==0 && j%a==0){
			gcd=a;
		}
	}
	return gcd;
}

int main(){
    int i, j;
    scanf("%d",&i);
    scanf("%d",&j);
    printf("%d\n",gcd(i, j));
    return 0;
}
