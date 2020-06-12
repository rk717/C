#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void inputInfo(PEM p, int len);
void increase_workingDay(PEM p);
void simulate10K(PEM pArr, int len);
position check_position(PEM p);
PEM return_pointer(PEM p, int len, char gname);

typedef struct Employee
{
    char name[100]; //name
    float salary; //salary
    int days; //days since (s)he works for the company
}EM, *PEM;

//1.Represent these positions with an enumeration type.
//enum position{Intern = 1, SoftwareDeveloper, MasterDeveloper, SeniorDeveloper};
typedef enum{Intern = 1, SoftwareDeveloper, MasterDeveloper, SeniorDeveloper} position;

int main()
{
    int len = 5; 
    PEM pArr;
    int i;
    //char name[100];  lian 
    pArr = (PEM)malloc(len*sizeof(EM));  //heap free()
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

        p[i].days = 0; 
    }
}

void increase_workingDay(PEM p)
{
    int tempday = 0; 
    p -> days = (p -> days + 1);  //p->days++ 或者 ++p->day
    
    if((p -> days) > 365) // p->days%365 == 0 
    {
       
        //p->salary *= 1.05
        p -> salary = (p -> salary * 1.05); //after one year(365 days),the salary is increased 
        tempday = p->days; 
        tempday -= 365; 
    }
}

void simulate10K(PEM pArr, int len)
{
    int j = 0; 
    for(int i = 0; i < len; ++i)  //  i = 1 
    {
        while (j <= 10000)
        {
            increase_workingDay(&pArr[i]);
            j++;
        }
        j = 0; 
    }
}

position check_position(PEM p)
{
    if(p -> days < (365*3))
    {
        return Intern;
    }
    else if(p -> days > (365*3) && p -> days < (365*5))
    {
        return SoftwareDeveloper;
    }
    else if(p -> days > (365*5) && p -> days < (365*10))
    {
        return MasterDeveloper;
    }
    else if(p -> days > (365*10))
    {
        return SeniorDeveloper;
    }

}

PEM return_pointer(PEM p, int len, char* gname)  
{
    int i; 
    
    for(i = 0; i < len; ++i)
    {
        if( strcmp((p[i].name),gname) == 0 )
        {
            
            return &p[i]; //return where the given name is located in my struct array
        }
    }
    return NULL; //if there is no person with the given name
    
}