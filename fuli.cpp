#include<stdio.h>
void List();
double A(double sum1);
double B(double sum2);
main()
{
	int sel;
	double sum1,sum2;
	List();
	printf("��ѡ��:");
	scanf("%d",&sel);
	if(sel==1)
		A(sum1);
	else if(sel==2)
		B(sum2);
	return 0;
}

void List()
{
	printf("\t|--------------------------------------|\n");
	printf("\t|              Ŀ¼                    |\n");
	printf("\t|--------------------------------------|\n");
	printf("\t|           1.һ��֧��                 |\n");
	printf("\t|           2.�ȶ���֧��             |\n");
	printf("\t|--------------------------------------|\n");
}
double A(double sum1)
{
	int n;
	double p,i;
	printf("���������ܽ��p:");
	scanf("%lf",&p);
	printf("����������:");
	scanf("%lf",&i);
	printf("������ʱ�䣨�꣩:");
	scanf("%d",&n);
	sum1=p(1+i)^n;	
	return sum1;
}
double B(double sum2)
{
	int n;
	double p,i;
	printf("������ÿ���ŵĽ��p:");
	scanf("%lf",&p);
	printf("����������:");
	scanf("%lf",&i);
	printf("������ʱ�䣨�꣩:");
	scanf("%d",&n);
	sum2=p((1+i)^n-1)/i;	
	return sum2;
}

