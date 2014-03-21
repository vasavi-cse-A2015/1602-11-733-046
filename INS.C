#include<stdio.h>
#include<conio.h>
void ins(char *a,int sz);
void main()
{
char a[100];
int n,k;
      printf("entr sz\n");
      scanf("%d",&n);
      printf("entr arr el\n");
      for(k=0;k<n;k++)
      scanf("%c",&a[k]);
       ins(a,n);



}
void ins(char *a,int n)
{
char temp;
  int k,j;
  for(k=1;k<=n-1;k++)
  {
  temp=a[k];
  j=k-1;
  while((temp<a[j])&&(j>=0))
  {
   a[j+1]=a[j];
   j=j-1;
  }
  a[j+1]=temp;


  }

  for(j=0;j<n;j++)
  printf("%c",a[j]);
}