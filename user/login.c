#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){

        while(1){
                /*char* username = "user";*/
                /*char* password = "password";*/
                char* u = "chloe\n";
                char user[100];
                char pass[100];
                printf("Enter user: ");
                gets(user, 100);

                char* p = "chloe2\n";
                printf("Enter pass: ");
                gets(pass, 100);
                if(strcmp(u, user) == 0 && strcmp(p, pass) == 0){
                        //printf("if\n");
                        int t = fork();
                        //printf("%d", t);
                        if (t == 0){
                                char *args[] = {"sh", 0};
                                exec("sh", args);
                        }
                        else{
                                wait(0);
                        }
                }
                else {
                        sleep(15);
                }
                return 0;
      }
}
