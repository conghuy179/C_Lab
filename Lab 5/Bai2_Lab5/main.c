#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Nhap 1 so bat ki: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    printf("Day la so chan");
    else
    printf("Day la so le");
    return 0;
}
