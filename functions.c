#include<stdio.h>

void check_user();

int main() {

    check_user();
    return 0;
}

void check_user(){

    int result = 0;
    printf("Are you Indian(1) or French(2)? ");
    scanf("%d", &result);
    if (result == 1) {
        printf("Namaste");
    }
    else if (result == 2) {
        printf("Bonjour");
    }
    else{
        printf("Enter a valid number");
    }

}
