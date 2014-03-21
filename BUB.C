#include<stdio.h>
#include<conio.h>
void sort(int *a,int sz);
int i,k=0,count1=0,count2;
void main()
{
int n,a[100];
 printf("enetr sz\n");
 scanf("%d",&n);
printf("entr arr el");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(a,n);
}
void sort(int *a,int n)
{
int t,j,flag=0,len=n;
i=n-1;
count2=n-1;
while(len>=2){
if(flag==0)
{
 for(j=count2;j>n-i-1;j--)
 {
  if(a[j]<a[j-1])
  {
      t=a[j];
      a[j]=a[j-1];
      a[j-1]=t;

  }
 }
 count1++;
 flag=1;
 len--;
 i--;
}
else{
   for(j=count1;j<n-k-1;j++)
   {
    if(a[j]>a[j+1])
     {
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
     }

   }
 flag=0;
 len--;
 count2--;
 k++;

  }

}
for(j=0;j<n;j++)
printf("%d",a[j]);

}