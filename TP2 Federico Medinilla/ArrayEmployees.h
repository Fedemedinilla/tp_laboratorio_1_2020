#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED
#endif // ARRAYEMPLOYEES_H_INCLUDED

typedef struct
{
 int id;
 char name[16];
 char lastName[16];
 float salary;
 int sector;
 int isEmpty;
}sEmployee;

int initEmployees(sEmployee*,int);
void tableHeaders();
void showEmployee(sEmployee);
int showEmployees(sEmployee*,int);
int searchEmpty(sEmployee*,int);
int searchById(sEmployee*,int,int);
int addEmployee(sEmployee*,int,int);
char choiceFunction();
int delEmployee(sEmployee*,int);
int changeEmployee(sEmployee*,int);
int changeEmployeeMenu(sEmployee*,int);

void sortFunctionValidation(sEmployee*,int);
int employeeSorting(sEmployee*,int,int);
void ascending(sEmployee*,int,int,int);
void descending(sEmployee*,int,int,int);
void avrSalary(sEmployee*,int);

