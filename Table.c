#include<stdio.h>
#include<conio.h>

void main()
{
  int i,a;
  clrscr();
  
  printf("Enter a number to find general table");
  scanf("%u",&a);

  for(i=1;i<=10;i++)
  {
  printf(" %d * %d = %u \n ",a,i,a*i);
  }
  getch();
}
