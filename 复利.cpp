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
        printf("\t��ѡ��:"); 
        while(scanf("%d",&sel)!=1||sel<0||sel>7)//��ֹ��������ַ��Լ���������ֲ�������0-7 
        { 
             printf("\t�������!!!\n\n\t������ѡ��:"); 
			 while(getchar() != '\n');        //  ����س���
        } 

        if(sel==0)
        {
            printf("\t��ӭ�´���ʹ�ã�лл!\n"); 
            break;
        }
         switch(sel){//ѡ��1~7�Ĺ��� 
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
  
 void List()//Ŀ¼�� 
 { 
     printf("\t|--------------------------------------|\n"); 
     printf("\t|               ����                   |\n"); 
     printf("\t|--------------------------------------|\n"); 
     printf("\t|                                      |\n"); 
     printf("\t|           1.����(һ��֧��)           |\n");
     printf("\t|           2.����(��εȶ�֧��)       |\n");
     printf("\t|           3.����                     |\n"); 
     printf("\t|           4.Ͷ���ʽ�                 |\n"); 
     printf("\t|           5.Ͷ��ʱ��                 |\n"); 
     printf("\t|           6.����                     |\n");
     printf("\t|           7.ÿ�µȶϢ����         |\n");
     printf("\t|           0.�˳�                     |\n"); 
     printf("\t|                                      |\n"); 
     printf("\t|--------------------------------------|\n"); 
 } 
 void A()//һ��Ͷ�븴������ 
 { 
     int n;//ʱ��n 
     double p,i,sum1;//�ܽ��p,����i,������sum1 
     printf("\n\t*����������:");
	 while(scanf("%lf",&p)!=1||p<=0)
	 {
		printf("\t�������!!!\n\n\t*��������������:"); 
             getchar();   
	 } 
     printf("\t*����������:"); 
     while(scanf("%lf",&i)!=1||i<=0)
	 {
		printf("\t�������!!!\n\n\t*��������������:"); 
        getchar();    
	 }  
     printf("\t*������洢ʱ��(��):"); 
     while(scanf("%d",&n)!=1||n<=0||n>100)
	 {
		printf("\t�������!!!\n\n\t*����������洢ʱ��(��):"); 
             getchar();    
	 } ; 
     sum1=p*pow((1+i),n);//�����ļ��㹫ʽ 
     printf("\t**������Ϊ:%.2lf\n\n",sum1);//�����������Ľ�� 
 } 
void B()//��εȶ�֧����������
 { 
     int n;
     double p,i,sum2=0;
	 char choose;
	 printf("\n\t��εȶ�Ͷ�뷽ʽ:\n\t1.�ȶ�����Ͷ\n\t2.�ȶ�����Ͷ\n\t*��ѡ��:");
	 while(scanf("%d",&choose)!=1||choose<1||choose>2)
	 {
		printf("\t�������!!!\n\n\t������ѡ��:"); 
    	while(getchar() != '\n');        
	 }
	 while(getchar() != '\n');
	 if(choose==1)
	 {
		printf("\n\t*��������Ͷ���:"); 
		while(scanf("%lf",&p)!=1||p<=0)
		{
			printf("\t�������!!!\n\n\t*������������Ͷ���:"); 
            getchar();   
		} 
		printf("\t*������������:"); 
		while(scanf("%lf",&i)!=1||i<=0)
		{
			printf("\t�������!!!\n\n\t*��������������:"); 
            getchar();    
		}  
		printf("\t*������洢ʱ��(��):"); 
		while(scanf("%d",&n)!=1||n<=0||n>100)
		{
			printf("\t�������!!!\n\n\t*����������洢ʱ��(��):"); 
            getchar();    
		} 
		sum2=p*12*(pow(1+i,n)-1)/i;
		printf("\t**������Ϊ:%.2lf\n\n",sum2);
	 }
	 else
	 {
		printf("\n\t*��������Ͷ���:"); 
		while(scanf("%lf",&p)!=1||p<=0)
		{
			printf("\t�������!!!\n\n\t*������������Ͷ���:"); 
            getchar();   
		}  
		printf("\t*������������:"); 
		while(scanf("%lf",&i)!=1||i<=0)
		{
			printf("\t�������!!!\n\n\t*��������������:"); 
            getchar();    
		}  
		printf("\t*������洢ʱ��(��):"); 
     	while(scanf("%d",&n)!=1||n<=0||n>100)
		{
			printf("\t�������!!!\n\n\t*����������洢ʱ��(��):"); 
            getchar();  
		}
		sum2=(p*pow((1+i),n)-1)/i;
		printf("\t**������Ϊ:%.2lf\n\n",sum2);
	 }
 } 
 
 void C()//�������� 
 { 
     int n; 
     double p,i,sum3; 
     printf("\n\t*����������:"); 
     while(scanf("%lf",&p)!=1||p<=0)
	 {
		printf("\t�������!!!\n\n\t*��������������:"); 
        getchar();   
	 }  
     printf("\t*������������:"); 
     while(scanf("%lf",&i)!=1||i<=0)
	 {
		printf("\t�������!!!\n\n\t*��������������:"); 
        getchar();    
	 }   
     printf("\t*������洢ʱ��(��):"); 
     while(scanf("%d",&n)!=1||n<=0||n>100)
	 {
		printf("\t�������!!!\n\n\t*����������洢ʱ��(��):"); 
        getchar();  
	 } 
     sum3=p*(1+i*n); 
     printf("\t**������Ϊ:%.2lf\n\n",sum3); 
 } 
 void D() //Ͷ���ʽ�
 { 
     int n; 
     double sum4,i,p;//pΪͶ�뱾�� 
     printf("\n\t*�����뱾����:");
	 while(scanf("%lf",&sum4)!=1||sum4<=0)
	 {
		printf("\t�������!!!\n\n\t*���������뱾����:"); 
        getchar();   
	 }   
     printf("\t*������������:"); 
     while(scanf("%lf",&i)!=1||i<=0)
	 {
		printf("\t�������!!!\n\n\t*��������������:"); 
        getchar();    
	 }  
     printf("\t*��������ʱ��(��):"); 
     while(scanf("%d",&n)!=1||n<=0||n>100)
	 {
		printf("\t�������!!!\n\n\t*������������ʱ��(��):"); 
        getchar();  
	 }  
     p=sum4/(1+i*n); 
     printf("\t**Ͷ��ı���Ϊ:%.2lf\n\n",p); 
 }
 void E()   //Ͷ��ʱ��
 {
     double n;
     double sum5,i,p;
     printf("\n\t*������洢���:");
     while(scanf("%lf",&p)!=1||p<=0)
	 {
		printf("\t�������!!!\n\n\t*����������洢���:"); 
        getchar();   
	 }   
     printf("\t*������������:");
     while(scanf("%lf",&i)!=1||i<=0)
	 {
		printf("\t�������!!!\n\n\t*��������������:"); 
        getchar();    
	 }   
     printf("\t*�����뱾����:");
     while(scanf("%lf",&sum5)!=1||sum5<=0)
	 {
		printf("\t�������!!!\n\n\t*���������뱾����:"); 
        getchar();   
	 }   
     n=(log(sum5/p))/(log(1+i));
     printf("\t**Ͷ���ʱ��Ϊ:%.0lf\n\n",n);
 }
void F()  //����
{
    double sum6,i,p,n;
    printf("\n\t*������洢���:");
    while(scanf("%lf",&p)!=1||p<=0)
	{
		printf("\t�������!!!\n\n\t*����������洢���:"); 
        getchar();   
	}   
    printf("\t*������洢ʱ��(��):");
    while(scanf("%d",&n)!=1||n<=0||n>100)
	{
		printf("\t�������!!!\n\n\t*����������洢ʱ��(��):"); 
        getchar();  
	} 
    printf("\t*�����뱾����:");
    while(scanf("%lf",&sum6)!=1||sum6<=0)
	{
		printf("\t�������!!!\n\n\t*���������뱾����:"); 
        getchar();   
	}   
    i=pow((sum6/p),(1/n))-1;
    printf("\t**����Ϊ:%.2lf\n\n",i);
}
void G()
{
	double sum7,i,p,n;
	printf("\n\t*�����������:");
    while(scanf("%lf",&sum7)!=1||sum7<=0)
	{
		printf("\t�������!!!\n\n\t*���������뱾����:"); 
        getchar();   
	}   
    printf("\t*���������ʱ��(��):");
    while(scanf("%d",&n)!=1||n<=0||n>100)
	{
		printf("\t�������!!!\n\n\t*�������������ʱ��(��):"); 
        getchar();  
	} 
    printf("\t*������������:");
    while(scanf("%lf",&i)!=1||i<=0)
	{
		printf("\t�������!!!\n\n\t*��������������:"); 
        getchar();    
	}   
	p=sum7*i/(12*(1+i)*(pow(1+i,n)-1));
	printf("\t**ÿ�µȶϢ����Ϊ:%.2lf\n\n",p);

}