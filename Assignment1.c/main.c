
/* Program: This program is developed to perform the operations of an ATM machine.
 The program shows a welcome screen and the options the user has to perform the operations.
 option 1 allows the user to enter his / her PIN, option 2 allows the user to change the PIN after a double check,
 option 3 shows the amount of times that the user entered his PIN correctly and wrong and option 4 terminates
 the program and shows a farewell message.
 
 Created by Rui Anselmo Dutra Ranito.
 Copyright © 2018 Rui Anselmo Dutra Ranito. All rights reserved.
 Date: 31/10/2018
 
 */

#include <stdio.h>


int main() {
    
    //Declare variables
    
    int ch;
    
    int Pin1;
    int Pin2;
    int Pin3;
    int Pin4;
    
    int Old_Pin1;
    int Old_Pin2;
    int Old_Pin3;
    int Old_Pin4;
    
    int new_Pin1;
    int new_Pin2;
    int new_Pin3;
    int new_Pin4;
    
    int temp_Pin1;
    int temp_Pin2;
    int temp_Pin3;
    int temp_Pin4;
    
    int count_Correct_Pin_Opt1;
    int count_Wrong_Pin_Opt1;
    
    int count_Correct_Pin_Opt2;
    int count_Wrong_Pin_Opt2;
    
    int count_Correct_Total;
    int count_Wrong_Total;
    
    int option;
    
    
    // initialise variables
    
    
    Pin1 = 0;
    Pin2 = 0;
    Pin3 = 0;
    Pin4 = 0;
    
    Old_Pin1 = 1;
    Old_Pin2 = 2;
    Old_Pin3 = 3;
    Old_Pin4 = 4;
    
    new_Pin1 = 0;
    new_Pin2 = 0;
    new_Pin3 = 0;
    new_Pin4 = 0;
    
    temp_Pin1 = 0;
    temp_Pin2 = 0;
    temp_Pin3 = 0;
    temp_Pin4 = 0;
    
    count_Correct_Pin_Opt1 = 0;
    count_Wrong_Pin_Opt1 = 0;
    
    count_Correct_Pin_Opt2 = 0;
    count_Wrong_Pin_Opt2 = 0;
    
    count_Correct_Total = 0;
    count_Wrong_Total = 0;
    
    option = 0;
    
    
    /*
     do while statement to always initialize the program at least once until the user presses key 4,
     the default PIN is 1234, ask the user to enter the Pin and gives the user
     the option to change the PIN and sums the errors and hits of the PIN change attempts
     */
    
    do
    {
        printf("\n\n*********Welcome to the ATM machine.*********\n");
        printf("\n\nPress 1 for insert your PIN.\n\n");
        printf("\n\nPress 2 if you want to change your PIN number.\n\n");
        printf("\n\nPress 3 if you want to see the number of attempts.\n\n");
        printf("\n\nPress 4 if you want to close the program.\n\n");
        
        //scanf to receive the input from the user
        
        
        printf("\nEnter your option\n");
        scanf("%d",& option);
        
        /*
         while loop to verify that the user input is a character
         to check if the user input and a character if yes shows an
         error message and asks the user to enter the PIN again
         and counts as a wrong PIN entry attempt.
         */
        
        while ((ch = getchar()) && ch != '\n')
        {
            printf("\nCharacters are not allowed\n");
            printf("\nPlease enter a valid option\n");
            scanf("%d",& option);
        }
        
        //switch statement to check the option entered by the user
        
        switch (option) {
                
                /*
                 if the user chooses option 1 he will be asked
                 to enter the first digit of his PIN
                 */
            case 1:
                
            {
                
                printf("\nEnter the first digit of your PIN\n");
                scanf("%d",&Pin1);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease enter the first digit of your PIN\n");
                    scanf("%d",& Pin1);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (Pin1 < 0 || Pin1 > 9)
                {
                    
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & Pin1);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                    
                }
                
                // ask the user to enter the second digit.
                
                printf("\nEnter the second digit of your PIN\n");
                scanf("%d",&Pin2);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease enter the second digit of your PIN\n");
                    scanf("%d",& Pin2);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (Pin2 < 0 || Pin2 > 9)
                {
                    
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & Pin2);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                    
                }
                
                // ask the user to enter the third digit.
                
                printf("\nEnter the third digit of your PIN\n");
                scanf("%d",&Pin3);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease enter the third digit of your PIN\n");
                    scanf("%d",& Pin3);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (Pin3 < 0 || Pin3 > 9)
                {
                    
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & Pin3);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                }
                
                // ask the user to enter the fourth digit.
                
                printf("\nEnter the fourth digit of your PIN\n");
                scanf("%d",&Pin4);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease enter the fourth digit of your PIN\n");
                    scanf("%d",& Pin4);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (Pin4 < 0 || Pin4 > 9)
                {
                    
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & Pin4);
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                    
                }
                
                /*
                 if statement that compares the PIN entered by the user
                 with the previously established PIN if correct it shows a message
                 and counts as a successful PIN entry attempt. Otherwise it
                 shows a message saying that the PIN is wrong and counts as
                 a wrong PIN entry attempt.
                 */
                
                if(Pin1 == Old_Pin1 && Pin2 == Old_Pin2 && Pin3 == Old_Pin3 && Pin4 == Old_Pin4)
                {
                    
                    printf("\nYour PIN is correct.\n");
                    count_Correct_Pin_Opt1 = count_Correct_Pin_Opt1 + 1;
                    
                }
                
                else
                {
                    printf("\nYour PIN is incorrect please enter a valid PIN\n");
                    count_Wrong_Pin_Opt1 = count_Wrong_Pin_Opt1 + 1;
                }
                
                break;
            } //end case 1
                
                
                /*
                 if the user press option 2 he can modify his PIN
                 a message will be displayed asking him to enter the first digit of the new PIN
                 and successively the second, third and fourth digits.
                 */
                
            case 2:
            {
                
                printf("\nEnter the first digit of your PIN, digit between 0 and 9\n");
                scanf("%d",& new_Pin1);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease enter the first digit of your PIN, digit between 0 and 9\n");
                    scanf("%d",& new_Pin1);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (new_Pin1 < 0 || new_Pin1 > 9)
                {
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & new_Pin1);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                printf("\nEnter the second digit of your PIN, digit between 0 and 9\n");
                scanf("%d",& new_Pin2);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nEnter the second digit of your PIN, digit between 0 and 9\n");
                    scanf("%d",& new_Pin2);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (new_Pin2 < 0 || new_Pin2 > 9)
                {
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & new_Pin2);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                printf("\nEnter the third digit of your PIN, digit between 0 and 9\n");
                scanf("%d",& new_Pin3);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nEnter the third digit of your PIN, digit between 0 and 9\n");
                    scanf("%d",& new_Pin3);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (new_Pin3 < 0 || new_Pin3 > 9)
                {
                    printf("\nPlease enter a digit between 0 and 9, digit between 0 and 9\n");
                    scanf("%d", & new_Pin3);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                printf("\nEnter the fourth digit of your PIN, digit between 0 and 9\n");
                scanf("%d",& new_Pin4);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nEnter the fourthdigit of your PIN, digit between 0 and 9\n");
                    scanf("%d",& new_Pin4);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (new_Pin4 < 0 || new_Pin4 > 9)
                {
                    printf("\nPlease enter a digit between 0 and 9, digit between 0 and 9\n");
                    scanf("%d", & new_Pin4);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                // Prompts the user to confirm the PIN previously entered
                
                printf("\nPlease confirm your new PIN\n");
                
                printf("\nConfirm your first digit\n");
                scanf("%d",& temp_Pin1);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease confirm your first digit\n");
                    scanf("%d",& temp_Pin1);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (temp_Pin1 < 0 || temp_Pin1 > 9)
                {
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & temp_Pin1);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                printf("\nConfirm your second digit\n");
                scanf("%d",& temp_Pin2);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease confirm your second digit\n");
                    scanf("%d",& temp_Pin2);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (temp_Pin2< 0 || temp_Pin2 > 9)
                {
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & temp_Pin2);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                printf("\nConfirm the third digit\n");
                scanf("%d",& temp_Pin3);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease confirm your third digit\n");
                    scanf("%d",& temp_Pin3);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (temp_Pin3 < 0 || temp_Pin3 > 9)
                {
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & temp_Pin3);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                printf("\nConfirm your fourth digit\n");
                scanf("%d", & temp_Pin4);
                
                /*
                 while loop to verify that the user input is a character
                 if yes shows an error message and asks the user to enter the PIN again
                 and counts as a wrong PIN entry attempt.
                 */
                
                while ((ch = getchar()) && ch != '\n')
                {
                    printf("\nCharacters are not allowed\n");
                    printf("\nPlease confirm your fourth digit\n");
                    scanf("%d", & temp_Pin4);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 while loop that if the user enters a PIN less than 0 or greater than 9
                 the program shows an error message and asks to enter the PIN again
                 and counts as a PIN input attempt error.
                 */
                
                while (temp_Pin4 < 0 || temp_Pin4 > 9)
                {
                    printf("\nPlease enter a digit between 0  and 9\n");
                    scanf("%d", & temp_Pin4);
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                /*
                 if statement that compares the PIN entered by the user
                 with the previously PIN if correct it shows a message
                 and counts as a successful PIN entry attempt. Otherwise it
                 shows a message saying that the PIN is wrong and counts as
                 a wrong PIN entry attempt and the PIN is not modified.
                 */
                
                if(new_Pin1 == temp_Pin1 && new_Pin2 == temp_Pin2 && new_Pin3 == temp_Pin3 && new_Pin4 == temp_Pin4)
                {
                    
                    printf("\nYour PIN is correct and has been changed.\n");
                    
                    Old_Pin1 = new_Pin1;
                    Old_Pin2 = new_Pin2;
                    Old_Pin3 = new_Pin3;
                    Old_Pin4 = new_Pin4;
                    
                    count_Correct_Pin_Opt2 = count_Correct_Pin_Opt2 + 1;
                    
                }
                
                else
                {
                    printf("\nYour PIN is wrong Please enter a valid PIN.\n");
                    count_Wrong_Pin_Opt2 = count_Wrong_Pin_Opt2 + 1;
                }
                
                break;
                
            } // end case 2
                
                /*
                 if the user chooses option 3 the program will show
                 successful PIN entry attempts and the wrong attempts.
                 */
                
            case 3:
            {
                count_Correct_Total = count_Correct_Pin_Opt1 + count_Correct_Pin_Opt2;
                count_Wrong_Total = count_Wrong_Pin_Opt1 + count_Wrong_Pin_Opt2;
                
                printf("\n\nThe total of Correct Pin is %d\n\n", count_Correct_Total);
                printf("\n\nThe total of Wrong PIN is %d\n\n", count_Wrong_Total);
                
                break;
            }//end option 3
                
            case 4:
            {
                
                printf("\n\nThanks to use the ATM Machine see you soon!!\n\n");
                break;
            } //end option 4
                
                /*
                 if the user does not enter any valid option
                 the program shows a message requesting the user to enter a valid option.
                 */
                
            default:
            {
                printf("\nPlease enter a valid option\n");
                
                break;
            }//end default
                
        }//end switch statement
        
    }//end do
    
    
    while (option != 4);
    
    
    return 0;
}//end main










