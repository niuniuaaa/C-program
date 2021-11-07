#include<stdlib.h>
#include<stdio.h>
void sort(int a[],int s);//排序函数
        int main()
		 {
		int  m[10],k,tmp,c[10]; 
     	printf("请输入十个数");
    	for(int i=0;i<10;i++) 
     	{  
    	scanf("%d",&m[i]);    
    	}
        for (int i = 0; i < 10; i++) {
    	c[i] = m[i];
//    	printf("%d",c[i]);
        }
        
     	printf("请输入您想输出第几个最大者");
	    scanf("%d",&k);
		int b[k];
		for (int i = 0; i < k; i++) {
			b[i] = c[i];
//			printf("%d",b[i]);
		}
		//排序：该函数代码就是上面冒泡排序的优化代码
		sort(b,k);
		for (int i = 0; i < k; i++) {
//    	printf("%d",b[i]);
    }
		for (int i = k; i < 10; i++) {
			//数组b得出最小值b[k-1]
			if (c[i]>b[k-1]) {
				b[k-1] = c[i];
				sort(b,k);
			}
		}
		int s=b[k-1];
		printf("所有数中第%d个大的值为：%d",k,s);
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
