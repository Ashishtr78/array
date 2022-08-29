
//**************************************sum and avarage******************
/* 
#include<stdio.h>
int main()
{
int a[23]={10},i,s,n,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
s=sum/n;
printf("%d\n",s);
printf("%d\n",sum);
return 0;

}
//*******************************************larsest element of array********************************************
 #include<stdio.h>
int main()
{
int a[5],i,j,max;
for(i=0;i<5;i++)
{

    scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)
{
if(a[i]>max)
max=a[i];
}
printf("%d",max);
return 0;

}
//**********************************************smalest array number*********************
#include<stdio.h>
int main()
{
int a[5],i,j,min;
for(i=0;i<5;i++)
{

    scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<5;i++)
{
if(a[i]<min)
min=a[i];
}
printf("%d",min);
return 0;

}
//*********************************second larsest number*********************************************
#include<stdio.h>
int main()
{
int a[7],i,j,max,max2;
for(i=0;i<7;i++)
{

    scanf("%d",&a[i]);
}
max=a[0];
max2=a[0];
for(i=0;i<7;i++)
{
if(a[i]>max)
 {  max2=max;
     max=a[i];
     
 }
 else if (a[i]<max&&a[i]>max2)
 {
     max2=a[i];
 }
 
 }
printf("%d",max2);
return 0;

}
*/
#include<stdio.h>
int main()
{
int a[20],i,t=0,s=0;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    t++;
    else
    s++;

}
printf("%d %d",t,s);
return 0;
}






