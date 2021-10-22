#include<stdio.h>
#include<conio.h> 
 
int main (){
 
    char id[5];
    double amt,pay;
    int hour;
 
    printf("\n \n");
    printf("EMP Code: ");
    scanf("%s",&id);
    printf("Rate per hour: ");
    scanf("%lf",&amt);
    printf("Number of hours worked: ");
    scanf("%d",&hour);
    pay=amt*hour;
 
    printf("\n******************* B I L L *******************\n");
    printf(" EMP Code\tRate Phr\tHrs Worked");
    printf("\n %s        \t%.2f      \t%d", id, amt, hour);
    printf("\n_________________________________________________");
    printf("\n \n");
    printf(" Salary of Employee: Php %.2lf\n",pay);
    printf("_________________________________________________");
    printf("\n \n");
 
    getch(); 
    return 0;
}
