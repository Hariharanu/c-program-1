#include <stdio.h>
#include<string.h>
int main(void) {
	char a[45],temp[23];
	int i,j,k;
	printf("enter the string");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				temp[k]=a[i];
				a[i]=a[j];
				a[j]=temp[k];
				
			}
		}
	}
	printf("%s",a);
	return 0;
}
