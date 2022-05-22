/*
//Print "Hello World" five times

#include<stdio.h>

void printHelloWorld(int counter);

int main (){

    int counter = 5;
    printHelloWorld(counter);

    return 0;
}

//recursive function
void printHelloWorld(int counter){
    if (counter == 0){
        return;
    }
    
    printf("Hello World!\n");
    printHelloWorld(counter - 1);

}
*/

//Sum of first n natural numbers
#include<stdio.h>

int sum(int n);

int main (){
    int n = 5;
    sum(n);
    printf("The sum is %d\n", n);
    return 0;
}

int sum(int n){
    int sumNminus1=
}
