#include <stdio.h>
#include <string.h>

int main(){
    
    char Name[30];
    printf ("please enter your name: \n");
    scanf ("%s", Name);
    
    int string_lenghth = strlen(Name);
    printf ("your name is %d characters long", string_lenghth);

    return 0;
}