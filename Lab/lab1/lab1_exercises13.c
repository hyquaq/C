#include <stdio.h>

int main(void)
{
    float physics, chemistry, biology, mathematics, computer;
    printf("Enter: \n");
    scanf("%f%f%f%f%f", &physics, &chemistry, &biology, &mathematics, &computer);

    float percentage = (((physics + chemistry + biology + mathematics + computer) / 5) / 10) * 100;

    if (percentage > 90)
        printf("Grade A");
    else if (percentage > 80)
        printf("Grade B");
    else if (percentage > 70)
        printf("Grade C");
    else if (percentage > 60)
        printf("Grade D");
    else if (percentage > 40)
        printf("Grade E");
    else
        printf("Grade F");
    return 0;
}