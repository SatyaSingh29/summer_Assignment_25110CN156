#include <stdio.h>

int main(){
    int answer;
    int score = 0;

    printf("========== QUIZ APPLICATION ==========\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("Q2. Which language is known as the mother of all programming languages?\n");
    printf("1. C\n2. Python\n3. Java\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("Q3. How many days are there in a leap year?\n");
    printf("1. 364\n2. 365\n3. 366\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 366.\n\n");
    }

    // Question 4
    printf("Q4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Mars.\n\n");
    }

    // Question 5
    printf("Q5. How many continents are there in the world?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 7.\n\n");
    }

    // Final Result
    printf("\n========== RESULT ==========\n");
    printf("Your Score: %d/5\n", score);

    if(score == 5)
    {
        printf("Grade: Excellent!\n");
    }
    else if(score >= 3)
    {
        printf("Grade: Good!\n");
    }
    else
    {
        printf("Grade: Needs Improvement.\n");
    }

    printf("Thank you for playing!\n");

    return 0;
}