//iMplementing Euclidean algorithm

#include<stdio.h>
#include<math.h>

main(){
	int x, y, r;
	char q;
	do{
		printf("\nEnter first positive integer: ");
		scanf("%d",&x);
		printf("\nEnter second positive integer: ");
		scanf("%d",&y);
		while(y!=0){
			r=x%y;
			x=y;
			y=r;
		}
		printf("\nThe gcd of these integers is %d.",x);
		printf("\nDo you want to continue?(y/n):");
		scanf(" %c",&q);
	}while(q=='y');
}