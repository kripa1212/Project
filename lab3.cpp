// Recursive power function

#include<stdio.h>

double power(float a, int n){
	if(n==0)
	return 1;
	else return a*power(a, n-1);
}
main(){
	float a;
	int n;
	double pow;
	char q;
	do{
		printf("\nEnter a nonzero real number:");
		scanf("%f",&a);
		printf("\nEnter a nonnegative integer:");
		scanf("%d",&n);
		pow= power(a,n);
		printf("\nThe value of %f raised to the power %d if %f.",a,n,pow);
		printf("\nDo you want to continue?(y/n):");
		scanf(" %c",&q);
	}
	while(q=='y');
}