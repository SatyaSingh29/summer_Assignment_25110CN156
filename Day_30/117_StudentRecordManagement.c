#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter number of students to add: ");
                int m;
                scanf("%d", &m);

                for (i = 0; i < m; i++) {
                    printf("\nStudent %d\n", n + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &s[n].roll);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", s[n].name);

                    printf("Enter Marks: ");
                    scanf("%f", &s[n].marks);

                    n++;
                }
                printf("\nRecords Added Successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo records found.\n");
                } else {
                    printf("\n----- Student Records -----\n");
                    for (i = 0; i < n; i++) {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    printf("\nNo records available.\n");
                    break;
                }

                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found.\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}