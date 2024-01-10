//Implementing extended Euclidean algorithm

#include<stdio.h>
#include<math.h>

main(){
	int x, y;
	char p;
	do{
		printf("\nEnter first positive integer: ");
		scanf("%d",&x);
		printf("\nEnter second positive integer: ");
		scanf("%d",&y);
		int a=x,b=y;
		int s1=0,s2=1,t1=1,t2=0;
		int q,r,s,t;
		while(b!=0){
			q=a/b; r=a%b;s=s2-q*s1;t=t2-q*t1;
			a=b; b=r; s2=s1; s1=s; t2=t1; t1=t;
		}
		printf("\nThe gcd of %d and %d is %d with coefficents %d and %d respectively.",x,y,a,s2,t2);
		printf("\nDo you want to continue?(y/n):");
		scanf(" %c",&p);
	}while(p=='y');
}