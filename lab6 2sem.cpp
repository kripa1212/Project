// Addition of two bit strings

#include<stdio.h>
#include<math.h>

main(){
	int a,d;
	char p;
	do{
		printf("Enetr a dividend: ");
		scanf("%d",&a);
		printf("\nEnter a positive divisor: ");
		scanf("%d",&d);
		int q= 0;
		int r= abs(a);
		while(r>=d){
			r=r-d;
			q=q+1;
		}
		if(a<0){
			if(r>0){
				r=d-r;
				q=-(q+1);
			}
			else if(r==0)
			q=-q;
		}
		printf("\nThe quotient and remainder are%d and %d respectively.",q,r);
		printf("\nDo you want to continue?(y/n): ");
		scanf(" %c",&p);
	}
	while(p=='y');
}