// *************************************insertion element any index************************
/*
#include<stdio.h>
int main()
{
  int a[10],i,n,j,k;
  for(i=0;i<5;i++)
  {
scanf("%d",&a[i]);
  }
  scanf("%d",&j);
  scanf("%d",&n);
  for(i=5;i>=j;i--)
  {
    
        a[i+1]=a[i];
    }
  
   a[i+1]=n;
   i++;
   for(i=0;i<6;i++)
  {
 printf("%d\n",a[i]);
  }
  return 0;
}

//*******************************************deletion element of any location********************************
#include<stdio.h>
int main()
{
  int a[10],i,n,j,k;
  for(i=0;i<5;i++)
  {
scanf("%d",&a[i]);
  }
  scanf("%d",&j);
 
  for(i=j;i<5;i++)
  {
    
        a[i]=a[i+1];
    }
  
  
   for(i=0;i<4;i++)
  {
 printf("%d\n",a[i]);
  }
  return 0;
}


//************************************************searching a element********************************
#include<stdio.h>
int main()
{
   int a[10],i,n,k=0;
   for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
    
   }
   scanf("%d",&n);
for(i=0;i<n;i++)
{
    if(a[i]==n)
    {
        printf("%d is persent",a[i]);
        k=0;
        break;
    }
     else
     k=1;
}
if(k==1)
printf("%d is not persent",n);


return 0;
}
*/
#include<stdio.h>
int main()
{
int a[10],i,n,k=0,low,high,mid;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
scanf("%d",&n);
low=0;
high=10;
mid=(low+high)/2;
while(low<=high)
{
if(n==a[mid])
{
    printf("%d is persent",n);
    k=0;
    break;
}
else if (n<a[mid])
{
    low=mid+1;
}
else if (n>a[mid])
{
    high=mid-1;

}
else
{
    k=1;
}
}
if(k==1)
printf("%d is not persent",n);

return 0;

}