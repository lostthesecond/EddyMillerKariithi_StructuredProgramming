#include <stdio.h>

int main(void) {
    int Number_of_students, i;
    char student_reg_No[50];
    char name[100];
    float marks;
    char grade;

    printf("Enter number of students: ");
    scanf("%d", &Number_of_students);

    for (i = 1; i <= Number_of_students; i++) {
        printf("\n--- Enter Student Details %d ---\n", i);

        printf("Enter Registration Number: ");
        scanf("%s", student_reg_No);

        printf("Enter Name: ");
        scanf(" %[^\n]", name);

        printf("Enter Marks: ");
        scanf("%f", &marks);

        switch ((int)marks) {
            case 70 ... 100:
                grade = 'A';
                break;
            case 60 ... 69:
                grade = 'B';
                break;
            case 50 ... 59:
                grade = 'C';
                break;
            case 40 ... 49:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        printf("\n----------------------------------------\n");
        printf("          STUDENT INFORMATION           \n");
        printf("----------------------------------------\n");
        printf("Registration No: %s\n", student_reg_No);
        printf("Name:            %s\n", name);
        printf("Marks:           %.1f\n", marks);
        printf("Grade:           %c\n", grade);

        switch (marks >= 40) {
            case 1:
                printf("Status:          Passed\n");
                break;
            case 0:
                printf("Status:          Failed\n");
                break;
        }
        printf("----------------------------------------\n");
    }

    return 0;
}