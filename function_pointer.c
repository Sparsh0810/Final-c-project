#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void CircleCircumference(float y,float *c ) 
{

   *c =2*3.14*y;
    
}


void CircleArea(float z,float *a)
{
    
    *a= 3.14*z*z;
}

float SphereVolume(float x,float *v)
{
    
    *v=(3.14*4*x*x*x)/3;
    
}
 
 
int main()
{
    float radius,area,Circumference,volume;
    printf("Enter radius of circle for Area\n");
    scanf("%f",&radius);
    CircleArea(radius,&area);
    printf("\n Area of circle =%f\n",area);
    
    
    printf("Enter radius of circle for Circumference\n");
    scanf("%f",&radius);
    CircleArea(radius,&Circumference);
    printf("\n Area of Circumference =%f\n",Circumference);
    
    printf("Enter radius of sphere of volume\n");
    scanf("%f",&radius);
    CircleArea(radius,&volume);
    printf("\n volume of sphere =%f\n",volume);
    
    
    return 0;
}
