// Addition of two bit strings

#include<stdio.h>
#include<math.h>
#define max 20

main(){
	int a[max], b[max], s[max],n;
	char q;
	do{
		int i,c,d;
		printf("\nEnter the length of bit strings: ");
		scanf("%d",&n);
		printf("\nEnter first bit string, one bit at a time: \n");
		for(i=n-1; i>=0;i--)
		scanf("%d", &a[i]);
		printf("\nEnter second bit string,oone bit at a time: \n");
		for(i=n-1;i>=0;i--)
		scanf("%d",&b[i]);
		c=0;
		for(i=0;i<=n-1;i++){
			d=floor((a[i]+b[i]+c)/2);
			s[i]=a[i]+b[i]+c-(2*d);
			c=d;
		}
		s[n]=c;
		printf("\nThe sum of the bit strings is: ");
		for(i=n;i>=0;i--)
		printf("%d",s[i]);
		printf("\nDo you want to continue?(y/n):");
		scanf(" %c",&q);
	}
	while(q=='y');
}