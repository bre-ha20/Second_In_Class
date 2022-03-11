#include <stdio.h>
#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, long targetPhoneNumber){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(ptr->phone == targetPhoneNumber)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary){
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(ptr -> salary == targetSalary)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}