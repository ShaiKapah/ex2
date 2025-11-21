/******************
Name:
ID:
Assignment:
*******************/

#include <stdio.h>

int main()
{
    // MAIN MENU LOOP
    int option = 1;
    while(option != 6){
        printf("Welcome to our games, please choose an option:\n1. Ducky's Unity Game\n2. The Memory Game\n3. Professor Pat's Power Calculation\n4. The Duck Parade\n5. The Mystery of the Repeated Digits\n6. Good Night Ducks\n");
        scanf("%d", &option);
        switch(option){
            case 1:{
                // TASK 1: Ducky's Unity Game
                int x;
                printf("\nplease enter a positive number:\n");
                scanf("%d",&x);
                while(x<0){
                    printf("\nInvalid number, please try again\n");
                    scanf("%d",&x);
                }
                int count = 0;
                while(x>0){
                    count += (x&1);
                    x = x>>1;
                }
                printf("\nDucky earns %d corns\n", count);
                break;
            }
            case 2:{
                // TASK 2: The Memory Game
                int x;
                unsigned long long memory = 0;
                printf("\nplease enter the number of ducks:\n");
                scanf("%d",&x);
                while(x<0){
                    printf("\nInvalid number, please try again\n");
                    scanf("%d",&x);
                }
                printf("\nyou entered %d ducks\n", x);
                for(int i = 0; i < x; i++){
                    int sound;
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n", i+1);
                    scanf("%d",&sound);
                    while(sound<0){
                        printf("\nInvalid number, please try again\n");
                        scanf("%d\n",&sound);
                    }
                    memory = memory | (unsigned long long)sound<<i;
                }
                for(int i = 0; i < x; i++){
                    int sound = (memory>>i) & 1;
                    if (sound)
                        printf("duck number %d do Quak\n",i+1);
                    else
                        printf("duck number %d do Sh...\n",i+1);
                }
            break;
            }
            case 3:{
                // TASK 3: Professor Pat's Power Calculation
                int num;
                printf("\nplease enter the number\n");
                scanf("%d",&num);
                while(num<0){
                    printf("\nInvalid number, please try again\n");
                    scanf("%d",&num);
                }
                int exp;
                printf("\nplease enter the exponent\n");
                scanf("%d",&exp);
                while(exp<0){
                    printf("\nInvalid number, please try again\n");
                    scanf("%d",&exp);
                }
                int x = num;
                for(int i = 1; i<exp; i++)
                    x *= num;
                printf("\nyour power is: %d\n", x);
                break;
            }
            case 4:{
                 // TASK 4: The Duck Parade
                int num;
                printf("\nplease enter number of ducks:\n");
                scanf("%d",&num);
                while(num<0){
                    printf("\nInvalid number, please try again\n");
                    scanf("%d",&num);
                }
                int count = 0;
                while(count < num){
                    for(int i =0; i< (num-count) && i<10; i++)
                        printf(" _");
                    printf("\n");
                    for(int i =0; i< (num-count) && i<10; i++)
                        printf("__(o)> ");
                    printf("\n");
                    for(int i =0; i< (num-count) && i<10; i++)
                        printf("\\___) ");
                    printf("\n\n\n");
                    count += 10;
                }  
                break;
            }
            case 5:{
                // TASK 5: The Mystery of the Repeated Digits
                int num;
                printf("\nplease enter number\n");
                scanf("%d",&num);
                while(num<0){
                    printf("\nInvalid number, please try again\n");
                    scanf("%d",&num);
                }
                for(int i = 0; i<10; i++){
                    int x = num;
                    int count = 0;
                    while(x>0){
                        if(x%10 == i)
                            count++;
                        if(count ==2)
                            break;
                        x /= 10;
                    }
                    if(count > 1)
                        printf("%d appears more than once! \n", i);
                }
                break;
            }
            case 6: {
                 // TASK 6: EXIT
                printf("Good night! See you at the pond tomorrow.");
                break;
            }
            default: {
                printf("\nInvalid number, please try again\n");
                break;
            }
        }
    }
    // dont forget through all the necessary parts to validate invalid input.

    return 0;
}
