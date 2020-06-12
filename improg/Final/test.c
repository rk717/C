#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void inputInfo(PEM p, int len);
int count_position(PEM p, int len, char position);
void increase_workingDay(PEM p);
char* check_position(PEM p);
int* return_pointer(PEM p, int len, char name);

typedef struct Employee
{
    char name[100]; //name
    float salary; //salary
    int days; //days since (s)he works for the company
}EM, *PEM;

//1.Represent these positions with an enumeration type.
enum position{Intern = 1, SoftwareDeveloper, MasterDeveloper, SeniorDeveloper};

//2.Create a function increase the employee working days
void increase_workingDay(PEM p)
{
    p -> days = (p -> days + 1);  //p->days++ 或者 ++p->day
    if((p -> days) > 365)
    {
        // p->salary *= 1.05
        p -> salary = (p -> salary * 1.05); //after one year(365 days),the salary is increased 
    }
}

//3. in the main program create an array with at least five employees. 
int main()
{
    int len; //how many employee you would like to input
    PEM pArr;
    int i;

    printf("Please input how many employees: \n");
    printf("Number of people: ");
    scanf("%d", &len);

    //create the array
    pArr = (PEM)malloc(len*sizeof(EM));

    //input the Employees info
    inputInfo(pArr, len);

    return 0;
}

void inputInfo(PEM p, int len)
{
    int i;
    for(i = 0; i < len; ++i)
    {
        printf("Please input the %d employee's information: \n", i+1);
        printf("name = ");
        scanf("%s", p[i].name);

        printf("salary = ");
        scanf("%f", &p[i].salary);

        printf("days = ");
        scanf("%d", &p[i].days);
    }
}


//4.returns the number of employees with a given position
int count_position(PEM p, int len, char position)
{
    int i; 
    int cnt = 0; //count the numbers of people
    for(i = 0; i < len; i++)
    {
        if(check_position(p[i]) == position) //strcmp(check_position(p[i]),postition)
        {
            cnt++;
        }
    }
    return cnt; 
}

char* check_position(PEM p)
{
    if(p -> days < (365*3))
    {
        return "Intern";
    }
    else if(p -> days > (365*3) && p -> days < (365*5))
    {
        return "Software Developer";
    }
    else if(p -> days > (365*5) && p -> days < (365*10))
    {
        return "Master Developer";
    }
    else if(p -> days > (365*10))
    {
        return "Senior Developer";
    }

}

//5. finds an employee with the given name and return a pointer to this person. 
// If there is no person with the given name in the array then return NULL pointer.
int* return_pointer(PEM p, int len, char gname)
{
    int i; 
    
    for(i = 0; i < len; ++i)
    {
        if( strcmp(p[i].name,gname) == 0 )
        {
            
            return &p[i]; //return where the given name is located in my struct array
        }
    }
    return NULL; //if there is no person with the given name
    
}


//Lian Yilin w8t3sz 
//imperative programming Exam 1a