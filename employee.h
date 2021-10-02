#include <stdio.h>
#include <stddef.h>

/*Creating a struct for the employee's info*/

typedef struct 
{
    long number;
    char *name;
    char *phone;
    double salary;
} Employee, *PtrToEmployee;

typedef const Employee *PtrToConstEmployee;