#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,len;
	char ch[50];
	printf("Enter number of characters:\n");
	scanf("%d",&n);
	printf("Enter characters:\n");
	for(i=0;i<n;i++)
	{
		scanf("%c",&ch[i]);
	}
	len = strlen(ch);
	printf("%d\n", len);
	for(i=0;i<=n;i++)
	{
		printf("%c",ch[i]);
	}
	return 0;

}