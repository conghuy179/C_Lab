#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperature;
    printf("Nhap nhiet do: ");
    scanf("%d", &temperature);
    if (temperature < 0)
    {
        printf("Thoi tiet lanh cong");
    }

    else if (0 <= temperature && temperature < 10)
    {
        printf("Thoi tiet rat lanh");
    }
    else if (10 <= temperature && temperature < 20)
    {
        printf("Thoi tiet lanh");
    }
    else if (20 <= temperature && temperature < 30)
     {
         printf("Thoi tiet tuyet voi");
     }
    else if (30 <= temperature && temperature < 40)
    {
        printf("Thoi tiet nong");
    }
    else
    {
        printf("Thoi tiet rat nong");
    }
    return 0;
}




