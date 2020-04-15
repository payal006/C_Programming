
#include <stdio.h>

int verifyPrime(int n){
	int i, flag=1;
	if(n<2) return 0;
	for(i=2; i<n; i++){
		if(n%i==0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(){
    int T, no;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&no);

        if (verifyPrime(no))
            printf("PRIME\n");
        else
            printf("NOT PRIME\n");
    }
}
