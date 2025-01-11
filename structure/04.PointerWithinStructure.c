/* Pointer Within Structure**/
/*
Name        :Arun.V
Date        :11/1/25
Description :
Output      :
Reference   : C in Depth

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
    int *id;
};

int main(int argc, char *argv[])
{

    struct stu obj; // Normal variable
    int a = 5;

    obj.id = &a;
    printf("Normal Variable %d\n", *obj.id);   // dereference
    printf("Normal Variable %d\n", *(obj.id)); // dereference

    struct stu *ptr; // Pointer variable
    ptr = &obj;

    ptr->id = &a;

    printf("Pointer variable %d\n", *(ptr->id));
    printf("Pointer variable %d\n", *ptr->id);

    // How we can deference like that only change the value
    *ptr->id = 25; // Value change
    printf("Pointer variable %d\n", *ptr->id);

    *(ptr->id) = 50;
    printf("Pointer variable %d\n", *(ptr->id));

    return 0;
}

/*
*obj.id equivalent *(obj.id)
Note : The Priority of Dot Operator(.) is more than of Dereference Operator(*)

Note : The Priority of arrow Operator(->) is more than of Dereference Operator(*)
*(ptr->id) equivalent  *ptr->ids

How we can deference like that only change the value
*/