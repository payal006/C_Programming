
#include <stdio.h>

void primeFactors(int n){
	int i;
	for(i=2; i<=n; i++){
		while(n%i==0){
		    printf("%d\n",i);
		    n /= i;
		}
	}
}

int main(){
    int no;
    scanf("%d",&no);
    primeFactors(no);
    return 0;
}
