#include<stdio.h>

#include<conio.h>



void main()

{

  int i,a;

  

  printf("Enter a number to find general table");

  scanf("%d",&a);

  

  for(i=1;i<=10;i++)

  {

    printf("%d*%d=%u\n",a,i,a*i);

  }

 

  getch();

}
