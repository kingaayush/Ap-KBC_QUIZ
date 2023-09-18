#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,s;
char A,B,C,D,opt1,opt2,opt3,opt4;
for(x=0;x<1;x++)
{
for(s=73;s<=90;s++)
{
printf("  ");
}
for(y=0;y<=x;y++)
{
printf("KBC QUIZ");
}
}
printf("\n\n\nQ.1)");
printf("Capital of India ?");
printf("\nA) Jaipur");
printf("\t\tB) Banglore");
printf("\nC) New Delhi");
printf("\t\tD) Amritsar");
printf("\nYour Option = ");
scanf("%c",&opt1);
if(opt1=='A')
{
printf("Wrong Answer");
}
else if(opt1=='B')
{printf("Wrong Answer");}
else if(opt1=='C')
{printf("Correct Answer");}
else if(opt1=='D')
{printf("Wrong Answer");}
else
{printf("Enter the correct value");}
 printf("\n\n\nQ.2)");
printf("Prime Minister of India ?");
printf("\nA) Nirmala Sitaraman");
printf("\t\tB) Narendra Modi");
printf("\nC) Donald Trump");
printf("\t\t\tD) Amit Shah");
printf("\nYour Option = ");
scanf("\n%c",&opt2);
if(opt2=='A')
{
printf("Wrong Answer");
}
else if(opt2=='B')
{printf("Correct Answer");}
else if(opt2=='C')
{printf("Wrong Answer");}
else if(opt2=='D')
{printf("Wrong Answer");}
else
{printf("Enter the correct value");}
printf("\n\n\nQ.3)");
printf("Currency of India ?");
printf("\nA) Dollar");
printf("\t\tB) Dinar");
printf("\nC) Euro");
printf("\t\t\tD) Rupee");
printf("\nYour Option = ");
scanf("\n%c",&opt3);
if(opt3=='A')
{
printf("Wrong Answer");
}
else if(opt3=='B')
{printf("Wrong Answer");}
else if(opt3=='C')
{printf("wrong Answer");}
else if(opt3=='D')
{printf("Correct Answer");}
else
{printf("Enter the correct value");}
printf("\n\n\nQ.4)");
printf("How many medals did India get in Olympics?");
printf("\nA) 24");
printf("\t\tB) 35");
printf("\nC) 46");
printf("\t\tD) 30");
printf("\nYour Option = ");
scanf("\n%c",&opt4);
if(opt4=='A')
{
printf("Wrong Answer");
}
else if(opt4=='B')
{printf("Correct Answer");}
else if(opt4=='C')
{printf("Wrong Answer");}
else if(opt4=='D')
{printf("Wrong Answer");}
else
{printf("Enter the correct value");}

getch();
}