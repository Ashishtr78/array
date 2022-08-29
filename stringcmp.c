#include<stdio.h>

int main()
{
char s1[20],s2[20],i,k=0,j;

gets(s1);
gets(s2);
for(i=0;s1[i]!='\0'|| s2[i]!='\0';i++)
{
if(s1[i]==s2[i])
{k=0;
}
else
{
    k=1;
break;

}}
if(k==0)
printf("same");
else
printf("not same");
return 0;
}