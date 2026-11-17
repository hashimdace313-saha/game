#include<stdio.h>
int main()
{
do
{

printf("STUDENT MARKS MANAGEMENT SYSTEM");
printf("1.ENTER STUDENTS DETAILS");
printf("2.CALCULATE RESULT");
printf("3.DISPLAY STUDENT RESULT");
printf("4.EXIT");
printf("ENTER YOUR CHOICE:");scanf("%d",&c);

switch(c)
{
    case1:
     printf("ENTER THE ROLL NO:");scanf("%d",&r);
     printf("ENTER THE STUDENT NAME:");scanf("%s",&n);
     break;

    case2:
     printf("ENTER THE ENGLISH MARK:");scanf("%d",&e);
     printf("ENTER THE TAMIL MARK:");scanf("%d",&t);
     printf("ENTER THE MATHS MARK:");scanf("%d",&m);
     printf("ENTER THE SCIENCE MARK:");scanf("%d",&s);
     int total=e+t+m+s;
     printf("TOTAL MARKS=",total);
     break;

    case3:
     printf("=====STUDENT DETAILS=====");
     printf("STUDENT NAME:",n);
     printf("ROLL NO:",r);
     float avg = (total)/4;
     if(avg>=90)
      {
      printf("GRADE:A");
			 }
     if(90>avg<=80)
      {
      printf("GRADE:B");
			 }
     if(80>avg<=70)
      {
      printf("GRADE:C");
			}
     if(70>avg<=0)
      {
      printf("GRADE:D");
			 }
     break;
}
}while(