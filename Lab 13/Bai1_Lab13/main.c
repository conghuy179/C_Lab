#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[1000];
    FILE *file_ptr;
    file_ptr = fopen("test.txt", "w");
    if (file_ptr == NULL)
    {
        printf("Error: Cannot open file.\n");
        return -1;
    }
    printf("Nhap thong tin: \n");
    scanf("%s", x);
    fprintf(file_ptr, "%s", x);
    return 0;
}
