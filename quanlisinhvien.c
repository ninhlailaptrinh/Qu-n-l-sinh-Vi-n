#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
    unsigned char ngay;
    unsigned char thang;
    unsigned int nam;
};

struct sinhVien {
    char maSv[20];
    char hoTen[35];
    struct date ngayTN;
    char lop[10];
    char Nganh[30];
    float diemTB;
    char queQuan[50];
    char soDT[15];
    char email[50];
    float diemRL;         // Điểm rèn luyện
    int soTinChi;        // Số tín chỉ đã đạt
    char trangThai[20];  // Đang học/Bảo lưu/Đã tốt nghiệp
    float hocPhi;        // Học phí còn nợ
};

// === NHÓM CHỨC NĂNG CƠ BẢN ===
void nhapSinhVien(struct sinhVien *sv);
void xuatSinhVien(struct sinhVien sv);
void nhapDanhSach(struct sinhVien ds[], int *n);
void xuatDanhSach(struct sinhVien ds[], int n);

// === NHÓM CHỨC NĂNG HỌC TẬP ===
void capNhatDiemRL(struct sinhVien ds[], int n, char maSV[]);
void capNhatTinChi(struct sinhVien ds[], int n, char maSV[]);
void capNhatHocPhi(struct sinhVien ds[], int n, char maSV[]);
void danhSachNoCuocHocPhi(struct sinhVien ds[], int n);
void danhSachSVDuDieuKienTN(struct sinhVien ds[], int n);

// === NHÓM CHỨC NĂNG THỐNG KÊ MỞ RỘNG ===
void thongKeSVTheoKhoaHoc(struct sinhVien ds[], int n);
void thongKeSVTheoHocLuc(struct sinhVien ds[], int n);
void thongKeSVTheoTrangThai(struct sinhVien ds[], int n);
void bangDiemTongHop(struct sinhVien ds[], int n, char maSV[]);
void thongKeHocPhi(struct sinhVien ds[], int n);

// === NHÓM CHỨC NĂNG QUẢN LÝ LỚP HỌC ===
void danhSachLopTruong(struct sinhVien ds[], int n);
void phanCongLopTruong(struct sinhVien ds[], int n, char maSV[]);
void danhSachSVTheoDoiTuong(struct sinhVien ds[], int n);
void capNhatThongTinLop(struct sinhVien ds[], int n, char lop[]);

// === NHÓM CHỨC NĂNG BÁO CÁO ===
void xuatBaoCaoTongHop(struct sinhVien ds[], int n);
void xuatDanhSachTheoDiem(struct sinhVien ds[], int n, float diemMin);
void thongKeSVBiCanhBao(struct sinhVien ds[], int n);
void danhSachSVDatHocBong(struct sinhVien ds[], int n);

// === NHÓM CHỨC NĂNG TIỆN ÍCH MỞ RỘNG ===
void xuatTheoDiaChi(struct sinhVien ds[], int n, char tinh[]);
void timKiemNangCao(struct sinhVien ds[], int n);
void sapXepDaChieuSV(struct sinhVien ds[], int n);
void thongKeTheoNhieuTieuChi(struct sinhVien ds[], int n);

int main() {
    struct sinhVien dsSV[100];
    int soLuong = 0;
    int luaChon, luaChonPhu;
    char maTemp[20], tenTemp[35], lopTemp[10];
    
    do {
        puts("\n=== CHUONG TRINH QUAN LY SINH VIEN ===");
        puts("1. Quan ly ho so sinh vien");
        puts("2. Quan ly hoc tap");
        puts("3. Quan ly hoc phi");
        puts("4. Thong ke - Bao cao");
        puts("5. Quan ly lop hoc");
        puts("6. Tien ich mo rong");
        puts("7. Quan ly du lieu");
        puts("0. Thoat");
        puts("Nhap lua chon cua ban: ");
        
        scanf("%d", &luaChon);
        
        switch(luaChon) {
            case 1: // Quản lý hồ sơ
                puts("1. Them sinh vien moi");
                puts("2. Cap nhat thong tin");
                puts("3. Xoa sinh vien");
                puts("4. Tim kiem sinh vien");
                puts("5. Xuat danh sach");
                // Xử lý lựa chọn...
                break;
                
            case 2: // Quản lý học tập
                puts("1. Cap nhat diem ren luyen");
                puts("2. Cap nhat tin chi");
                puts("3. Xem bang diem");
                puts("4. Danh sach canh bao hoc tap");
                puts("5. Danh sach du dieu kien tot nghiep");
                // Xử lý lựa chọn...
                break;
                
            case 3: // Quản lý học phí
                puts("1. Cap nhat hoc phi");
                puts("2. Danh sach no hoc phi");
                puts("3. Thong ke thu hoc phi");
                // Xử lý lựa chọn...
                break;
                
            case 4: // Thống kê - Báo cáo
                puts("1. Thong ke theo khoa");
                puts("2. Thong ke theo hoc luc");
                puts("3. Bao cao tong hop");
                puts("4. Danh sach hoc bong");
                // Xử lý lựa chọn...
                break;
                
            case 5: // Quản lý lớp học
                puts("1. Phan cong lop truong");
                puts("2. Cap nhat thong tin lop");
                puts("3. Danh sach theo doi tuong");
                // Xử lý lựa chọn...
                break;
                
            case 6: // Tiện ích
                puts("1. Tim kiem nang cao");
                puts("2. Sap xep da tieu chi");
                puts("3. Thong ke da chieu");
                // Xử lý lựa chọn...
                break;
                
            case 7: // Quản lý dữ liệu
                puts("1. Sao luu du lieu");
                puts("2. Phuc hoi du lieu");
                puts("3. Xuat bao cao");
                // Xử lý lựa chọn...
                break;
        }
    } while(luaChon != 0);
    
    return 0;
}
