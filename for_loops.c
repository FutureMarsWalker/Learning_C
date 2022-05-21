#include<stdio.h>

int main (){

    int counter = 0;
    for (int i = 0; i < 100; i++){
        counter += 1;
        printf("Counter: %d\n", counter);
        if (counter == 100){
            printf("The counter is reached 100.\n");
        }
    }

    return 0;

}
