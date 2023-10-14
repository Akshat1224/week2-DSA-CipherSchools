#include<stdio.h>
int main(){
	int n,sum=0,b;
	int *c=&n;
	int *s=&sum;
	scanf("%d",c);
	while(*c!=0){
		b=*c%10;
		*s=*s+b;
		*c=*c/10;
	}
	printf("The sum of digits is=%d",*s);
	return 0;
	
	
}
