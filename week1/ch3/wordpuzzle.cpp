#include <stdio.h>
#include <string.h>
 

void chazhao(int row,int col,int n,int m,int p);
char puzzle[10][10], word[10][10];
int a[8][2]={{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};//�������� 
int main()
{
    int n,m,p;
    printf("�����������м��м���"); 
    scanf("%d%d",&n,&m);
    printf("��ֱ���������ÿ�е��ַ�");
    for(int i=0;i<n;i++)
    {
	scanf("%s",puzzle[i]); 
    }
	printf("���������м���������Ҫ����");
	scanf("%d",&p);
	printf("��������Ҫ���ҵĵ���");
	for(int j=0;j<p;j++)
	{
	scanf("%s",word[j]);
	for(int s=0;s<n;s++)
	{
		for(int t=0;t<m;t++)
		{
			chazhao(s,t,n,m,j);
		}
	}
    }
	return 0; 
}

void chazhao(int row,int col,int n,int m,int p)
{
	
	for(int k=0;k<=7;k++)
	{
		int i=row,j=col;
		for(int s=0;word[s]!='\0';)
		{
		if(i>=n||j>m||i<0||j<0)
		break;
		if(word[p][s]==puzzle[i][j])
		{
			if(word[p][s+1]=='\0')
			{
				printf("%d%d%d\n",row,col,k);
			}
			s++;
		}
		else
		break;
		i=i+a[k][0];
		j=j+a[k][1];
	}
}
}
