#include<stdio.h>
void bubble();
int main(){
printf("bubble sort\n");
bubble();
}
void bubble(){
int i,n,j,t;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
}
