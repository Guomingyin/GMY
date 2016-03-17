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
		printf("\t请选择:"); 
		while(scanf("%d",&sel)!=1||sel<0||sel>6)//防止输入的是字符以及输入的数字不是整数0~6 
		{ 
 			printf("\t输入错误!!!\n\n\t请重新选择:"); 
 			getchar(); 
		} 
		if(sel==0)
		{
			printf("\t欢迎下次再使用，谢谢!\n"); 
			break;
		}
 		switch(sel){//选择0~6的功能 
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
  
 void List()//目录表 
 { 
 	printf("\t|--------------------------------------|\n"); 
 	printf("\t|              目录                    |\n"); 
 	printf("\t|--------------------------------------|\n"); 
 	printf("\t|                                      |\n"); 
 	printf("\t|             1.复利(一次支付)         |\n");
    printf("\t|             2.复利(多次等额支付)     |\n");
 	printf("\t|             3.单利                   |\n"); 
 	printf("\t|             4.投入资金               |\n"); 
	printf("\t|             5.投入时间               |\n"); 
 	printf("\t|             6.利率                   |\n");
	printf("\t|             0.退出                   |\n"); 
 	printf("\t|                                      |\n"); 
 	printf("\t|--------------------------------------|\n"); 
 } 
 void A()//复利计算 
 { 
 	int n;//时间n 
 	double p,i,sum1;//总金额p,利率i,本利和sum1 
 	printf("\n\t*请输入存放总金额:"); 
 	scanf("%lf",&p); 
 	printf("\t*请输入利率:"); 
 	scanf("%lf",&i); 
 	printf("\t*请输入时间(年):"); 
 	scanf("%d",&n); 
 	sum1=p*pow((1+i),n);//复利的计算公式 
 	printf("\t**本利和为:%.2lf\n\n",sum1);//输出复利计算的结果 
 } 
void B()//多次等额支付复利计算 
 { 
 	int n;
 	double p,i,sum2;
 	printf("\n\t*请输入存放总金额:"); 
 	scanf("%lf",&p); 
 	printf("\t*请输入利率:"); 
 	scanf("%lf",&i); 
 	printf("\t*请输入时间(年):"); 
 	scanf("%d",&n); 
 	sum2=(p*(pow((1+i),n)-1))/i;//复利的计算公式 
 	printf("\t**本利和为:%.2lf\n\n",sum2);//输出复利计算的结果 
 } 
 void C()//单利计算 
 { 
 	int n; 
 	double p,i,sum3; 
 	printf("\n\t*请输入存放总金额:"); 
 	scanf("%lf",&p); 
 	printf("\t*请输入利率:"); 
 	scanf("%lf",&i); 
 	printf("\t*请输入时间(年):"); 
 	scanf("%d",&n); 
 	sum3=p*(1+i*n); 
 	printf("\t**本利和为:%.2lf\n\n",sum3); 
 } 
 void D() //投入资金
 { 
 	int n; 
 	double sum4,i,p;//p为投入本金 
 	printf("\n\t*请输入本利和:"); 
 	scanf("%lf",&sum4); 
 	printf("\t*请输入利率:"); 
 	scanf("%lf",&i); 
 	printf("\t*请输入时间(年):"); 
 	scanf("%d",&n); 
 	p=sum4/(1+i*n); 
 	printf("\t**投入的本金为:%.2lf\n\n",p); 
 }
 void E()   //投入时间
 {
	 double n;
	 double sum5,i,p;
	 printf("\n\t*请输入投入金额:");
	 scanf("%lf",&p);
	 printf("\t*请输入利率:");
	 scanf("%lf",&i);
	 printf("\t*请输入本利和:");
	 scanf("%lf",&sum5);
	 n=(log(sum5/p))/(log(1+i));
	 printf("\t**投入的时间为:%.0lf\n\n",n);
 }
void F()  //利率
{
	int n;
	double sum6,i,p;
	printf("\n\t*请输入投入金额:");
	scanf("%lf",&p);
    printf("\t*请输入时间(年):");
	scanf("%d",&n);
	printf("\t*请输入本利和:");
    scanf("%lf",&sum6);
	i=pow((sum6/p),(1/n))-1;
	printf("\t**利率为:%lf\n\n",i);
}

