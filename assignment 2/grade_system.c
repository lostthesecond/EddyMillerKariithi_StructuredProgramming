#include <stdio.h>
#include <string.h>

int main(){
    int Marks;
    char Grade;
    int student_count;
    printf ("welcome to the student mnagement system.\n How many students are we recording today?\n");
    scanf("%d", &student_count);
    
    char Student_fullname[20][50];
    char Student_reg_no[20][10];
    char student_grade[20];

    getchar();

    for (int student_number = 0; student_number < student_count; student_number++) {
    char name;
    printf ("what is the name of student %d:\n", student_number +1);
    fgets (Student_fullname[student_number], sizeof(Student_fullname[student_number]), stdin);
    Student_fullname[student_number][strcspn(Student_fullname[student_number], "\n")] = 0;

    printf ("what is the admission number of student %d:\n", student_number +1);
    fgets (Student_reg_no[student_number], sizeof(Student_reg_no[student_number]), stdin);
    Student_reg_no[student_number][strcspn(Student_reg_no[student_number], "\n")] = 0;

    printf ("what are the marks for student %d:\n", student_number +1);
    scanf("%d", &Marks);
    
    getchar(); 

    if (Marks>=70)
    {
        Grade = 'A';
        printf("Your grade is %c\n", Grade);
    }
    else if (Marks>=60)
    {
        Grade = 'B';
        printf("Your grade is %c\n", Grade);
    }
    else if (Marks>=50)
    {
        Grade = 'C';
        printf("Your grade is %c\n",Grade);
    }
     else if (Marks>=40)
    {
        Grade = 'D';
        printf("Your grade is %c\n", Grade);
    }
    else if (Marks >= 0 && Marks < 40)
    {
        Grade = 'F';
        printf("Your grade is %c\n", Grade);
        printf("YOU HAVE FAILED!!");
    }
    else
    {
        printf("INVALID INPUT");
    }

    student_grade[student_number] = Grade;

    }
    for (int i = 0; i < student_count; i++) {
        printf("%-25s %-15s %-10d %-5c\n", Student_fullname[i], Student_reg_no[i], student_grade[i]);
    }
    return 0;
}