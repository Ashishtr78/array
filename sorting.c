
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
//display(a,n);
bs( a,n);
display(a,n);
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
/*
//********************************bubule sort************************
void bs(int a[],int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
       if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }

    }
  }

//*****************************************selection sort*****************************************
void bs(int a[],int n)
{
int i,j,temp,f,k=0;
for(i=0;i<n;i++)
{
    f=i;
for(j=i+1;j<n;j++)
{

if(a[f]>a[j])
{
f=j;

}
temp=a[i];
a[i]=a[f];
a[f]=temp;

}

}
}
*/
//*************************************insertion sort**************************************
void bs(int a[],int n)
{
int i,j,temp,f,k=0;
for(i=0;i<n;i++)
{
    f=a[i];
for(j=i+1;j<n;j++)
{
if(f>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;


}

}

}}






