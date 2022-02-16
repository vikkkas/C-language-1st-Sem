#include <stdio.h>
#include <string.h>
int main()
{
    char veh;
    int time, amount;
    printf("Enter the type of Vehicle\n");
    printf("Press C for Car, B for Bus and T for any two wheeler vehicle : ");
    scanf("%c", &veh);
    printf("Enter the time period for which the parking space was used :");
    scanf("%d", &time);
    if (veh == 'c' || veh == 'C')
    {
        amount = 10 * time;
        printf("The total amount to be paid is : %d \n", amount);
        printf("******* Thank You *******");
    }
    if (veh == 'b' || veh == 'B')
    {
        amount = 20 * time;
        printf("The total amount to be paid is : %d\n", amount);
        printf("******* Thank You *******");
    }
    if (veh == 'T' || veh == 't')
    {
        amount = 5 * time;
        printf("The total amount to be paid is : %d\n", amount);
        printf("******* Thank You *******");
    }

    return 0;
}