#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void){

    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, long phoneNumberToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    extern Employee EmployeeTable [];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, 9095552134);

        if (matchPtr != NULL)
            printf("Employee Phone Number 909-555-2134 is in record %d\n", matchPtr - EmployeeTable);
        else
            printf("Employee Phone Number is NOT found in the record\n");
    
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.78);
        if (matchPtr != NULL)
            printf("Employee Salary 8.78 is in record %d\n", matchPtr - EmployeeTable);
        else
            printf("Employee Salary is NOT found in the record\n");

    return EXIT_SUCCESS;
            
}