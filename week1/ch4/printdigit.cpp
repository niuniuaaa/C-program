#include <stdio.h>
void PrintInt(int num);
void PrintDigit(double demcial);
 
int main()
{
    printf("������Ҫ�����ʵ����") ;
	double num;
	scanf("%lf",&num); 
	if(num < 0){
        num = -num;
        putchar('-');//����������Ϊ����ʱ 
    }
    int n = (int) num;
    PrintInt(n);
    putchar('.');
    PrintDigit(num-n);
}
void PrintInt(int num)
{
    if(num>=10)
    {
    	PrintInt(num/10);
	}
	printf("%d",num%10);
 
}
 
void PrintDigit(double demcial)
{
    if(demcial<1&&demcial>=0.00001)
    {
    	int s=(int(demcial*10))%10;
    	printf("%d",s);
    	PrintDigit(demcial*10-int(demcial*10));
	}
 
}
