#include<stdio.h>

int main()
{
	int c, f, l, m, n, search, a[100];
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(c=0; c<n; c++)
		scanf("%d",&a[c]);
		printf("enter the value to be found");
		scanf("%d",&search);
		f=0;
		l=n-1;
		m=(f+l)/2;
	while(f<=l)
	{
		if(a[m]<search)
			f=m+1;
		else if(a[m]==search)
		{
			printf("%d found at location %d",search,m+1);
			break;

		}
		else
			l=m-1;
			m=(f+l)/2;
	}
	if(f>l)
		printf("not found,%d is not in the list",search);
	return 0;
}
