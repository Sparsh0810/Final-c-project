#include <stdio.h>
#include<stdlib.h>

struct employee{
    int id;
    char firstname[20];
    char lastname[20];
    int phone[8];
    char city[20];
    int parking_num;
    char spouse_name[20];
}em[5];

int main()
{
    int T,i,N;
   // printf("how many employee are stored in file\n");
    //scanf("%d",&N);
    for(int i=0;i<=1;i++)
    {
        //printf("Enter Employee ID\n");
        //scanf("%d",em[i].id);
        
        printf("Enter Employee firstname\n");
        scanf("%s",em[i].firstname);
       
        
        printf("Enter Employee lastname\n");
        scanf("%s",em[i].lastname);
        
        
        printf("Enter Employee phone number\n");
        scanf("%d",&em[i].phone);
        
        
        printf("Enter Employee city\n");
        scanf("%s",em[i].city);
      
        
        
        printf("Enter Employee parking_num=  ");
        scanf("%d",&em[i].parking_num);
      
        printf("Enter Employee spouse_name\n");
        scanf("%s",em[i].spouse_name);
    }
    
    printf("Details of employee\n");
    for(int i=0;i<=1;i++)
    {
    printf(" %s %s %d %s %d %s %d %s",em[i].firstname,em[i].lastname,em[i].phone,em[i].city,em[i].parking_num,em[i].spouse_name);
    }
