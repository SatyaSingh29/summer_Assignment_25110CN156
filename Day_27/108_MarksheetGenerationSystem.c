#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float maths;
    float science;
    float english;
    float total;
    float percentage;
};

void addStudent(struct Student students[], int count)
{
    printf("Enter details:\n");

    printf("Roll Number: ");
    scanf("%d", &students[count].roll);

    printf("Name: ");
    scanf("%s", students[count].name);

    printf("Maths Marks: ");
    scanf("%f", &students[count].maths);

    printf("Science Marks: ");
    scanf("%f", &students[count].science);

    printf("English Marks: ");
    scanf("%f", &students[count].english);

    students[count].total =
        students[count].maths +
        students[count].science +
        students[count].english;

    students[count].percentage =
        students[count].total / 3.0;

    printf("Student Added Successfully!\n");
}

void displayStudents(struct Student students[], int count)
{
    if(count == 0)
    {
        printf("No students found!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("Roll No: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f%%\n",
               students[i].percentage);
        printf("---------------------------\n");
    }
}

void searchStudent(struct Student students[], int count)
{
    if(count == 0)
    {
        printf("No students found!\n");
        return;
    }

    int roll;
    int found = 0;

    printf("Enter Roll No to Search: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(students[i].roll == roll)
        {
            printf("Name: %s\n", students[i].name);
            printf("Percentage: %.2f%%\n",
                   students[i].percentage);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found!\n");
}

void updateStudent(struct Student students[], int count)
{
    if(count == 0)
    {
        printf("No students found!\n");
        return;
    }

    int roll;
    int found = 0;

    printf("Enter Roll No to Update: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(students[i].roll == roll)
        {
            printf("New Name: ");
            scanf("%s", students[i].name);

            printf("New Maths Marks: ");
            scanf("%f", &students[i].maths);

            printf("New Science Marks: ");
            scanf("%f", &students[i].science);

            printf("New English Marks: ");
            scanf("%f", &students[i].english);

            students[i].total =
                students[i].maths +
                students[i].science +
                students[i].english;

            students[i].percentage =
                students[i].total / 3.0;

            printf("Student Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found!\n");
}

int deleteStudent(struct Student students[], int count)
{
    if(count == 0)
    {
        printf("No students found!\n");
        return count;
    }

    int roll;
    int found = 0;

    printf("Enter Roll No to Delete: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(students[i].roll == roll)
        {
            found = 1;

            for(int j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            count--;
            printf("Student Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Student not found!\n");

    return count;
}

void generateMarksheet(struct Student students[], int count)
{
    if(count == 0)
    {
        printf("No students found!\n");
        return;
    }

    int roll;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(students[i].roll == roll)
        {
            printf("\n------ MARKSHEET ------\n");
            printf("Roll No: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Maths: %.1f\n", students[i].maths);
            printf("Science: %.1f\n", students[i].science);
            printf("English: %.1f\n", students[i].english);
            printf("Total: %.1f\n", students[i].total);
            printf("Percentage: %.2f%%\n",
                   students[i].percentage);

            if(students[i].percentage >= 90)
                printf("Grade: A+\n");
            else if(students[i].percentage >= 80)
                printf("Grade: A\n");
            else if(students[i].percentage >= 70)
                printf("Grade: B\n");
            else if(students[i].percentage >= 60)
                printf("Grade: C\n");
            else if(students[i].percentage >= 40)
                printf("Grade: D\n");
            else
                printf("Grade: F\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found!\n");
}

int main()
{
    struct Student students[100];
    int count = 0;
    int choice = 0;

    while(choice != 7)
    {
        printf("\n------ MENU ------\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Generate Marksheet\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 100)
                {
                    addStudent(students, count);
                    count++;
                }
                break;

            case 2:
                displayStudents(students, count);
                break;

            case 3:
                searchStudent(students, count);
                break;

            case 4:
                updateStudent(students, count);
                break;

            case 5:
                count = deleteStudent(students, count);
                break;

            case 6:
                generateMarksheet(students, count);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

