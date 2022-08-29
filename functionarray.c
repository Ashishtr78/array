#include<stdio.h>
void input(int[],int);
void display(int[],int );
void bs(int[],int );
int main()
{
int a[100],n;
printf("how much number you want");
scanf("%d",&n);
input(a,n);
display(a,n);
bs( a,n);
return 0;
}
void input(int a[],int n)
{
    int i;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
} 
}
void display(int a[],int n )
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void bs(int a[],int n)
{
int low,high,mid,s,k=0;
printf("enter the searching element");
scanf("%d",&s);
low=0;
high=n-1;

while (low<=high)
{
    mid=(low+high)/2;
if(a[mid]==s)
{
    k=0;
    printf("%d is persent",s);
    break;
}
else if (s<a[mid])
{
    high=mid-1;
    
}
else if (s>a[mid])
{
    low=mid+1;
    
}
else
{
    k=1;
}
if(k==1)
printf("%d is not persent",s);

}}