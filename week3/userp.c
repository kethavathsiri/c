#include<stdio.h>
int main(){
int i,j,n,count=0;
printf("enter a number:");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
 count=0;
for(j=1;j<=i;j++)
{
 if(i%j==0)
 count++;
 }
 
 if(count==2)
 printf("%d\n",i);
 

}
return 0;
}

