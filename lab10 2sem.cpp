//Solving linear congruence:

#include<stdio.h>
#include<math.h>

int inverse(int a, int b){
	int s1=0,s2=1,t1=1,t2=0;
	int q,r,s,t;
	while(b!=0){
		q=a/b; r=a%b; s=s2-q*s1;  t=t2-q*t1;
		a=b; b=r; s2=s1; s1=s; t2=t1;t1=t;
	}
	return s2;
}
main(){
	int a,b,m,s,soln;
	char q;
	printf("\nSolving the linear congruence ax=b(mod m)\n");
	do{
		printf("\nEnter the integers a,b and m: ");
		scanf("%d%d%d",&a,&b,&m);
		s= inverse(a,m);
		printf("\nSolution of the given linear congruence is %d",s*b);
		printf("\nDo you want to continue?(y/n): ");
		scanf(" %c",&q);
	}while(q=='y');
}