
#include <stdio.h>

int sumOfRange(int min, int max){
	if(min>max){
		return 0;
	} else{
		int sum=0,i;
		for(i=min; i<=max; i++){
			sum += i;
		}
		return sum;
	}
}

int main(){
    int T, min, max;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&min);
        scanf("%d",&max);
        printf("%d\n",sumOfRange(min, max));
    }
    return 0;
}
