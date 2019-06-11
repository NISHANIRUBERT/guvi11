#include <stdio.h>
#include<string.h>
int main(void) {
	int num,number=0,powr=1;
	scanf("%d",&num);
	while((num/powr)%10==0)
	{
		powr*=10;
	}
	while(num/powr)
	{
		number=number*10+((num/powr)%10);
		powr*=10;
	}
	printf("%d",number);
	return 0;
}
