#include<stdio.h>

#define MAX_USERS 3
struct user{
    int id;
    char name[10];
    int balance;
};
int main(){
struct user users[MAX_USERS];
for(int i=0;i<MAX_USERS;i++){
    printf("enter the id:");
    scanf("%d",&users[i].id);
    printf("enter the name:");
    scanf("%s",&users[i].name);
    printf("enter the balance:");
    scanf("%d",&users[i].balance);
}
for(int i=0;i<MAX_USERS;i++){
printf("%d\n",users[i].id);
printf("%s\n",users[i].name);
printf("%d\n",users[i].balance);
}
int find;
printf("enter the id to check balance:");
scanf("%d",&find);
for(int i=0;i<MAX_USERS;i++){
        if(find==users[i].id){
            printf("balance of user %d:%d",find,users[i].balance);
        }
        }
}
