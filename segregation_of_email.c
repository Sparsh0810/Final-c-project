#include<stdio.h>

struct email_segregation
{
    char fromAddr[50];
    char toAddr[50];
    char subject[50];
    char mailBody[50];
};

void main()
{
    struct email_segregation record;
    int i,count=0;
    char temp[50];
    FILE *e1,*e2,*e3,*e4,*e5;
    
    e1 = fopen("e1.txt","r");
    e2 = fopen("e2.txt","r");
    e3 = fopen("e3.txt","r");
    e4 = fopen("e4.txt","r");
    e5 = fopen("e5.txt","r");
    char ch;
    
   fscanf(e1,"%s %s",record.fromAddr,record.toAddr);
   //fseek(e1,SEEK_CUR+1,SEEK_CUR);
   if( fgets (record.subject, 50, e1)!=NULL ) {
      /* writing content to stdout */
      puts(record.subject);
   }
   //printf("%s\n%s",record[0].fromAddr,record[0].toAddr);


    fclose(e5);
    fclose(e1);
    fclose(e2);
    fclose(e3);
    fclose(e4);


}
