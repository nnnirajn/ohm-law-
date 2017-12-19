
/**********************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include "HIGHLIGHT.h"
void main()
{
    char ch;
    float voltage , current , resistance , result;
    system("color 30");
    gotoxy(35,2);
    col_back(15,13);
    printf(".......WELCOME.......");
    gotoxy(32,5);
    col_back(25,14);
    printf(" OHM LAW CALCULATOR using c ");
    col_back(15,19);
    gotoxy(20,20);
    printf("Enter any key....");
    _getch();
    label:
    system("cls");
    system("color 30");
    gotoxy(20,5);
    col_back(14,12);
    printf("Ohms law calculator.\n");
    col_back(15,19);
    gotoxy(20,8);
    printf("Please choose from following calculcations.\n");
    gotoxy(20,11);
    printf("1. choose 1 to calculate the voltage.\n");
    gotoxy(20,13);
    printf("2. choose 2 to calculate the current.\n");
    gotoxy(20,15);
    printf("3. choose 3 to calculate the resistance.\n");
    gotoxy(20,17);
    printf("press any other key for exit\n");

    gotoxy(40,20);
    scanf("%c",&ch);
    system("cls");
    system("color 30");

switch(ch)
{
case '1' :
printf("please enter the current in amps.\n");
scanf("%f",&current);
printf("Now enter the resistance in ohms.\n");
scanf("%f",&resistance);
result = current * resistance;
printf("The voltage is %0.2f volts.\n",result);
break;
case '2' :
printf("please enter the voltage in volts.\n");
scanf("%f",&voltage);
printf("Now enter the resistance in ohms.\n");
scanf("%f",&resistance);
result = voltage / resistance;
printf("The current is %0.2f amps.\n",result);
break;
case '3' :
printf("please enter the voltage in volts.\n");
scanf("%f",&voltage);
printf("Now enter the current in amps.\n");
scanf("%f",&current);
result = voltage / current;
printf("The resistance is %0.2f ohms.\n",result);
break;
default :
exit(0);

}
_getch();

}
