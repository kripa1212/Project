// Calculating floor and ceiling

#include<stdio.h>
#include<math.h>

main(){
	double x,f,c;
	char q;
	do{
		printf("Enter a number: ");
		scanf("%lf",&x);
		f = floor(x);
		c = ceil(x);
		printf("\nThe floor and ceiling of %lf is %lf and %lf respectively.",x,f,c);
		printf("\nDo you want to continue?(y/n):");
		scanf(" %c",&q);
	} while(q=='y');
}