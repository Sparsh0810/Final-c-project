#include<stdio.h>

struct email_segregation
@@ -6,36 +7,33 @@ struct email_segregation
    char toAddr[50];
    char subject[50];
    char mailBody[50];
};
};struct email_segregation record[4];

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
    int i;

   fscanf(e1,"%s %s",record.fromAddr,record.toAddr);
   //fseek(e1,SEEK_CUR+1,SEEK_CUR);
   if( fgets (record.subject, 50, e1)!=NULL ) {
      printf("%s\n%s\n",record.fromAddr,record.toAddr);
      puts(record.subject);
   }
   //printf("%s\n%s",record[0].fromAddr,record[0].toAddr);


    fclose(e5);
    fclose(e1);
    fclose(e2);
    fclose(e3);
    fclose(e4);
    FILE *e[4];

    e[0] = fopen("e1.txt","r");
    e[1] = fopen("e2.txt","r");
    e[2] = fopen("e3.txt","r");
    e[3] = fopen("e4.txt","r");
    e[4] = fopen("e5.txt","r");
    for(i=0;i<5;i++){
    fscanf(e[i],"%s%s ",record[i].fromAddr,record[i].toAddr);
    fgets(record[i].subject, 50, e[i]);
    fgets(record[i].mailBody,50,e[i]);  
    }
    for(int j=0;j<5;j++){
    printf("Email %d: %s\n%s\n%s\n%s\n",j+1,record[j].fromAddr,record[j].toAddr,record[j].subject,record[j].mailBody);
    }
    fclose(e[0]);
    fclose(e[1]);
    fclose(e[2]);
    fclose(e[3]);
    fclose(e[4]);
}


}
