 #include<stdio.h> 
 #include<math.h> 
 void List(); 
 void A(); 
 void B(); 
 void C(); 
 void D(); 
 void E();
 void F();
 void G();
 main() 
 { 
    int sel; 
    while(1)
    {
        List(); 
        printf("\t请选择:"); 
        while(scanf("%d",&sel)!=1||sel<0||sel>7)//防止输入的是字符以及输入的数字不是整数0-7 
        { 
             printf("\t输入错误!!!\n\n\t请重新选择:"); 
             getchar(); 
        } 
        if(sel==0)
        {
            printf("\t欢迎下次再使用，谢谢!\n"); 
            break;
        }
         switch(sel){//选择1~7的功能 
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
		 case 7:
			 G();
			 break;
        }
    }
 } 
  
 void List()//目录表 
 { 
     printf("\t|--------------------------------------|\n"); 
     printf("\t|               功能                   |\n"); 
     printf("\t|--------------------------------------|\n"); 
     printf("\t|                                      |\n"); 
     printf("\t|           1.复利(一次支付)           |\n");
     printf("\t|           2.复利(多次等额支付)       |\n");
     printf("\t|           3.单利                     |\n"); 
     printf("\t|           4.投入资金                 |\n"); 
     printf("\t|           5.投入时间                 |\n"); 
     printf("\t|           6.利率                     |\n");
     printf("\t|           7.每月等额本息还款         |\n");
     printf("\t|           0.退出                     |\n"); 
     printf("\t|                                      |\n"); 
     printf("\t|--------------------------------------|\n"); 
 } 
 void A()//一次投入复利计算 
 { 
     int n;//时间n 
     double p,i,sum1;//总金额p,利率i,本利和sum1 
     printf("\n\t*请输入存款金额:"); 
     scanf("%lf",&p); 
     printf("\t*请输入利率:"); 
     scanf("%lf",&i); 
     printf("\t*请输入存储时间(年):"); 
     scanf("%d",&n); 
     sum1=p*pow((1+i),n);//复利的计算公式 
     printf("\t**本利和为:%.2lf\n\n",sum1);//输出复利计算的结果 
 } 
void B()//多次等额支付复利计算
 { 
     int n;
     double p,i,sum2=0;
	 char choose;
	 printf("\n\t多次等额投入方式:\n\ta.等额多次月投\n\tb.等额多次年投\n\t*请选择:");
	 scanf("%s",&choose);
	 if(choose=='a')
	 {
		printf("\n\t*请输入月投金额:"); 
		scanf("%lf",&p); 
		printf("\t*请输入年利率:"); 
		scanf("%lf",&i); 
		printf("\t*请输入存储时间(年):"); 
		scanf("%d",&n);
		sum2=p*12*(pow(1+i,n)-1)/i;
		printf("\t**本利和为:%.2lf\n\n",sum2);
	 }
	 else
	 {
		printf("\n\t*请输入年投金额:"); 
		scanf("%lf",&p); 
		printf("\t*请输入年利率:"); 
		scanf("%lf",&i); 
		printf("\t*请输入存储时间(年):"); 
		scanf("%d",&n);
		sum2=(p*pow((1+i),n)-1)/i;
		printf("\t**本利和为:%.2lf\n\n",sum2);
	 }
 } 
 
 void C()//单利计算 
 { 
     int n; 
     double p,i,sum3; 
     printf("\n\t*请输入存款金额:"); 
     scanf("%lf",&p); 
     printf("\t*请输入年利率:"); 
     scanf("%lf",&i); 
     printf("\t*请输入存储时间(年):"); 
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
     printf("\t*请输入年利率:"); 
     scanf("%lf",&i); 
     printf("\t*请输入存款时间(年):"); 
     scanf("%d",&n); 
     p=sum4/(1+i*n); 
     printf("\t**投入的本金为:%.2lf\n\n",p); 
 }
 void E()   //投入时间
 {
     double n;
     double sum5,i,p;
     printf("\n\t*请输入存储金额:");
     scanf("%lf",&p);
     printf("\t*请输入年利率:");
     scanf("%lf",&i);
     printf("\t*请输入本利和:");
     scanf("%lf",&sum5);
     n=(log(sum5/p))/(log(1+i));
     printf("\t**投入的时间为:%.0lf\n\n",n);
 }
void F()  //利率
{
    double sum6,i,p,n;
    printf("\n\t*请输入存储金额:");
    scanf("%lf",&p);
    printf("\t*请输入存储时间(年):");
    scanf("%lf",&n);
    printf("\t*请输入本利和:");
    scanf("%lf",&sum6);
    i=pow((sum6/p),(1/n))-1;
    printf("\t**利率为:%.2lf\n\n",i);
}
void G()
{
	double sum7,i,p,n;
	printf("\n\t*请输入贷款金额:");
    scanf("%lf",&sum7);
    printf("\t*请输入贷款时间(年):");
    scanf("%lf",&n);
    printf("\t*请输入年利率:");
    scanf("%lf",&i);
	p=sum7*i/(12*(1+i)*(pow(1+i,n)-1));
	printf("\t**每月等额本息还款为:%.2lf\n\n",p);

}