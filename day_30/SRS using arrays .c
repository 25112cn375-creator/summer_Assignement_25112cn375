// Write a program to Create Student Record System using Arrays and Strings.
#include <stdio.h>

int main() {
    int n, i;
    int roll[100];
    float marks[100];
    char name[100][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");
    printf("---------------------------------\n");
    printf("Roll No\tName\tMarks\n");
    printf("---------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
