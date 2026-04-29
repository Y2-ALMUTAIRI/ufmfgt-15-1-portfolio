/*
* Filename: Week5Task4.c
* Author: Youssef Al Mutairi
* Date: 06/03/2026
* Description: Program that checks whether a number is even or odd using a function.
*/
// Function prototype to check if a number is even
int is_even(int num);
int main()
{
    int number;  // Variable to store user input
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Call the is_even function and print the result
    if(is_even(number))
        printf("Even\n");  // Print if number is even
    else
        printf("Odd\n");   // Print if number is odd

    return 0; // End of program
}
// Function to determine if a number is even
int is_even(int num)
{
    if(num % 2 == 0)
        return 1;  // Return 1 if number is even
    else
        return 0;  // Return 0 if number is odd
}
