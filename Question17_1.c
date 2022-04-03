#include <stdio.h>
#include <conio.h>

struct Employee
{
    int employeeId;
    char name[50];
    int dateOfJoining[3];
    float salary;
};

int main()
{
    FILE *file;
    struct Employee employees[5];

    file = fopen("./Employeesinfo.txt", "a");
    if (file == NULL)
    {
        printf("Error while accessing the file\n");
        return -1;
    }
    if (feof(file) || ferror(file))
    {
        printf("Error in handleing the file\n");
        return -1;
    }

    printf("Enter the Emplyee details of the 5 emplyee\'s: \n");
    fprintf(file, "------------------------------------------------------------------------------\n");
    for (int i = 0; i < 1; i++)
    {
        printf("For Employee %d: \n", i + 1);
        printf("Enter the EmployeeId:");
        scanf("%d", &employees[i].employeeId);
        getchar();
        printf("Enter the name: ");
        gets(employees[i].name);
        printf("Enter the Date of Joining: ");
        scanf("%d %d %d", &employees[i].dateOfJoining[0], &employees[i].dateOfJoining[1], &employees[i].dateOfJoining[2]);
        printf("Enter the salary: ");
        scanf("%f", &employees[i].salary);

        fprintf(file, "Employee - %d\n", i + 1);
        fprintf(file, "Employee Id : %d\n", employees[i].employeeId);
        fprintf(file, "Name : %s\n", employees[i].name);
        fprintf(file, "Date of Joining(DD MM YY) : %d %d %d\n", employees[i].dateOfJoining[0], employees[i].dateOfJoining[1], employees[i].dateOfJoining[2]);
        fprintf(file, "Salary : %f\n", employees[i].salary);
        fprintf(file, "------------------------------------------------------------------------------\n");
    }
    fclose(file);

    file = fopen("./Employeesinfo.txt", "r");
    if (file == NULL)
    {
        printf("Error while accessing the file\n");
        return 0;
    }
    if (feof(file) || ferror(file))
    {
        printf("Error in handleing the file\n");
        return -1;
    }
    char c = getc(file);
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(file);
    }

    fclose(file);
    return 0;
}