#include<stdio.h> 

void sort(int a[],int n);//排序函数

int main()
{
	int  b[10],k; 
	printf("请输入十个数");
	for(int i=0;i<10;i++) 
	{  
	scanf("%d",&b[i]);    
	}
	sort(b,10);
	printf("请输入您想输出第几个最大者");
	scanf("%d",&k); 
	printf("max:%d\n",b[k-1]);
	return 0;
} 
void sort(int a[],int n)
{

int t,i,j,temp;

for(i=n-1;i>=1;--i)
{
   t=0;
   for(j=1;j<=i;++j)
    if(a[j-1]<a[j])
    {
    temp=a[j];
    a[j]=a[j-1];
    a[j-1]=temp;
    t=1;
    }
    if(t==0)
    return;
}
}

