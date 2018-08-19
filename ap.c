#include<stdio.h>
#include<stdlib.h>
int main()
{
	int take;
	printf("(1) For Total\n(2) For term\n\nEnter here: ");
	scanf("%d",&take);
	switch(take){
		case 1:
		p();
		break;
		case 2:
		n();
		break;
		default:
		printf(" non of them ");
	}
	return 0;
}
p(){
		int d=0,a=0,n=0,str=0,multi=0,store=0,add=0;
		printf("Type value of D : ");
		scanf("%d",&d);
		printf("Type value of A : ");
		scanf("%d",&a);
		printf("Type value of N : ");
		scanf("%d",&n);
		str=n-1;
		multi=str*d;
		add=multi+a;
		printf("\n T is %d \n",add);
}
n(){
	int d=0,a=0,n=0,str=0,multi=0,store=0,t=0;
	printf("Type the D value: ");
		scanf("%d",&d);
		printf("Type the A value: ");
		scanf("%d",&a);
		printf("Type the Total value: ");
		scanf("%d",&t);
		str=a-d;multi=t-str;n=multi/d;
		printf(" \n term is %d \n",n);

}