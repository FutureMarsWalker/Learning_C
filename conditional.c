#include<stdio.h>

int main(){

    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age == 2){ printf("age is %d\n", age); }
    else if(age == 5) { printf("age is not two\n"); }
    else {printf("Nothing came true\n"); }

    return 0;
}