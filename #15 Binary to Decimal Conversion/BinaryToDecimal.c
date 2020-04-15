
#include <stdio.h>
#include <math.h>

int binaryToDecimal(int n){
	int res=0, i=0;
	while(n!=0){
		res = res + ((n%10) * pow(2,i));
		n = n/10;
		i++;
	}
	return res;
}

int main(){
    int T, no;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&no);
        printf("%d\n",binaryToDecimal(no));
    }
    return 0;
}
