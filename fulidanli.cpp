#include<stdio.h>
#include<math.h>
void List();
void A();
void B();
void C();
main()
{
	int sel;
	List();
	printf("\t请选择:");
	while(scanf("%d",&sel)!=1||sel<1||sel>4)//防止输入的是字符以及输入的数字不是整数1~4
	{
		printf("\n\t输入错误，请重新输入:");
		getchar();
	}
	while(getchar() != '\n'); //  处理回车键
	while(1){                 //退出系统
		if(sel==4)
			printf("\t欢迎下次再使用，谢谢!\n");
			break;
	}
	switch(sel){//选择1~4的功能
	case 1:
		A();
		break;
	case 2:
		B();
		break;
	case 3:
		C();
		break;
	}
}

void List()//目录表
{
	printf("\t|--------------------------------------|\n");
	printf("\t|              目录                    |\n");
	printf("\t|--------------------------------------|\n");
	printf("\t|                                      |\n");
	printf("\t|             1.复利                   |\n");
	printf("\t|             2.单利                   |\n");
	printf("\t|             3.投入资金               |\n");
	printf("\t|             4.退出                   |\n");
	printf("\t|                                      |\n");
	printf("\t|--------------------------------------|\n");
}
void A()//复利计算
{
	int n;//时间n
	double p,i,sum1;//总金额p,利率i,本利和sum1
	printf("\n\t请输入存放总金额:");
	scanf("%lf",&p);
	printf("\t请输入利率:");
	scanf("%lf",&i);
	printf("\t请输入时间(年):");
	scanf("%d",&n);
	sum1=p*pow((1+i),n);//复利的计算公式
	printf("\t本利和为:%.2lf\n",sum1);//输出复利计算的结果
}
void B()//单利计算
{
	int n;
	double p,i,sum2;
	printf("\n\t请输入存放总金额:");
	scanf("%lf",&p);
	printf("\t请输入利率:");
	scanf("%lf",&i);
	printf("\t请输入时间(年):");
	scanf("%d",&n);
	sum2=p*(1+i*n);
	printf("\t本利和为:%.2lf\n",sum2);
}
void C()
{
	int n;
	double sum3,i,p;//p为投入本金
	printf("\n\t请输入回报总金额:");
	scanf("%lf",&sum3);
	printf("\t请输入利率:");
	scanf("%lf",&i);
	printf("\t请输入时间(年):");
	scanf("%d",&n);
	p=sum3/(1+i*n);
	printf("\t投入的本金为:%.2lf\n",p);
}