#include<stdio.h>

int main()
{
char s1[122],s2[20],i,k=0,s3[200];

gets(s1);
gets(s2);
i=s1[i];
while (s1[i]!='\0')
{
    i++;
}

for(i=0;s2[i]!='\0';i++)
{
s1[i]=s2[i];
i++;
}
s1[i]='\0';
i++;
    printf("%s",s1);



return 0;
}