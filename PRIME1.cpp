#include<cstdio>
#include<math.h>
#define max 100000
using namespace std;
int main()
{
long int i,j,k,t,x,y,n,count=0;
char arr[max+2];
char arr1[100001];
arr1[-1]='0';
arr[0]='0';
arr[1]='0';
for(i=2;i<=max;i++)
arr[i]='1';
for(i=2;i<pow(max,0.5);i++)
if(arr[i]=='1'){
for(j=i;i*j<=max;j++)
arr[i*j]='0';
}
scanf("%ld",&t);
while(t--)
{
for(i=0;i<=100000;i++)
arr1[i]='1';
scanf("%ld%ld",&x,&y);
if(y<=max)
{
for(i=x;i<=y;i++)
if(arr[i]=='1')
printf("%ld\n",i);
}
else
{
if(x<=max)
{
for(i=x;i<=max;i++)
if(arr[i]=='1')
printf("%ld\n",i);
k=i;
}
else
k=x;
for(i=2;i<=pow(y,0.5);i++)
if(arr[i]=='1')
for(j=k/i;i*j<=y;j++)
if(arr1[i*j-k]=='1')
arr1[i*j-k]='0';
for(i=k;i<=y;i++)
if(arr1[i-k]=='1')
printf("%ld\n",i);
}
}
return 0;
} 