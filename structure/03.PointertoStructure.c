/*
Name        :Arun.V
Date        :4/1/25
Description : 
Reference   :self
Output      :

*/
/* Pointer to structure */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
    int id;

};


int main(int argc, char *argv[]) {

    struct stu obj,*ptr;
    
  
    obj.id = 25; // Assign
    printf("Main %d\n",obj.id);//access

    ptr=&obj; //Assign address
    
    ptr->id=50;
    printf("Main %d\n",ptr->id);
    return 0;
}
