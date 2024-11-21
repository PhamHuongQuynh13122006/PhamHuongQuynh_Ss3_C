// B1 : khai bao thu vien chuan trong C
#include <stdio.h>

// khai bao ham main de thuc thi chuong trinh
int main() {
// khai bao bien voi kieu du lieu so nguyen 
    int number, sum = 0;
// B2 : Moi nguoi dung nhap 1 so nguyen co 4 chu so vao ban phim  
    printf("Moi ban nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);
// B3 : kiem tra dieu kien vong lap phu hop de the hien ket qua
    if (number < 1000 || number > 9999) {
        printf("So nhap khong hop le!\n");
        return 1;
// the hien chuong trinh co loi va khong thuc thi thanh cong
    }
    
    while (number != 0) {
        sum += number % 10;
        // dung toan tu gan nay de tang gia tri cua bien sum len
        number /= 10;
    }
//B4 : in ra ket qua   
    printf("Tong cac chu so la: %d\n", sum);
//the hien chuong trinh khong co loi va thuc thi thanh cong
    return 0;
}
