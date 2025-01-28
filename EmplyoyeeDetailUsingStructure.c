/* company have 50 employees in total working in different departments such as: production, testing,
research, and marketing. Write a program to create a structure having members employee name,
department name, and basic pay. Store all the employee details and then display only those employee
information whose salary>=25000.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_EMPLYOEE 50 //50 EMPLOYEE ONLY
struct {
	char name[100];
	char department[100];
	float payment;
} emp[MAX_EMPLYOEE];
int opt;
void main()
{
	for(int i=0; i<MAX_EMPLYOEE; i++) {
		printf("enter the name of employee no. %d : ",i+1);
		scanf("%s",emp[i].name);
		printf("enter the Department number :  \n 1. production\n 2. testing\n 3. research\n 4. marketing : ");
		scanf("%d",&opt);
		switch(opt) {//TO CHOOSE ACCORDING TO THE DEPARTMENT
		case 1:
			strcpy(emp[i].department, "Production");
			break;
		case 2:
			strcpy(emp[i].department, "Testing");
			break;
		case 3:
			strcpy(emp[i].department, "Research");
			break;
		case 4:
			strcpy(emp[i].department, "Marketing");
			break;
		default :
			printf("SORRY, ENTERED THE WRONG DEPARTMENT....\n PLEASE ENTER THE DETAILS AGAIN...\n");
			i--;//Decrement i to repeat the current iteration
			continue;//SKIPS THE FURTHER CODE
		}
		printf("enter the basic pay of this employee : ");
		scanf("%f",&emp[i].payment);
	}
	for(int i=0; i<MAX_EMPLYOEE; i++) {// TO CHECK WHOSE SALARY >=25000/-
		if(emp[i].payment>=25000) {
			printf("EMPLOYEE NAME IS = %s\n",emp[i].name);
			printf("DEPARTMENT NAME IS = %s\n",emp[i].department);
			printf("SALARY IS = %.2f\n",emp[i].payment);
		}
	}


}