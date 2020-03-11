#include <stdio.h>
int main()
{
        float basic,gross,net,HRA,EPF,DA,TA;
        printf ("Enter basic salary");
        scanf("%f",&basic);
        HRA=(0.1)*basic;
        EPF=(0.2)*basic;
        DA=(0.15)*basic;
        TA=(0.1)*basic;
        gross=basic+DA+TA+HRA;
        printf("The gross salary of the person is= %f",gross);
        net=gross-EPF;

        printf("The net salary of the person is= %f",net);
}
