#include<stdio.h>
#include<string.h>
// login page/

int main(){

    char username[20], password[20];
    char login_name[20], login_pass[20];

    printf("\n********BUS REGISTRATION SYSTUM*****\n");
    printf("=== sign UP ===\n");
    printf("username: ");
    scanf("%s",username);
    printf("password:");
    scanf("%s",password);

    printf("\naccount created successfully!\n");

    printf("\n*****USER REGESTRATION*****\n");
    printf("username:");
    scanf("%s",login_name);
    printf("password:");
    scanf("%s",login_pass);

    if (strcmp(username,login_name)== 0 && strcmp(password,login_pass) == 0)
    {
        printf("\nLogin successful!\n");
        printf("=== DASHBOARD===\n");
        printf("Wellcome to bus Reservation System!\n");
    }else{
        printf("\nLogin failed\n");
    }

    return 0;
}