// Create a folder program using C (Base on Windows )

#include<stdio.h>
#include<direct.h>
#include<errno.h>

int main()
{
    char *p = "Create_C_Programming_Folder";

    if(mkdir(p) == 0){
        printf("Folder is Created\n");
    }
    else if (errno = EEXIST){
        printf("Folder is Alreday created");
    }
    else{
        printf("Folder is not created");
    }
    return 0;
}