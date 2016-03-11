#include<stdio.h>
#include<math.h>
void List();
double A(double sum1);
double B(double sum2);
main()
{
	int sel;
	double sum1,sum2,sum;
	List();
	printf("请选择:");
	scanf("%d",&sel);
	if(sel==1)
		sum=A(sum1);
	else if(sel==2)
		sum=B(sum2);
	printf("结果:%lf\n",sum);
	return 0;
}

void List()
{
	printf("\t|--------------------------------------|\n");
	printf("\t|              目录                    |\n");
	printf("\t|--------------------------------------|\n");
	printf("\t|           1.一次支付                 |\n");
	printf("\t|           2.等额多次支付             |\n");
	printf("\t|--------------------------------------|\n");
}
double A(double sum1)
{
	int n;
	double p,i;
	printf("请输入存放总金额p:");
	scanf("%lf",&p);
	printf("请输入利率:");
	scanf("%lf",&i);
	printf("请输入时间（年）:");
	scanf("%d",&n);
	sum1=p*pow((1+i),n);	
	return sum1;
}
double B(double sum2)
{
	int n;
	double p,i;
	printf("请输入每年存放的金额p:");
	scanf("%lf",&p);
	printf("请输入利率:");
	scanf("%lf",&i);
	printf("请输入时间（年）:");
	scanf("%d",&n);
	sum2=p*(pow((1+i),n)-1)/i;	
	return sum2;
}

