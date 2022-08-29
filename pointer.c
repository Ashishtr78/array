//*ptr++ : return the value at ptr and increace ptr
//++*ptr : increase the value at ptr by 1
//*++ptr : increase the pointer ptr and then fetch the value

/*   ***************************constant pointer*******************************
  
  :a constant pointer is a pointer that cannot change the address its holding
  : we can say that once a constant poiinter points to a variable then it  can not  point to any other vriable

  ex:

  int a=0,b=20;
  int *contst p=&a;
  p=&a;//error



  ***********************************pointer to a constant**********************

  : a pointer through which one can not change the value of variable it point is know as a pointer to constant .

  : these tye of pointer can change the addrress they point to but can not change the value kept at those adrress .

  ex:

  int a=10.b=20;
  const int *p=&a;
  *p=20; //error





  ******************************constant pointer to a constant ********************

  :it is theb mixer of above two pointer

  : a constant pointer to constant is a pointer that can neither change the address its pointing to and  nor it can change 
  the value  kept at that addess 

ex; 



**************************funtion pointer************************

:in c , every type of variable except register , has an address which can be referenceed by using pointer variable


**********************************how to acess array using pointer *********************/
#include<stdio.h>
int main()
{
    int a[]={5,1,15,20,25};
    int x,y,z;
   x=++a[1];
   y=a[1]++;
   z=a[x++];
   printf("%d %d %d %d ",x,y,z,a[1]);
    }


#include<stdio.h>




// array name is a costant pointer 


