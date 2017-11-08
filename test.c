#include<stdio.h>
#include<string.h>
int JudgChar(char *p1,char *p2,int sz)
{
	int i=0,j=0;
	for(i=1;i<=sz;i++)
	{
		char tmp=p1[0];
		for(j=0;j<sz-1;j++)
		{
			p1[j]=p1[j+1];
		}
		p1[j]=tmp;
		if(strcmp(p1,p2)==0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[]="AABCD";
	char arr2[]="BCDAA";
	int sz=strlen(arr1);
	printf("%d\n",JudgChar(arr1,arr2,sz));
	return 0;
}