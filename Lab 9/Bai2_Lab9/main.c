#include <stdio.h>
#include <string.h>

int main()
{
  // so string nhap vao
  int n;
  printf("Nhap so luong chuoi ky tu: ");
  do
  {
    scanf("%d", &n);
    if (n <= 0)
    {
      printf("So luong phan tu phai duong. Nhap lai.\n");
    }
  } while (n <= 0);

  // mang arr luu tru cac chuoi ky tu
  // chuoi ky tu thu (i + 1) luu tru tai phan tu arr[i] (i bat dau tu 0)
  char arr[n][100];

  // nhap cac chuoi ky tu tu ban phim
  for (int i = 0; i < n; i++)
  {
    printf("Nhap chuoi ky tu thu %d: ", (i + 1));
    scanf("%s", arr[i]);
  }

  printf("Cac chuoi ky tu truoc khi sap xep: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%s\n", arr[i]);
  }

  // sap xep su dung thuat toan sap xep noi bot
  char tmp[100];
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (strcmp(arr[j], arr[j + 1]) > 0)
      {
        strcpy(tmp, arr[j]);
        strcpy(arr[j], arr[j + 1]);
        strcpy(arr[j + 1], tmp);
      }
    }
  }

  // Hien thi cac chuoi ky tu sau sap xep
  printf("Cac chuoi ky tu sau khi sap xep: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%s\n", arr[i]);
  }

  return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    // nhap so luong chuoi
int n;
printf("Nhap vao so luong chuoi ky tu: \n");
do
{
    scanf("%d", &n);
    if (n <= 0)
        {
        printf("Nhap sai, yeu cau nhap lai!\n");
        }
}
while (n <= 0);


char arr[n][100];
for (int i = 0; i < n; i++)
{
    printf("Nhap chuoi ky tu thu %d: ", (i + 1));
    scanf("%s", arr[i]);
}

printf("Cac chuoi thu tu truoc khi sap xep: \n");
for (int i = 0; i < n; i++)
{
    printf("%s\n", arr[i]);
}

char temp[100];
printf("Cac chuoi thu tu sau khi sap xep: \n");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n - i; j++)
    {
        if(strcmp(arr[j], arr[j+1]) > 0)
        {
            strcpy(temp, arr[j]);
            strcpy(arr[j], arr[j + 1]);
            strcpy(arr[j + 1], temp);
        }
    }
}
for (int i = 0; i <= n; i++)
{
    printf("%s\n", arr[i]);
}
return 0;
}
*/
