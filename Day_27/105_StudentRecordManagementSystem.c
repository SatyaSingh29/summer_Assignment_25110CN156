#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
};

void addStudent(struct Student students[], int count)   //function to add details
{
    printf("Enter details:\n");
    printf("Roll Number: ");
    scanf("%d",&students[count].roll);
    printf("Name: ");
    scanf("%s",students[count].name);
    printf("Age: ");
    scanf("%d",&students[count].age);
    printf("Marks: ");
    scanf("%f",&students[count].marks);
    printf("Student Added Successfully!\n");
    
}

void displayStudents(struct Student students[], int count)   //function to print details
{
    for(int i=0; i<count;i++){
        printf("Roll No: %d\n",students[i].roll);
        printf("Name: %s\n",students[i].name);
        printf("Age: %d\n",students[i].age);
        printf("Marks: %.1f\n",students[i].marks);
        printf("-------------------------------\n");
    }
}

void searchStudent(struct Student students[], int count)   //function to search student by roll no
{
    int roll;
    int found=0;
    printf("Enter roll no to search: ");
    scanf("%d",&roll);
    
    for(int i=0; i<count; i++){
        if(students[i].roll == roll){
            printf("Name: %s\n",students[i].name);
            printf("Age: %d\n",students[i].age);
            printf("Marks: %.1f\n",students[i].marks);
            printf("-------------------------------\n");
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Student not found!\n");
    }
}

void updateStudent(struct Student students[], int count)    //function to update details
{
    int roll;
    int found=0;
    printf("Enter roll no to Update: ");
    scanf("%d",&roll);
    
    for(int i=0; i<count; i++){
        if(students[i].roll == roll){
            printf("New Name:" );
            scanf("%s",students[i].name);
            printf("New Age:" );
            scanf("%d",&students[i].age);
            printf("New Marks:" );
            scanf("%f",&students[i].marks);
            printf("Student Updated Successfully\n");
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Student not found!\n");
    }
}

int deleteStudent(struct Student students[], int count)   //function to delete details
{
    int roll;
    int found=0;
    printf("Enter roll no to Delete: ");
    scanf("%d",&roll);
    
    for(int i=0; i<count; i++){
        if(students[i].roll == roll){
            found = 1;
            
            for(int j = i; j<count-1; j++){
                students[j] = students[j+1];
                
            }
            count--;
            printf("Student deleted Successfully!\n");
            break;
        }
    }
    if(found == 0){
        printf("Student not found!\n");
    }
    return count;
}

int main(){
    struct Student students[100];
    int count = 0;
    int choice=0;
    
    while(choice != 6){
        printf("--------Menu Options---------\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            {
                if(count<100){
                    addStudent(students,count);
                    count++;
            }
                break;
        }
            case 2:
            {
               displayStudents(students,count);
               break;
            }
            
            case 3:
            {
                searchStudent(students,count);
                break;
            }
            
            case 4:
            {
                updateStudent(students,count);
                break;
            }
            
            case 5:
            {
                count = deleteStudent(students,count);
                break;
            }
            
            case 7:
            {
                printf("Exiting program...\n");
                break;
            }
            
            default:
                printf("Invalid Choice.\n");
        }
        
    }
    
  return 0;  
    
}