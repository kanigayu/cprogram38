#include <stdio.h>
#include<string.h>
int main()
{
	int i,m;
	int a[10];
	scanf("%d",&a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}
