//OPPGAVE 12
#include <stdio.h>
int main(){

int ID;
float WH, W, salary;

printf("Employee ID: ");
scanf("%d", &ID);

printf("Working hours: ");
scanf("%f", &WH);

printf("Hourly wage: ");
scanf("%f", &W);

salary = WH * W;

printf("Employees ID:	%d\n", ID);
printf("Salary:		%f\n", salary);

return 0;
}
