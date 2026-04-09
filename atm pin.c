#include <stdio.h>
int main()
{
    int a, i, pin;
    pin = 6767;
    
    for (i = 1; i <= 3; i++) {
        printf("Enter your pin: ");
        scanf("%d", &a);
        
        if (a != pin) {
            printf("\nInvalid pin");
            
         if (i < 3) {
             printf("\nPlease try again\n");
                continue; 
            }
        }
        else {
            printf("Valid pin");
            printf("\nYour Code Executed Successfully !!!");
            break;
        }
    }
    
    if (i > 3) {
        printf("\nYour card is suspended for 24 hours");
  }
    
    return 0;
}