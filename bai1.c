/******************************************************************************
 * Họ và tên: [NGUYEN VAN NGHIA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main()
{
    char s[100];
    printf("Nhap vao mot chuoi: ");
    gets(s);

    int i = 0;
    int nguyenAm = 0;
    int phuAm = 0;

    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            {
                nguyenAm++;
            }
            else
            {
                phuAm++;
            }
        }
        i++;
    }

    printf("Chuoi '%s' co %d nguyen am va %d phu am\n", s, nguyenAm, phuAm);
    return 0;
}