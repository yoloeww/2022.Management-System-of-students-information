#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
typedef struct person //����ṹ�� 
{ 
 char num[10]; //ѧ�� 
 char name[20]; //���� 
 float cyuyan; //C���Գɼ� 
 float en; //������ɼ� 
 float ji; //Ӣ��ɼ� 
 float guti; //��ѧ�ɼ� 
 float cailiao; //���������ɼ� 
}person; 
person per[200]; //����100 
char filename[20]; //����ȫ�ֱ��� 
 void logon() //��½���� ʹϵͳ�������� 
{ 
 printf("\n\n\n\t\t\t ѧ����Ϣ����ϵͳ\n\n"); 
 printf("\t\t\t �汾�ţ�2.0\n\n"); 
 printf("\n\n\n\n\t\t\t 2021��1��20��\n\n"); 
 printf("\t\t\t xian\n"); 
 printf("\n\n\t\t\t yolo\n"); 
 printf("\n\n\t\t\t programmer\n"); 
 //system("pause"); 
} 
/*void menu_filename() 
 { 
 system("cls"); 
 printf("��������Ҫ�������ļ���:"); 
 scanf("\t%s",filename); 
 } */
 //*********************************************************************// 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
int menu_select() //�˵�ѡ��ϵͳ���� 
{ 
 char c; 
 do{ 
 //system("cls"); 
 printf("\t\t �q�T�T�T�T�T�T�T�T�T���������T�T�T�r\n"); 
 printf("\t\t�� ѧ����Ϣ����ϵͳ ��\n"); 
 printf("\t\t�t�T�T�T���������T�T�T�T�T�T�T�T�T�T�s\n"); 
 printf("\t\t ����������������������������-��\n"); 
 printf("\t\t �� 1. ��Ӽ�¼ 2. ��ʾ��¼ ��\n"); 
 printf("\t\t �� ��\n"); 
 printf("\t\t �� 3. ��Ϣ��ѯ 4. ���ݼ��� ��\n"); 
 printf("\t\t �� ��\n"); 
 printf("\t\t �� 5. �޸ļ�¼ 6. ɾ����¼ ��\n"); 
 printf("\t\t �� ��\n"); 
 printf("\t\t �� 0. �˳����� ��\n"); 
 printf("\t\t ����������������������������-��\n"); 
 printf("\t\t����ѡ��(0-6):"); 
 c=getchar(); 
 }while(c<'0'||c>'6'); 
 return (c-'0'); //�ַ���ȥ'0'�õ�������������// 
} 
  
 //*********************************************************************// 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
  
void add()  //�ɼ���¼������Ӻ��� 
 { 
 FILE *fp; 
 int i=0,n=0; 
 char sign='y'; //���ȶ���sing='y' 
 system("cls"); 
 person p[200] ; //�������� ϵͳ�е��� 
 while(sign!='n'&&sign!='N') //��ʵֻ�е�����N��nʱ������ѭ�� 
 { 
 printf(" ----ѧ����¼���----\n"); 
 printf("������\n"); 
 scanf("\t%s",p[i].name); 
 printf("ѧ��:\n"); 
 scanf("\t%s",p[i].num); 
 printf("C���ԣ�\n"); 
 scanf("\t%f",&p[i].cyuyan); 
 printf("�������\n"); 
 scanf("\t%f",&p[i].en); 
 printf("Ӣ�\n"); 
 scanf("\t%f",&p[i].ji); 
 printf("��ѧ��\n"); 
 scanf("\t%f",&p[i].guti); 
 printf("��������磺\n"); 
 scanf("\t%f",&p[i].cailiao); 
 printf("�Ƿ�������?(y/n)"); 
 scanf("\t%c",&sign); 
 i++; 
 n=n+1; 
 system( "cls "); 
 }system("pause"); //�ȴ����� 
  
 if((fp=fopen("studata.txt","a"))==NULL)//��2������ʽ�����ļ�β׷��// 
 { 
 printf("cannot open the files\n"); 
 system("pause"); 
 return; //����ļ����ִ��� �ͷ��� 
 } 
 for(i=0;i<n;i++) 
 { 
 fprintf(fp,"%s %s %f %f %f %f %f\n",p[i].name,p[i].num,p[i].cyuyan,p[i].en,p[i].ji,p[i].guti,p[i].cailiao); //��2������ʽд���ļ���//һ��д��һ������// 
  
 } 
 //printf("file write error\n"); 
 fclose(fp); //�ر��ļ� 
 system("pasue"); 
 } 
 //*********************************************************************// 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
 void scan() //��ʾ��¼ ����ȫ����Ϣ��� 
 { 
 void amend(); 
 //�����޸ĺ���// 
 char sign='y'; 
 FILE *fp; 
 int n; 
 system("cls"); 
 if((fp=fopen("studata.txt","r"))==NULL) //��2���Ʒ�ʽ��ȡ�ļ���Ϣ// 
 { 
 printf("cannot open the files\n"); 
 system("pause"); 
 return; 
 } 
  
 int i=0; 
 while(fscanf(fp,"%s%s%f%f%f%f%f",per[i].name,per[i].num,&per[i].cyuyan,&per[i].en,&per[i].ji,&per[i].guti,&per[i].cailiao)!=EOF) 
 { 
  
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf(" ���� ѧ�� C���� ����ѧ ԭ������ �������� ����ѧ\n"); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf("%s %s %f %f %f %f %f\n",per[i].name,per[i].num,per[i].cyuyan,per[i].en,per[i].ji,per[i].guti,per[i].cailiao); 
 printf("\n"); 
 i++; 
 } 
 system("pause"); 
 system("cls"); 
 printf("�Ƿ���Ҫ�޸�?(y/n)"); 
 scanf("\t%c",&sign); 
 if(sign!='n'&&sign!='N') //ѡ���Ƿ������������޸�// 
 amend(); 
 system("pause"); 
  
 } 
  
 //*********************************************************************// 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
  //���ݲ�ѯ// 
 void query()//ѧ����Ϣ�Ĳ�ͬ��ʽ��ѯ 
 { 
 system("cls"); 
 person p[200]; 
 FILE *fp1; 
 int i=0; 
 int n=0; 
 int m; 
 printf("\t\n��ѡ���ѯ��ʽ:\n"); 
 printf("\t����������������\n"); 
 printf("\t��1--ģ����ѯ ��\n"); 
 printf("\t��2------���� ��\n"); 
 printf("\t��3------ѧ�� ��\n"); 
 printf("\t��4------���� ��\n"); 
 printf("\t����������������\n"); 
 printf("��������Ҫ��ѯ�ķ�ʽ\n"); 
 scanf("%d",&m); 
 while(m!=1&&m!=2&&m!=3&&m!=4) 
 { 
 printf("������������²�ѯ\n"); 
 scanf("%d",&m); 
 } 
 if((fp1=fopen("studata.txt","r"))==NULL)//��2���Ʒ�ʽ��ȡ�ļ���Ϣ// 
 { 
 printf("cannot open the files\n"); 
 } 
  
 while(fscanf(fp1,"%s%s%f%f%f%f%f",p[i].name,p[i].num,&p[i].cyuyan,&p[i].en,&p[i].ji,&p[i].guti,&p[i].cailiao)!=EOF) 
 { 
 i++; 
 n=n+1; 
 } 
  
  
  
 if(m==1) //ģ����ѯ 
 { 
 char s[3]; //���������������ռ���ֽ� /һ������ռ2���ֽ� ���һ��β���˴�С����� 
 int i=0; 
 system("cls"); 
 printf("\t���������ѯ����:"); 
 scanf("%s",s); 
 for(i=0;i<n-1;i++) //�ļ���Ϣ�Ѿ���ȡ�������� �˴�����ѭ��������һ���Ĳ��� 
 { 
  
 if(p[i].name[0]==s[0]&&p[i].name[1]==s[1]) //�Ƚ�per[i].name���������ǰ�����ַ��Ƿ���ͬ// 
 { 
 printf("\tѧ��: %s\n",p[i].num); 
 printf("\t����: %s\n",p[i].name); 
 printf("\tC����: %f\n",p[i].cyuyan); 
 printf("\t�����: %f\n",p[i].en); 
 printf("\��ѧ: %f\n",p[i].ji); 
 printf("\tӢ��: %f\n",p[i].guti); 
 printf("\t���������: %f\n",p[i].cailiao); 
 } 
 } 
 } 
  
 if(m==2) //������ѯ 
 { 
 char s[20]; 
 int j=0; 
 printf("\t���������ѯ������:"); 
 scanf("\t%s",s); 
 while(strcmp(p[j].name,s)!=0&&j<n) j++; //�Ƚ�per[i].name�������������Ƿ���ͬ// 
 if(j==n) 
 { 
 printf("��"); 
 } 
 printf("\tѧ��: %s\n",p[j].num); 
 printf("\t����: %s\n",p[j].name); 
 printf("\tC����: %f\n",p[j].cyuyan); 
 printf("\t�����: %f\n",p[j].en); 
 printf("\Ӣ��: %f\n",p[j].ji); 
 printf("\t��ѧ: %f\n",p[j].guti); 
 printf("\t���������: %f\n",p[j].cailiao); 
  
 } 
 if(m==3) //ѧ�Ų�ѯ 
 { 
 char s[15]; 
 int i=0; 
 printf("���������ѯ��ѧ�ţ�"); 
 scanf("\t%s",s); 
  
 while(strcmp(p[i].num,s)!=0&&i<n) //�Ƚ�per[i].name��������ѧ���Ƿ���ͬ// 
 i++; 
 if(i==n) 
 { 
 printf("\tͨѶ¼��û�д���!\n"); 
 system("pause"); 
 return; 
 } 
 printf("\tѧ��: %s\n",p[i].num); 
 printf("\t����: %s\n",p[i].name); 
 printf("\tC����: %f\n",p[i].cyuyan); 
 printf("\t�����: %f\n",p[i].en); 
 printf("\tӢ��: %f\n",p[i].ji); 
 printf("\t��ѧ: %f\n",p[i].guti); 
 printf("\t���������: %d\f",p[i].cailiao); 
 } 
 fclose(fp1); 
 system("pause"); 
 } 
  
   
   
 void date() 
 { 
 person per[200]; 
 FILE *fp; 
 struct person temp; //������ʱ�������ڽ���ʱ���������Ϣ���ں���Ľ���// 
 float sum; //�ܷ� 
 float s[200]; 
 int i=0,n=0; 
 int j,k,t; 
 int m; 
 system("cls"); 
 printf("\t\nѡ������ʽ:\n"); 
 printf("\t����������������\n"); 
 printf("\t��1----����� ��\n"); 
 printf("\t��2--��ѧ ��\n"); 
 printf("\t��3---C���� ��\n"); 
 printf("\t��4--Ӣ�� ��\n"); 
 printf("\t��5----��������� ��\n"); 
 printf("\t��6---- �ܷ� ��\n"); 
 printf("\t��7------���� ��\n"); 
 printf("\t����������������\n"); 
 printf("��������Ҫ����ķ�ʽ\n"); 
 scanf("%d",&m); 
 system("cls"); 
 while(m!=1&&m!=2&&m!=3&&m!=4&&m!=5&&m!=6&&m!=7) 
 { 
 printf("�����������������\n"); 
 scanf("%d",&m); 
 } 
 if((fp=fopen("studata.txt","r"))==NULL)//��2���Ʒ�ʽ��ȡ�ļ���Ϣ// 
 { 
 printf("cannot open the files\n"); 
 system("pause"); 
 return; 
 } 
  
 while(fscanf(fp,"%s%s%f%f%f%f%f",per[i].name,per[i].num,&per[i].cyuyan,&per[i].en,&per[i].ji,&per[i].guti,&per[i].cailiao)!=EOF) 
 { 
 i++; 
 n=n+1; 
 } 
 if(m==1) 
 { 
 for(int i=0;i<n-1;i++) //����ð�ݷ���������// 
 { 
 k=i; 
 for(j=i+1;j<n;j++) 
 if(per[j].en>per[k].en) //����//�Ƚϴ�С// 
 k=j; 
 temp=per[k];per[k]=per[i];per[i]=temp; //����������ʱ�������ݽ���// 
 } 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 for(int i=0;i<n-1;i++) 
 { 
 printf("%s %s %f %f %f %f %f\n",per[i].name,per[i].num,per[i].cyuyan,per[i].en,per[i].ji,per[i].guti,per[i].cailiao); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 } 
  
 fclose(fp); 
 } 
  
 if(m==2) 
 { 
 for(int i=0;i<n-1;i++) 
 { 
 k=i; 
 for(j=i+1;j<n;j++) 
 if(per[j].ji>per[k].ji) 
 k=j; 
 temp=per[k];per[k]=per[i];per[i]=temp; 
 } 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf(" ���� ѧ�� C���� ����� Ӣ�� ���� ���������\n"); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 for(int i=0;i<n-1;i++) 
 { 
 printf("%s %s %f %f %f %f %f\n",per[i].name,per[i].num,per[i].cyuyan,per[i].en,per[i].ji,per[i].guti,per[i].cailiao); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 } 
  
 fclose(fp); 
 } 
 if(m==3) 
 { 
 for(int i=0;i<n-1;i++) 
 { 
 k=i; 
 for(j=i+1;j<n;j++) 
 if(per[j].cyuyan>per[k].cyuyan) 
 k=j; 
 temp=per[k];per[k]=per[i];per[i]=temp; 
 } 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf(" ���� ѧ�� C���� ����� Ӣ�� ���� ���������\n"); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 for(int i=0;i<n-1;i++) 
 { 
 printf("%s %s %f %f %f %f %f\n",per[i].name,per[i].num,per[i].cyuyan,per[i].en,per[i].ji,per[i].guti,per[i].cailiao); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 } 
  
 fclose(fp); 
 } 
 if(m==4) 
 { 
 for(int i=0;i<n-1;i++) 
 { 
 k=i; 
 for(j=i+1;j<n;j++) 
 if(per[j].guti>per[k].guti) 
 k=j; 
 temp=per[k];per[k]=per[i];per[i]=temp; 
 } 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf(" ���� ѧ�� C���� ����� Ӣ�� ���� ���������\n"); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 for(int i=0;i<n-1;i++) 
 { 
 printf("%s %s %f %f %f %f %f\n",per[i].name,per[i].num,per[i].cyuyan,per[i].en,per[i].ji,per[i].guti,per[i].cailiao); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 } 
  
 fclose(fp); 
 } 
 if(m==5) 
 { 
 for(int i=0;i<n-1;i++) 
 { 
 k=i; 
 for(j=i+1;j<n;j++) 
 if(per[j].cailiao>per[k].cailiao) 
 k=j; 
 temp=per[k];per[k]=per[i];per[i]=temp; 
 } 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf(" ���� ѧ�� C���� ����� Ӣ�� ���� ���������\n"); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 for(int i=0;i<n-1;i++) 
 { 
 printf("%s %s %f %f %f %f %f\n",per[i].name,per[i].num,per[i].cyuyan,per[i].en,per[i].ji,per[i].guti,per[i].cailiao); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 } 
  
 fclose(fp); 
 } 
 if(m==6) 
 { 
 for(int i=0;i<n-1;i++) 
 { 
 sum=0; 
 sum=per[i].cyuyan+per[i].en+per[i].ji+per[i].guti+per[i].cailiao; 
 s[i]=sum; 
 } // ��һ�����������������Ϣ����// 
 for(int i=0;i<n-1;i++) 
 { 
 k=i; 
 for(j=i+1;j<n;j++) 
 { 
 if(s[j]>s[k]) 
 k=j; 
 } 
 temp=per[k];per[k]=per[i];per[i]=temp; 
 } 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 printf(" ���� ѧ�� C���� ����� Ӣ�� ���� ���������\n"); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 for(int i=0;i<n-1;i++) 
 { 
 printf("%s %s %f %f %f %f %f\n",per[i].name,per[i].num,per[i].cyuyan,per[i].en,per[i].ji,per[i].guti,per[i].cailiao); 
 printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"); 
 } 
  
 fclose(fp); 
 } 
 system("pause"); 
 } 
  
 //*********************************************************************// 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
 // �����޸�// 
void amend() 
 { 
 person p[200]; 
 FILE *fp2; 
 int i=0; 
 int n=0; 
 char s[15]; 
 int m; 
 // system("cls"); 
 printf("\t\n��ѡ���޸ķ�ʽ:\n"); 
 printf("\t����������������\n"); 
 printf("\t��1------���� ��\n"); 
 printf("\t��2------ѧ�� ��\n"); 
 printf("\t��3------���� ��\n"); 
 printf("\t����������������\n"); 
 printf("��������Ҫ�޸ĵķ�ʽ\n"); 
 scanf("%d",&m); 
 while(m!=1&&m!=2&&m!=3) 
 { 
 printf("��������������޸�\n"); 
 scanf("%d",&m); 
 } 
 if((fp2=fopen("studata.txt","r"))==NULL)//��2���Ʒ�ʽ��ȡ�ļ���Ϣ// 
 { 
 printf("cannot open the files\n"); 
 system("pause"); 
 return; 
 } 
  
  
 while(fscanf(fp2,"%s%s%f%f%f%f%f",p[i].name,p[i].num,&p[i].cyuyan,&p[i].en,&p[i].ji,&p[i].guti,&p[i].cailiao)!=EOF) 
 { 
 i++; 
 n=n+1; 
 } 
 fclose(fp2) ; 
  
  
 // system("cls"); 
 if(m==1) 
 { 
 person newp; 
 char s[20]; 
 int i=0; 
 printf("\t���������޸ĵ�����:"); 
 scanf("\t%s",s); 
 while(strcmp(p[i].name,s)!=0&&i<n) i++; //���бȽ� �ҵ�����Ҫ����Ϣ 
 if(i==n) 
 { 
 printf("\tͨѶ¼��û�д���!\n"); 
 return; 
 } 
 else{ 
 printf("ѧ�ţ�\n"); 
 scanf("\t%s",&newp.num); 
 printf("����:\n"); 
 scanf("\t%s",&newp.name); 
 printf("C���ԣ�\n"); 
 scanf("\t%f",&newp.cyuyan); 
 printf("�������\n"); 
 scanf("\t%f",&newp.en); 
 printf("Ӣ�\n"); 
 scanf("\t%f",&newp.ji); 
 printf("��ѧ��\n"); 
 scanf("\t%f",&newp.guti); 
 printf("��������磺\n"); 
 scanf("\t%f",&newp.cailiao); 
 } 
  
 FILE *fin,*ftp; 
 fin=fopen("studata.txt","r");//����ԭ�ļ�studata.txt 
 ftp=fopen("tmp.txt","w");//д����ʱ�ļ�tmp.txt 
 if(fin==NULL || ftp==NULL){ 
 printf("Open the file failure...\n"); 
 exit(0); 
 } 
 int kk=0; 
 while(kk<n) //��ԭ�ļ���ȡһ�� 
 { 
 if(strcmp(p[kk].name,s)!=0)//������Ҫɾ��������? 
 { 
 fprintf(ftp,"%s %s %f %f %f %f %f\n",p[kk].name,p[kk].num,p[kk].cyuyan,p[kk].en,p[kk].ji,p[kk].guti,p[kk].cailiao);//��������һ��д����ʱ�ļ�tmp.txt 
 } 
  
 kk++; 
 } 
  
 fprintf(ftp,"%s %s %f %f %f %f %f\n",newp.name,newp.num,newp.cyuyan,newp.en,newp.ji,newp.guti,newp.cailiao);//��������һ��д����ʱ�ļ�tmp.txt 
  
 fclose(fin); 
 fclose(ftp); 
 fclose(fp2); 
 remove("studata.txt");//ɾ��ԭ�ļ� 
 rename("tmp.txt","studata.txt");//����ʱ�ļ�����Ϊԭ�ļ��� 
 } 
 if(m==2) 
 { 
 person newp1; 
 char s[20]; 
 int i=0; 
 printf("\t���������޸ĵ�ѧ��:"); 
 scanf("\t%s",s); 
 while(strcmp(p[i].num,s)!=0&&i<n) i++;//���бȽ� �ҵ�����Ҫ����Ϣ 
 if(i==n) 
 { 
 printf("\tͨѶ¼��û�д���!\n"); 
 return; 
 } 
 else{ 
 printf("ѧ�ţ�\n"); 
 scanf("\t%s",&newp1.num); 
 printf("����:\n"); 
 scanf("\t%s",&newp1.name); 
 printf("C���ԣ�\n"); 
 scanf("\t%f",&newp1.cyuyan); 
 printf("�������\n"); 
 scanf("\t%f",&newp1.en); 
 printf("Ӣ�\n"); 
 scanf("\t%f",&newp1.ji); 
 printf("��ѧ��\n"); 
 scanf("\t%f",&newp1.guti); 
 printf("��������磺\n"); 
 scanf("\t%f",&newp1.cailiao); 
 } 
  
 FILE *fin,*ftp; 
 fin=fopen("studata.txt","r");//����ԭ�ļ�studata.txt 
 ftp=fopen("tmp.txt","w");//д����ʱ�ļ�tmp.txt 
 if(fin==NULL || ftp==NULL){ 
 printf("Open the file failure...\n"); 
 exit(0); 
 } 
 int kk=0; 
 while(kk<n) //��ԭ�ļ���ȡһ�� 
 { 
 if(strcmp(p[kk].num,s)!=0)//������Ҫɾ��������? 
 { 
 fprintf(ftp,"%s %s %f %f %f %f %f\n",p[kk].name,p[kk].num,p[kk].cyuyan,p[kk].en,p[kk].ji,p[kk].guti,p[kk].cailiao);//��������һ��д����ʱ�ļ�tmp.txt 
 } 
  
 kk++; 
 } 
  
 fprintf(ftp,"%s %s %f %f %f %f %f\n",newp1.name,newp1.num,newp1.cyuyan,newp1.en,newp1.ji,newp1.guti,newp1.cailiao);//��������һ��д����ʱ�ļ�tmp.txt 
  
 fclose(fin); 
 fclose(ftp); 
 fclose(fp2); 
 remove("studata.txt");//ɾ��ԭ�ļ� 
 rename("tmp.txt","studata.txt");//����ʱ�ļ�����Ϊԭ�ļ��� 
  
  
 } 
  
 system("pause"); 
  
 } 
 //*********************************************************************// 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
 //����ɾ��// 
void delet() 
 { 
  
 person p[200]; 
 FILE *fp; 
 char s[10]; 
 int i=0,n=0; 
 if((fp=fopen("studata.txt","r"))==NULL) //��2���Ʒ�ʽ��ȡ�ļ���Ϣ// 
 { 
 printf("cannot open the files\n"); 
 system("pause"); 
 return; 
 } 
  
 while(fscanf(fp,"%s%s%f%f%f%f%f",p[i].name,p[i].num,&p[i].cyuyan,&p[i].en,&p[i].ji,&p[i].guti,&p[i].cailiao)!=EOF) 
 { 
 i++; 
 n=n+1; 
 } 
  
 fclose(fp); 
  
 printf("ѧ��ѧ�ţ�"); 
 scanf("%s",s); 
 i=0; 
 while(strcmp(p[i].num,s)!=0&&i<n) 
 { 
 i++; 
 } //���бȽ� �ҵ�����Ҫ����Ϣ 
 if(i==n) 
 { 
 printf("\tͨѶ¼��û�д���!\n"); 
 return; 
 } 
 else{ 
 FILE *fin,*ftp; 
 fin=fopen("studata.txt","r");//����ԭ�ļ�123.txt 
 ftp=fopen("tmp.txt","w");//д����ʱ�ļ�tmp.txt 
 if(fin==NULL || ftp==NULL){ 
 printf("Open the file failure...\n"); 
 exit(0); 
 } 
 int kk=0; 
 while(kk<n) //��ԭ�ļ���ȡһ�� 
 { 
 if(strcmp(p[kk].num,s)!=0)//������Ҫɾ��������? 
 { 
 fprintf(ftp,"%s %s %f %f %f %f %f\n",p[kk].name,p[kk].num,p[kk].cyuyan,p[kk].en,p[kk].ji,p[kk].guti,p[kk].cailiao);//��������һ��д����ʱ�ļ�tmp.txt 
 } 
  
 kk++; 
 } 
  
  
 fclose(fin); 
 fclose(ftp); 
 remove("studata.txt");//ɾ��ԭ�ļ� 
 rename("tmp.txt","studata.txt");//����ʱ�ļ�����Ϊԭ�ļ��� 
 printf("ɾ���ɹ���") ; 
} 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^// 
 //����switch�����в˵�ѡ��// 
} 
  
 int main() 
 { 
  
 
 int n=0; 
 logon(); 
 //menu_filename(); //����ȫ�ֱ����ļ��� 
 for(;;) //ѭ��ʹ��������ֱ�������������� 
 { 
 switch(menu_select()) // �����ĵ���// 
 { 
 case 1: 
 printf("\t\t *^_^*ѧ����¼��� *^_^*\n"); 
 add(); 
 break; 
 case 2: 
 printf("\t\t *^_^*ѧ����Ϣ��� *^_^*\n"); 
 scan(); 
 break; 
 case 3: 
 printf("\t\t *^_^*ѧ����Ϣ��ѯ *^_^*\n"); 
 query(); 
 break; 
 case 4: 
 printf("\t\t *^_^*���ݼ��� *^_^*\n"); 
 date(); 
 break; 
 case 5: 
 printf("\t\t *^_^*�����޸� *^_^*\n"); 
 amend(); 
 break; 
 case 6: 
 printf("\t\t *^_^*����ɾ�� *^_^*\n"); 
 delet(); 
 break; 
 case 0: 
 printf("\n\t\tллʹ�ã��ټ�!\n"); 
 printf("\n\t\t"); 
 system("pause"); 
 exit(0); 
 } 
 } 
 system("pause"); 
  
  
 //system("pause"); */ 
 return 0; 
 }