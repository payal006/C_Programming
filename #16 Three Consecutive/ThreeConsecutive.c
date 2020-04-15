
#include <stdio.h>

int threeConsecutive(int a, int b, int c){
	if(a==b | a==c | b==c) return 0;
	
	int nums[3] = {a, b, c}, min=nums[0], max=nums[0], i;
	for(i=0; i<3; i++)
		(nums[i]>max) ? max=nums[i] : ((nums[i]<min) ? min=nums[i]:0);
	
	if(max-min+1==3) return 1;
	return 0;
}

int main(){
    int T, a, b,c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);

        printf("%d\n",threeConsecutive(a, b, c));
    }

    return 0;
}
