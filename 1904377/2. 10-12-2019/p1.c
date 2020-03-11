#include <stdio.h>
int main()
{
        float voltage, current, totalresistance,r1,r2,r3,r,R1,R2,R;
        printf("Enter resistances in parallel- ");
        scanf("%f%f%f",&r1,&r2,&r3 );
        r=1/(1/r1)+(1/r2)+(1/r3);
        printf("Enter resistances in series- ");
        scanf("%f%f",&R1,&R2 );
        R=R1+R2;
        totalresistance=R+r;
        printf("Enter voltage- ");
        scanf("%f",&voltage );
        current=voltage/totalresistance;
        printf("Current = %f", current);
        return 0;
}
