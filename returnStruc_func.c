#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[30];
    float marks;
};

struct Student details() {
    struct Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.roll_no);

    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    return student;
}

int main() {
    struct Student student1 = details();

    printf("\nStudent Details:\n");
    printf("Roll No.: %d\n", student1.roll_no);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
