#include <stdio.h>
#include <string.h>

int main() {
    
    char name[50], rollno[20];
    int subjects = 8;
    float marks[8], total = 0, percentage, gpa;
    char grade[3];
    int i;

    char course[8][30] = {
        "Programming Fundamentals",
        "Calculus",
        "English",
        "Physics",
        "ICT",
        "Pakistan Studies",
        "Islamic Studies",
        "Applied Physics Lab"
    };

    printf("===== SOFTWARE DEPARTMENT MARKSHEET =====\n\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%s", rollno);

    printf("\nEnter Marks (Out of 100)\n");

    for(i = 0; i < subjects; i++) {
        printf("%s: ", course[i]);
        scanf("%f", &marks[i]);

        total += marks[i];
    }

    percentage = total / subjects;

    if(percentage >= 90)
        gpa = 4.0;
    else if(percentage >= 85)
        gpa = 3.7;
    else if(percentage >= 80)
        gpa = 3.3;
    else if(percentage >= 75)
        gpa = 3.0;
    else if(percentage >= 70)
        gpa = 2.7;
    else if(percentage >= 65)
        gpa = 2.3;
    else if(percentage >= 60)
        gpa = 2.0;
    else if(percentage >= 50)
        gpa = 1.7;
    else
        gpa = 0.0;

    if(percentage >= 90)
        strcpy(grade, "A+");
    else if(percentage >= 85)
        strcpy(grade, "A");
    else if(percentage >= 80)
        strcpy(grade, "B+");
    else if(percentage >= 70)
        strcpy(grade, "B");
    else if(percentage >= 65)
        strcpy(grade, "C+");
    else if(percentage >= 60)
        strcpy(grade, "C");
    else if(percentage >= 50)
        strcpy(grade, "C-");
    else
        strcpy(grade, "F");

    printf("\n\n===== FIRST YEAR MARKSHEET =====\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %s\n\n", rollno);

    printf("-------------------------------------------\n");
    printf("Course\t\t\tMarks\n");
    printf("-------------------------------------------\n");

    for(i = 0; i < subjects; i++) {
        printf("%-25s %.2f\n", course[i], marks[i]);
    }

    printf("-------------------------------------------\n");
    printf("Total Marks : %.2f / %d\n", total, subjects * 100);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("GPA         : %.2f\n", gpa);
    printf("Grade       : %s\n", grade);
    printf("-------------------------------------------\n");

    return 0;
}
