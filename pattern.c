#include<stdio.h>
void main()
{
    int i,j,n,c;
    scanf("%d",&n);
	for(i=0;i<=(2*n);i++)
	{
	    c=i>n?(2*n)-i:i;
	    for(j=0;j<c;j++)
	    {
	        printf("* ");
	    }
	    printf("\n");
	}
}
/* input
n=5
output
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
/*
