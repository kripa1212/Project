// Recursive calculation of power modulo m

#include<stdio.h>

int mpower(int b, int n, int m){
if(n==0)return 1;
else if(n%2==0) return (mpower(b,n/2,m)*mpower(b,n/2,m))%m;
else return (((mpower(b,(n-1)/2,m)*mpower(b,(n-1)/2,m))%m)*b%m)%m;	
}
main(){
	int b,n,m,mpow;
	char q;
	do{
		printf("\nTo calculate b^n mod m");
		printf("\nEnter integers b,n and m:\n");
		scanf("%d%d%d",&b,&n,&m);
		mpow= mpower(b,n,m);
		printf("\n%d^%d mod %d=%d", b,n,m,mpow);
		printf("\nDo you want to continue?(y/n):");
		scanf(" %c",&q);
	}
	while(q=='y');
}