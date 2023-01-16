#include <stdio.h>
#include <stdlib.h>

int main()
{
    int re, rem;
    char oldname[100], newname[100], buffer[100];

    printf("Hay nhap ten file can doi:\n");
    scanf("%s", oldname);

    printf("Hay nhap ten moi:\n");
    scanf("%s", newname);

    re = rename(oldname, newname);

    if(re == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Error: unable to rename the file.\n");
    }

    // ham remove
    printf("Nhap ten file can xoa: \n");
    scanf("%s", buffer);
    rem = remove(buffer);

    if (rem == 0)
    {
        printf("File was removed successfully.\n");
    }
    else
    {
        printf("Error: unable to remove the file.\n");
    }
    return 0;
}
