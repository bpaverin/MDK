#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello, %s!\n", name);
=======
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
>>>>>>> 3f5d7d46e7d9a6897b846dedafb55bea7b3190ec
    return 0;
}
