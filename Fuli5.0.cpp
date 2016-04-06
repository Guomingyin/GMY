
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

 void H();

 void I(int op,double record[4]);

 main() 

 { 

    int sel; 

    while(1)

    {

        List(); 

        printf("\t请选择:"); 

        while(scanf("%d",&sel)!=1||sel<0||sel>8)//防止输入的是字符以及输入的数字不是整数0-8 

        { 

             printf("\t输入错误!!!\n\n\t请重新选择:"); 

             while(getchar() != '\n');        //  处理回车键

        } 


        if(sel==0)

        {

            printf("\t欢迎下次再使用，谢谢!\n"); 

            break;

        }

         switch(sel){//选择1~8的功能 

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

		 case 8:

			 H();

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

	 printf("\t|           8.投资计算                |\n");

     printf("\t|           0.退出                     |\n"); 

     printf("\t|                                      |\n"); 

     printf("\t|--------------------------------------|\n"); 

 } 

 void A()//一次投入复利计算 

 { 

     int n;//时间n 

     double p,i,sum1;//总金额p,利率i,本利和sum1 

     printf("\n\t*请输入存款金额:");

     while(scanf("%lf",&p)!=1||p<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入存款金额:"); 

             getchar();   

     } 

     printf("\t*请输入利率:"); 

     while(scanf("%lf",&i)!=1||i<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

        getchar();    

     }  

     printf("\t*请输入存储时间(年):"); 

     while(scanf("%d",&n)!=1||n<=0||n>100)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入存储时间(年):"); 

             getchar();    

     } ; 

     sum1=p*pow((1+i),n);//复利的计算公式 

     printf("\t**本利和为:%.2lf\n\n",sum1);//输出复利计算的结果 

 } 

void B()//多次等额支付复利计算

 { 

     int n;

     double p,i,sum2=0;

     char choose;

     printf("\n\t多次等额投入方式:\n\t1.等额多次月投\n\t2.等额多次年投\n\t*请选择:");

     while(scanf("%d",&choose)!=1||choose<1||choose>2)

     {

        printf("\t输入错误!!!\n\n\t请重新选择:"); 

        while(getchar() != '\n');        

     }

     while(getchar() != '\n');

     if(choose==1)

     {

        printf("\n\t*请输入月投金额:"); 

        while(scanf("%lf",&p)!=1||p<=0)

        {

            printf("\t输入错误!!!\n\n\t*请重新输入月投金额:"); 

            getchar();   

        } 

        printf("\t*请输入年利率:"); 

        while(scanf("%lf",&i)!=1||i<=0)

        {

            printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

            getchar();    

        }  

        printf("\t*请输入存储时间(年):"); 

        while(scanf("%d",&n)!=1||n<=0||n>100)

        {

            printf("\t输入错误!!!\n\n\t*请重新输入存储时间(年):"); 

            getchar();    

        } 

        sum2=p*12*(pow(1+i,n)-1)/i;

        printf("\t**本利和为:%.2lf\n\n",sum2);

     }

     else

     {

        printf("\n\t*请输入年投金额:"); 

        while(scanf("%lf",&p)!=1||p<=0)

        {

            printf("\t输入错误!!!\n\n\t*请重新输入年投金额:"); 

            getchar();   

        }  

        printf("\t*请输入年利率:"); 

        while(scanf("%lf",&i)!=1||i<=0)

        {

            printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

            getchar();    

        }  

        printf("\t*请输入存储时间(年):"); 

        while(scanf("%d",&n)!=1||n<=0||n>100)

        {

            printf("\t输入错误!!!\n\n\t*请重新输入存储时间(年):"); 

            getchar();  

        }

        sum2=(p*pow((1+i),n)-1)/i;

        printf("\t**本利和为:%.2lf\n\n",sum2);

     }

 } 

  

 void C()//单利计算 

 { 

     int n; 

     double p,i,sum3; 

     printf("\n\t*请输入存款金额:"); 

     while(scanf("%lf",&p)!=1||p<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入存款金额:"); 

        getchar();   

     }  

     printf("\t*请输入年利率:"); 

     while(scanf("%lf",&i)!=1||i<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

        getchar();    

     }   

     printf("\t*请输入存储时间(年):"); 

     while(scanf("%d",&n)!=1||n<=0||n>100)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入存储时间(年):"); 

        getchar();  

     } 

     sum3=p*(1+i*n); 

     printf("\t**本利和为:%.2lf\n\n",sum3); 

 } 

 void D() //投入资金

 { 

     int n; 

     double sum4,i,p;//p为投入本金 

     printf("\n\t*请输入本利和:");

     while(scanf("%lf",&sum4)!=1||sum4<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入本利和:"); 

        getchar();   

     }   

     printf("\t*请输入年利率:"); 

     while(scanf("%lf",&i)!=1||i<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

        getchar();    

     }  

     printf("\t*请输入存款时间(年):"); 

     while(scanf("%d",&n)!=1||n<=0||n>100)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入存款时间(年):"); 

        getchar();  

     }  

     p=sum4/(1+i*n); 

     printf("\t**投入的本金为:%.2lf\n\n",p); 

 }

 void E()   //投入时间

 {

     double n;

     double sum5,i,p;

     printf("\n\t*请输入存储金额:");

     while(scanf("%lf",&p)!=1||p<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入存储金额:"); 

        getchar();   

     }   

     printf("\t*请输入年利率:");

     while(scanf("%lf",&i)!=1||i<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

        getchar();    

     }   

     printf("\t*请输入本利和:");

     while(scanf("%lf",&sum5)!=1||sum5<=0)

     {

        printf("\t输入错误!!!\n\n\t*请重新输入本利和:"); 

        getchar();   

     }   

     n=(log(sum5/p))/(log(1+i));

     printf("\t**投入的时间为:%.0lf\n\n",n);

 }

void F()  //利率

{

    double sum6,i,p,n;

    printf("\n\t*请输入存储金额:");

    while(scanf("%lf",&p)!=1||p<=0)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入存储金额:"); 

        getchar();   

    }   

    printf("\t*请输入存储时间(年):");

    while(scanf("%d",&n)!=1||n<=0||n>100)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入存储时间(年):"); 

        getchar();  

    } 

    printf("\t*请输入本利和:");

    while(scanf("%lf",&sum6)!=1||sum6<=0)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入本利和:"); 

        getchar();   

    }   

    i=pow((sum6/p),(1/n))-1;

    printf("\t**利率为:%.2lf\n\n",i);

}

void G()

{

    double sum7,i,p,n;

    printf("\n\t*请输入贷款金额:");

    while(scanf("%lf",&sum7)!=1||sum7<=0)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入本利和:"); 

        getchar();   

    }   

    printf("\t*请输入贷款时间(年):");

    while(scanf("%d",&n)!=1||n<=0||n>100)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入贷款时间(年):"); 

        getchar();  

    } 

    printf("\t*请输入年利率:");

    while(scanf("%lf",&i)!=1||i<=0)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

        getchar();    

    }   

    p=sum7*i/(12*(1+i)*(pow(1+i,n)-1));

    printf("\t**每月等额本息还款为:%.2lf\n\n",p);

}

 void H()//计算哪种投资方式的利益最大
 {
    int n,op=0;
	double i,p;
	double temp;
	double record[4];
	printf("\t*请输入存储金额:");
	while(scanf("%lf",&p)!=1||p<=0)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入存储金额:"); 

        getchar();   

    }   

	printf("\t*请输入年利率:");
	  while(scanf("%lf",&i)!=1||i<=0)

    {

        printf("\t输入错误!!!\n\n\t*请重新输入利率:"); 

        getchar();    

    }   
    printf("\t*请输入t投资时间(年):");
	while(scanf("%d",&n)!=1||n<=0||n>100)

    {

       printf("\t输入错误!!!\n\n\t*请重新输入投资时间(年):"); 

       getchar();  

    }
	record[0]=p*pow((1+i),n);//复利
	I(0,record);
	record[1]=p*12*(pow(1+i,n)-1)/i;//等额月投
    I(1,record);
	record[2]=(p*pow((1+i),n)-1)/i;//等额年投
	I(2,record);
	record[3]=p*(1+i*n);//单利
	I(3,record);
	temp=record[0];
	for(int j=1;j<4;j++)
	{
		if(record[j]>temp)
		{
			temp=record[j];
			op=j;
		}
	}
	printf("\t推荐:\n");
	
	I(op,record);
 }
 void I(int op,double record[4])//判断哪种投资方式的利益最大
 {
	 switch (op)
	 {
	 case 0:printf("\t选择复利投资,本利和为%.2lf\n",record[0]);break;
	 case 1:printf("\t选择等额月投资,本利和为%.2lf\n",record[1]);break;
	 case 2:printf("\t选择等额年投资,本利和为%.2lf\n",record[2]);break;
	 case 3:printf("\t选择等单利投资,本利和为%.2lf\n",record[3]);break;
	 }
 }
