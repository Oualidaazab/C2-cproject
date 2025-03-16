#include <stdio.h>

int main () { 
    int number;  
    printf("Enter the number: "); 
    scanf("%d", &number);  // Fixed the space after %d
    for (int i=0 ; i<3 ; i++ ) { 
    printf("Enter the number: "); 
    scanf("%d", &number); 
    if (number < 7) { 
        printf("The number %d is smaller.", number); 
    } 
    else if (number == 7) { 
        printf("The number is correct: %d", number);  
    } 
    else { 
        printf("The number %d is bigger.", number); 
    } 
   
    }

    return 0; 
}
