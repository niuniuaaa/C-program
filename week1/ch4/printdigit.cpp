#include <stdio.h>
void PrintInt(int num);
void PrintDigit(double demcial);
 
int main()
{
    printf("请输入要输出的实数：") ;
	double num;
	scanf("%lf",&num); 
	if(num < 0){
        num = -num;
        putchar('-');//当输入数字为负数时 
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
