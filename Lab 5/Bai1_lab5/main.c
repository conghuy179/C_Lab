#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    float b;
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    if((a != (int)a) || (b != (int)b))
   {
     printf("So nhap vao khong phai so nguyen\n");
   }
   else
   {
   if (a == b)
   {
       printf("So thu nhat bang so thu hai");
   }
   else if (a < b)
   {
       printf("So thu nhat be hon so thu hai");
   }
   else
   {
       printf("So thu nhat lon hon so thu hai");
   }
   };

    return 0;
}
