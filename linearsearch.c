#include<stdio.h>

void main()
	{
	int n,i,A[10],x,f;
	printf("enter the no: of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	   	scanf("%d",&A[i]);
	}
	printf("enter the elements to be searched");
	scanf("%d",&x);
  
	for(i=0;i<n;i++)
	  {	if(x==A[i])
			{f=1;}
		else
			{f=0;}
	   }
	
	
	
	if(f==1)
	       { printf("element is found at %d",i);
		}
	
	else
		{printf("element not found");
	 	 } 
  
	}     
