#include<stdio.h>
//logout page//
void logout();
void user_menu();
int main(){

    user_menu();

    return 0;

}
void user_menu(){
    int number;
    printf("1.booking ticket\n");
    printf("2.cencle ticket\n");
    printf("3.check bus status\n");
    printf("4.logout\n");
    printf("select one option: ");
    scanf("%d",&number);
    if(number == 4){
        logout();
    }
}
void logout(){
printf("logout successfull");
}