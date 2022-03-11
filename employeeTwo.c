#include <stdio.h>
#include <string.h>
#include "employee.h"

static PtrToEmployee searchEmployeeTable(PtrToConstEmployee ptr, int tableSize, const void *targetPtr, int (*functionPtr)(const void *, PtrToConstEmployee))
{
    PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
        if ((*functionPtr)(targetPtr, ptr) == 0)
            return (PtrToEmployee) ptr;
    return NULL;
}

static int compareEmployeePhoneNumber(const void *targetPtr, PtrToConstEmployee tableValuePtr)
{
    return * (long *) targetPtr != tableValuePtr->phone);
}

static int compareEmployeeSalary(const void *targetPtr, PtrToConstEmployee tableValuePtr)
{
    return * (double*) targetPtr != tableValuePtr->salary;
}

PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int size, long phone)
{
    return searchEmployeeTable(ptr, size, &phone, compareEmployeePhoneNumber);
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int size, double salary)
{
    return searchEmployeeTable(ptr, size, &salary, compareEmployeeSalary);
}