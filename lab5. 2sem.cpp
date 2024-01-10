// Recursive gcd calculation

#include<stdio.h>

int gcd(int a, int b){
	if(a==0)
	return b;
	else return gcd(b%a,a);
}
main(){
	int a,b,g;
	char q;
	do{
		printf("\nEnter two negative integers a and b:\n");
		scanf("%d%d",&a,&b);
		g= gcd(a,b);
		printf("\ngcd(%d %d)=%d",a,b,g);
		printf("\nDo you want to continue?(y/n):");
		scanf(" %c",&q);
	}
	while(q=='y');
}