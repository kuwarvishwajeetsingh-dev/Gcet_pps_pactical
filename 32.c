// contructing Structure data_type for student record
#include <stdio.h>
struct Student {
    char id[10];
    char name[100];
    int age;
    float t_marks;
}s1;
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf
    struct Student s1[n];
    for(int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter student ID (3 characters): ");
        fgets(s1[i].id, 10, stdin); // Read ID (2 characters + null terminator)
        printf("Enter student name: ");
        fgets(s1[i].name, 100, stdin); // Read name (99 characters + null terminator)2
        printf("Enter student age: ");
        scanf("%d", &s1[i].age);
        while(getchar() != '\n'); // Consume the newline character left by scanf
        printf("Enter student total marks: ");
        scanf("%f", &s1[i].t_marks);
        while(getchar() != '\n'); // Consume the newline character left by scanf
    }

    printf("\nStudent Record:\n");
    printf("---------------\n");
    for(int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: %s", s1[i].id);
        printf("Name: %s", s1[i].name);
        printf("Age: %d\n", s1[i].age);
        printf("Total Marks: %.2f\n", s1[i].t_marks);
        printf("\n");
    }

    return 0;
}