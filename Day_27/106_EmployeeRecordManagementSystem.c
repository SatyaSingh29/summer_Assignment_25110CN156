#include<stdio.h>

struct Employee
{
    int empId;
    char name[50];
    char department[30];
    float salary;
};

void addEmployee(struct Employee employees[], int count)
{
    printf("Enter details:\n");
    printf("Employee ID: ");
    scanf("%d",&employees[count].empId);
    printf("Name: ");
    scanf("%s",employees[count].name);
    printf("Department: ");
    scanf("%s",employees[count].department);
    printf("Salary: ");
    scanf("%f",&employees[count].salary);
    printf("Employee Added Successfully!\n");
    
}

void displayEmployees(struct Employee employees[], int count)
{  
    if(count == 0){
    printf("No employees found!\n");
    return;
    }
    for(int i=0; i<count;i++){
        printf("Employee ID: %d\n",employees[i].empId);
        printf("Name: %s\n",employees[i].name);
        printf("Department: %s\n",employees[i].department);
        printf("Salary: %.1f\n",employees[i].salary);
        printf("-------------------------------\n");
    }
}

void searchEmployee(struct Employee employees[], int count)
{
    if(count == 0){
    printf("No employees found!\n");
    return;
    }
    int empid;
    int found=0;
    printf("Enter EmpID to search: ");
    scanf("%d",&empid);
    
    for(int i=0; i<count; i++){
        if(employees[i].empId == empid){
            printf("Name: %s\n",employees[i].name);
            printf("Department: %s\n",employees[i].department);
            printf("Salary: %.1f\n",employees[i].salary);
            printf("-------------------------------\n");
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Employee not found!\n");
    }
}

void updateEmployee(struct Employee employees[], int count)
{
    if(count == 0){
    printf("No employees found!\n");
    return;
    }
    int empid;
    int found=0;
    printf("Enter EmpID to Update: ");
    scanf("%d",&empid);
    
    for(int i=0; i<count; i++){
        if(employees[i].empId == empid){
            printf("New Name:" );
            scanf("%s",employees[i].name);
            printf("New Department:" );
            scanf("%s",employees[i].department);
            printf("New Salary:" );
            scanf("%f",&employees[i].salary);
            printf("Employee Updated Successfully\n");
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Employee not found!\n");
    }
}

int deleteEmployee(struct Employee employees[], int count)
{
    if(count == 0){
    printf("No employees found!\n");
    return count;
    }
    int empid;
    int found=0;
    printf("Enter EmpID to Delete: ");
    scanf("%d",&empid);
    
    for(int i=0; i<count; i++){
        if(employees[i].empId == empid){
            found = 1;
            
            for(int j = i; j<count-1; j++){
                employees[j] = employees[j+1];
                
            }
            count--;
            printf("Employee deleted Successfully!\n");
            break;
        }
    }
    if(found == 0){
        printf("Employee not found!\n");
    }
    return count;
}

int main(){
    struct Employee employees[100];
    int count = 0;
    int choice = 0;
    
    while(choice != 6){
        printf("--------Menu Options---------\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            {
                if(count<100){
                    addEmployee(employees,count);
                    count++;
            }
                break;
        }
            case 2:
            {
               displayEmployees(employees,count);
               break;
            }
            
            case 3:
            {
                searchEmployee(employees,count);
                break;
            }
            
            case 4:
            {
                updateEmployee(employees,count);
                break;
            }
            
            case 5:
            {
                count = deleteEmployee(employees,count);
                break;
            }
            
            case 6:
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