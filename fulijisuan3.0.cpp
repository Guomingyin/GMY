 #include<stdio.h> 
 #include<math.h> 
 void List(); 
 void A(); 
 void B(); 
 void C(); 
 void D(); 
 void E();
 void F();
 main() 
 { 
 	int sel; 
	while(1)
	{
 		List(); 
		printf("\t��ѡ��:"); 
		while(scanf("%d",&sel)!=1||sel<0||sel>6)//��ֹ��������ַ��Լ���������ֲ�������0~6 
		{ 
 			printf("\t�������!!!\n\n\t������ѡ��:"); 
 			getchar(); 
		} 
		if(sel==0)
		{
			printf("\t��ӭ�´���ʹ�ã�лл!\n"); 
			break;
		}
 		switch(sel){//ѡ��0~6�Ĺ��� 
 		case 1: 
 			A(); 
 			break; 
 		case 2: 
 			B(); 
 			break; 
 		case 3: 
 			C(); 
 			break; 
		case 4:
			D();
			break;
		case 5:
			E();
			break;
		case 6:
			F();
			break;
		} 
	}
 } 
  
 void List()//Ŀ¼�� 
 { 
 	printf("\t|--------------------------------------|\n"); 
 	printf("\t|              Ŀ¼                    |\n"); 
 	printf("\t|--------------------------------------|\n"); 
 	printf("\t|                                      |\n"); 
 	printf("\t|             1.����(һ��֧��)         |\n");
    printf("\t|             2.����(��εȶ�֧��)     |\n");
 	printf("\t|             3.����                   |\n"); 
 	printf("\t|             4.Ͷ���ʽ�               |\n"); 
	printf("\t|             5.Ͷ��ʱ��               |\n"); 
 	printf("\t|             6.����                   |\n");
	printf("\t|             0.�˳�                   |\n"); 
 	printf("\t|                                      |\n"); 
 	printf("\t|--------------------------------------|\n"); 
 } 
 void A()//�������� 
 { 
 	int n;//ʱ��n 
 	double p,i,sum1;//�ܽ��p,����i,������sum1 
 	printf("\n\t*���������ܽ��:"); 
 	scanf("%lf",&p); 
 	printf("\t*����������:"); 
 	scanf("%lf",&i); 
 	printf("\t*������ʱ��(��):"); 
 	scanf("%d",&n); 
 	sum1=p*pow((1+i),n);//�����ļ��㹫ʽ 
 	printf("\t**������Ϊ:%.2lf\n\n",sum1);//�����������Ľ�� 
 } 
void B()//��εȶ�֧���������� 
 { 
 	int n;
 	double p,i,sum2;
 	printf("\n\t*���������ܽ��:"); 
 	scanf("%lf",&p); 
 	printf("\t*����������:"); 
 	scanf("%lf",&i); 
 	printf("\t*������ʱ��(��):"); 
 	scanf("%d",&n); 
 	sum2=(p*(pow((1+i),n)-1))/i;//�����ļ��㹫ʽ 
 	printf("\t**������Ϊ:%.2lf\n\n",sum2);//�����������Ľ�� 
 } 
 void C()//�������� 
 { 
 	int n; 
 	double p,i,sum3; 
 	printf("\n\t*���������ܽ��:"); 
 	scanf("%lf",&p); 
 	printf("\t*����������:"); 
 	scanf("%lf",&i); 
 	printf("\t*������ʱ��(��):"); 
 	scanf("%d",&n); 
 	sum3=p*(1+i*n); 
 	printf("\t**������Ϊ:%.2lf\n\n",sum3); 
 } 
 void D() //Ͷ���ʽ�
 { 
 	int n; 
 	double sum4,i,p;//pΪͶ�뱾�� 
 	printf("\n\t*�����뱾����:"); 
 	scanf("%lf",&sum4); 
 	printf("\t*����������:"); 
 	scanf("%lf",&i); 
 	printf("\t*������ʱ��(��):"); 
 	scanf("%d",&n); 
 	p=sum4/(1+i*n); 
 	printf("\t**Ͷ��ı���Ϊ:%.2lf\n\n",p); 
 }
 void E()   //Ͷ��ʱ��
 {
	 double n;
	 double sum5,i,p;
	 printf("\n\t*������Ͷ����:");
	 scanf("%lf",&p);
	 printf("\t*����������:");
	 scanf("%lf",&i);
	 printf("\t*�����뱾����:");
	 scanf("%lf",&sum5);
	 n=(log(sum5/p))/(log(1+i));
	 printf("\t**Ͷ���ʱ��Ϊ:%.0lf\n\n",n);
 }
void F()  //����
{
	int n;
	double sum6,i,p;
	printf("\n\t*������Ͷ����:");
	scanf("%lf",&p);
    printf("\t*������ʱ��(��):");
	scanf("%d",&n);
	printf("\t*�����뱾����:");
    scanf("%lf",&sum6);
	i=pow((sum6/p),(1/n))-1;
	printf("\t**����Ϊ:%lf\n\n",i);
}

