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
	printf("\t��ѡ��:");
	while(scanf("%d",&sel)!=1||sel<1||sel>4)//��ֹ��������ַ��Լ���������ֲ�������1~4
	{
		printf("\n\t�����������������:");
		getchar();
	}
	while(getchar() != '\n'); //  ����س���
	while(1){                 //�˳�ϵͳ
		if(sel==4)
			printf("\t��ӭ�´���ʹ�ã�лл!\n");
			break;
	}
	switch(sel){//ѡ��1~4�Ĺ���
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

void List()//Ŀ¼��
{
	printf("\t|--------------------------------------|\n");
	printf("\t|              Ŀ¼                    |\n");
	printf("\t|--------------------------------------|\n");
	printf("\t|                                      |\n");
	printf("\t|             1.����                   |\n");
	printf("\t|             2.����                   |\n");
	printf("\t|             3.Ͷ���ʽ�               |\n");
	printf("\t|             4.�˳�                   |\n");
	printf("\t|                                      |\n");
	printf("\t|--------------------------------------|\n");
}
void A()//��������
{
	int n;//ʱ��n
	double p,i,sum1;//�ܽ��p,����i,������sum1
	printf("\n\t���������ܽ��:");
	scanf("%lf",&p);
	printf("\t����������:");
	scanf("%lf",&i);
	printf("\t������ʱ��(��):");
	scanf("%d",&n);
	sum1=p*pow((1+i),n);//�����ļ��㹫ʽ
	printf("\t������Ϊ:%.2lf\n",sum1);//�����������Ľ��
}
void B()//��������
{
	int n;
	double p,i,sum2;
	printf("\n\t���������ܽ��:");
	scanf("%lf",&p);
	printf("\t����������:");
	scanf("%lf",&i);
	printf("\t������ʱ��(��):");
	scanf("%d",&n);
	sum2=p*(1+i*n);
	printf("\t������Ϊ:%.2lf\n",sum2);
}
void C()
{
	int n;
	double sum3,i,p;//pΪͶ�뱾��
	printf("\n\t������ر��ܽ��:");
	scanf("%lf",&sum3);
	printf("\t����������:");
	scanf("%lf",&i);
	printf("\t������ʱ��(��):");
	scanf("%d",&n);
	p=sum3/(1+i*n);
	printf("\tͶ��ı���Ϊ:%.2lf\n",p);
}