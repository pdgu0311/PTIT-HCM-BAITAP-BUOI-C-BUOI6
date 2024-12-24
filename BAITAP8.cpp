#include <stdio.h>
#include <math.h>

int main() {
    float soTienBanDau, laiSuatThang, soThangGui;
    float tongTien, tienLai;

    printf("Nhap so tien ban dau: ");
    scanf("%f", &soTienBanDau);
    printf("Nhap lai suat thang (%%): ");
    scanf("%f", &laiSuatThang);
    printf("Nhap so thang gui: ");
    scanf("%f", &soThangGui);

    tongTien = soTienBanDau * pow(1 + laiSuatThang / 100, soThangGui);

    tienLai = tongTien - soTienBanDau;

    printf("Tien lai: %.3f\n", tienLai);
    printf("Tien nhan duoc: %.3f\n", tongTien);

    return 0;
}

