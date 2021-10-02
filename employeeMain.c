#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int tableSize, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int tableSize, long salaryToFind);

 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[];

    extern const int EmployeeTableEntries;

 
    //Declaration 

    PtrToEmployee matchPtr;  

    //Example not found 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    if (matchPtr != NULL) 

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID 1045 is NOT found in the record\n"); 

 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Bobcat is NOT found in the record\n"); 



    //Another example of not found

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235"); 

    if (matchPtr != NULL) 

        printf("Employee phone number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee phone number 909-555-1235 is NOT found in the record\n"); 


    //Another example of found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34); 

    if (matchPtr != NULL) 

        printf("Employee whos salary is $6.34 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee whos salary is $6.34 is NOT found in the record\n"); 



    return EXIT_SUCCESS; 
}