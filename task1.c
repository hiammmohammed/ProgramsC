#include <stdio.h>
int main ()
{
    char usernamer[50];
    char passwordr[50];
    char usernamel[50];
    char passwordl[50];

    printf("Register at first \n");

     printf("Enter your user name : ");
     scanf("%s",usernamer);
     printf("Enter your password : ");
     scanf("%s",passwordr);
     printf("succeeded in registering \n");

     printf("for Login \n");
     printf("Enter your user name :");
     scanf("%s",usernamel);
     printf("Enter your password :");
     scanf("%s",passwordl);

     if (strcmp(usernamer, usernamel) == 0 && strcmp(passwordr, passwordl) == 0) {
        printf("Successfully logged in \n");
    } else {
        printf("Make sure that you have registered or check the username and password in front of you\n");
    }



}

