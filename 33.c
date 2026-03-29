// Nested Structures
#include <stdio.h>
struct Address {
    char city[100];
    int pin_code;
};
struct Employee {
    char name[100];
    struct Address addr ; // Nested structure
};
int main() {
    struct Employee emp;
  //  struct Address addr ; // This variable is not used in the program,
    //  but it is declared to show that we can declare variables of the nested structure type.

    printf("Enter employee name: ");
    fgets(emp.name, 100, stdin); // Read employee name
    printf("Enter city: ");
    fgets(emp.addr.city, 100, stdin); // Read city
    printf("Enter pin code: ");
    scanf("%d", &emp.addr.pin_code); // Read pin code
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp.name); // fgets includes the newline character
    printf("City: %s", emp.addr.city); // fgets includes the newline character
    printf("Pin Code: %d\n", emp.addr.pin_code);

    return 0;
}