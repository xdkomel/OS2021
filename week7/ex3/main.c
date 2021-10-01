#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    //Allows you to generate random number
    srand(time(NULL));

    // Allows user to specify the original array size, stored in variable n1.
    printf("Enter original array size:\n");
    int n1 = 0;
    scanf("%d",&n1);

    //Create a new array of n1 ints
    int* a1 = malloc(sizeof(int) * n1);
    int i;
    for(i = 0; i < n1; i++) {
        a1[i]=100;
        printf("%d ",a1[i]);
    }

    //User specifies the new array size, stored in variable n2.
    printf("\nEnter new array size:\n");
    int n2 = 0;
    scanf("%d", &n2);

    //Dynamically change the array to size n2
    a1 = realloc(a1, sizeof(int) * n2);

    for(int i = n1; i < n2; i++) {
        a1[i] = 0;
    }

    for(i = 0; i < n2; i++){
        printf("%d ", a1[i]);
    }
    printf("\n");

    //Done with array now, done with program :D

    return 0;
}
