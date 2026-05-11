// Student Grade Management System
// Simple but not basic 😎

#include <stdio.h>

int main() {

    int n, i;
    char name[50];
    int marks[5];
    int total = 0;
    float average;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Number of Subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter Mark %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    average = total / (float)n;

    printf("\n===== STUDENT REPORT =====\n");

    printf("Name    : %s\n", name);
    printf("Total   : %d\n", total);
    printf("Average : %.2f\n", average);

    if(average >= 90)
        printf("Grade   : A+\n");

    else if(average >= 75)
        printf("Grade   : A\n");

    else if(average >= 60)
        printf("Grade   : B\n");

    else if(average >= 40)
        printf("Grade   : C\n");

    else
        printf("Grade   : FAIL\n");

    return 0;
}
