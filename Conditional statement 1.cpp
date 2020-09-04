#include<stdio.h>
#include<conio.h>

int main()
{ 
 
   int input;
   printf("enter any number");
   scanf("%d",&input);

   if(input%2==0)
       printf("%d is even number",input);
   
   else
       printf("%d is odd number",input);

   getch();

}
