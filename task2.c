#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Users{
    char username[30], password[30];
    bool flag;
};
int main() {
    char username[20], password[20];
    struct Users us[20];
    int ur_username = 0;
    int operation_number = 0;
    while (1) {
        printf("Choose operation\n");
        printf("1: Login\n");
        printf("2: Register\n");
        printf("3: Exit\n");
        scanf("%d", &operation_number);

        if (operation_number == 1) {
            printf("Enter a Username: ");
            scanf("%s", username);
            printf("Enter a password: ");
            scanf("%s", password);
            int i = 0;
            int flag = 0;
            while(i < ur_username){
                if(strcmp(username,us[i].username)==0&&strcmp(password,us[i].password)==0){
                    flag = 1;
                    break;
                }
                i++;
            }

            if(flag == 1&&us[i].flag){
                printf("Login successful!\n");
            }
            else{
                printf("Incorrect username or Password.\n");
            }
        }
        else if (operation_number == 2) {
            int active;
            printf("Enter your username: ");
            scanf("%s", us[ur_username].username);
            printf("Enter your password: ");
            scanf("%s", us[ur_username].password);
            printf("Enter 1 or 0: ");
            scanf("%d", &active);
            us[ur_username].flag = (active==0)?false:true;
            int flag = 1,i=0;
            while(i<ur_username){
                if(strcmp(us[ur_username].username,us[i].username)==0) {
                    flag = 0;
                }
                i++;
            }
            if(flag == 1){
                ur_username++;
                printf("Registration successful.\n");
            }
            else{
                printf("This email already exists!\n");
            }
        }
        else if (operation_number == 3) {
            printf("Thanks\n");
            break;
        }
        else {
            printf("Invalid input. Plz try again.\n");
        }
    }

    return 0;
}
