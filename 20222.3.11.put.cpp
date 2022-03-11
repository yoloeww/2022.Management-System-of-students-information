# include<stdio.h>
int main(void)
{
  struct student 
  {
     int num;
	 char name[20];
	 float score;
  }student1,student2;
  scanf("%d%s%f",&student1.num,student1.name,&student1.score);
  scanf("%d%s%f",&student2.num,student2.name,&student2.score);
  printf("the higher is :");
  if(student1.score>student2.score)
  printf("%5d%5s  %5.2f",student1.num,student1.name,student1.score);
  else if (student1.score<student2.score)
  printf("%5d%5s  %5.2f",student2.num,student2.name,student2.score);
  else
  { 
	  printf("%5d%5s   %5.2f",student1.num,student1.name,student1.score);
      printf("%5d%5s   %5.2f",student2.num,student2.name,student2.score);
  }
  putchar('\n');
  return 0;
} 
