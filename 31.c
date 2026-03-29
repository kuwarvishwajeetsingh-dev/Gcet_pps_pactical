//structure to store data of student
#include <stdio.h>
struct student {
    char id[10];
    char name[50];
    int age;
    float t_marks;
}s1;   // s1 is called object in mordern programming but ideally  here in C called Structure Variable.
int main() {
    printf("Enter the Id of the student: ");
    fgets(s1.id, 10, stdin); // Read ID (9 characters + null terminator)
    printf("Enter name: ");
    fgets(s1.name, 50, stdin);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    getchar(); // Consume the newline character left by scanf
    printf("Enter Total marks: ");
    scanf("%f", &s1.t_marks);
    getchar(); // Consume the newline character left by scanf
    printf("\nStudent Record:\n");
    printf("ID: %s", s1.id); // fgets includes the newline character
    printf("Name: %s", s1.name); // fgets includes the newline character
    printf("Age: %d\n", s1.age);
    printf("Total Marks: %.2f\n", s1.t_marks);

    return 0;
}