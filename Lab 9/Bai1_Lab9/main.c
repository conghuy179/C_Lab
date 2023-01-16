#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ham tinh do dai chuoi

int length(char s[])
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

// ham noi 2 chuoi voi nhau

void concatenate (char s1[], char s2[], char out[])
{
    int len1 = length(s1);
    int len2 = length(s2);

    for (int i = 0; i <len1; i++)
    {
        out[i] = s1[i];
    }

    // noi chuoi thu 2 vao bien out o diem ket thuc chuoi 1

    for (int j = 0; j < len2; j++)
    {
        out[len1 + j] = s2[j];
    }

    // loai bo '\0' o cuoi chuoi out
    out[len1 + len2] = '\0';

}

bool compare(char s1[], char s2[])
{
    int i = 0;

    while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
    {
        i++;
    }

    return (s1[i] == '\0') && (s2[i] == '\0') ? true : false;
}


int main()
{
    char s1[100];
    char s2[100];
    char s3[100];
    printf("Nhap chuoi thu nhat: \n");
    scanf("%s", s1);
    printf("Do dai chuoi ky tu thu nhat: %d\n", length(s1));

    printf("Nhap chuoi thu hai: \n");
    scanf("%s", s2);
    printf("Do dai chuoi ky tu thu hai: %d\n", length(s2));

    concatenate(s1, s2, s3);
    printf("Noi 2 chuoi ky tu: %s + %s = %s\n", s1, s2, s3);

    bool is_equal = compare(s1, s2);
    if (is_equal)
    {
        printf("Hai chuoi %s va %s bang nhau.\n", s1, s2);
    }
    else
    {
        printf("Hai chuoi %s va %s khong bang nhau.\n", s1, s2);
    }

    return 0;
}
