/*
Name        :Arun.V
Date        :4/1/25
Description :
Reference   :self
Output      :

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
    int id;
    char *name;
};


int main(int argc, char *argv[]) {
    struct stu var;
    var.id=101;
    var.name= "Gopi";
    printf("Main %d\n",var.id);
       return 0;
}
