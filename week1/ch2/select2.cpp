#include<stdlib.h>
#include<stdio.h>
void sort(int a[],int s);//������
        int main()
		 {
		int  m[10],k,tmp,c[10]; 
     	printf("������ʮ����");
    	for(int i=0;i<10;i++) 
     	{  
    	scanf("%d",&m[i]);    
    	}
        for (int i = 0; i < 10; i++) {
    	c[i] = m[i];
//    	printf("%d",c[i]);
        }
        
     	printf("��������������ڼ��������");
	    scanf("%d",&k);
		int b[k];
		for (int i = 0; i < k; i++) {
			b[i] = c[i];
//			printf("%d",b[i]);
		}
		//���򣺸ú��������������ð��������Ż�����
		sort(b,k);
		for (int i = 0; i < k; i++) {
//    	printf("%d",b[i]);
    }
		for (int i = k; i < 10; i++) {
			//����b�ó���Сֵb[k-1]
			if (c[i]>b[k-1]) {
				b[k-1] = c[i];
				sort(b,k);
			}
		}
		int s=b[k-1];
		printf("�������е�%d�����ֵΪ��%d",k,s);
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
