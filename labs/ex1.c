#include<stdio.h>
int main()
{
	char str[1000];
		int i=0,num=0,word=0;
		char c;
		while((str[i++]=getchar())!='\n');
		str[i]='\0';
		for(i=0;(c=str[i])!='\0';i++)
			if(c==' ') word=0;
			else if(word==0)
			{
				word=1;
				num++;
			}
			printf("%d\n",num);
		return 0;
}