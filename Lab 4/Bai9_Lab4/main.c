#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int idnhanvien;
    unsigned int giomotthang;
    unsigned int tienmotgio;
    scanf("%u", &idnhanvien);
    scanf("%u", &giomotthang);
    scanf("%u", &tienmotgio);
    unsigned int tienluong = ("%u", giomotthang * tienmotgio);
    printf("ID nhan vien: %u\nTien luong thang: %u", idnhanvien, tienluong);
    return 0;
}
