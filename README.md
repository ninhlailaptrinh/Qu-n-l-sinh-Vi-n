# Quản Lý Sinh Viên
Một chương trình quản lý sinh viên đơn giản được viết bằng ngôn ngữ C.

## Tính năng
- Thêm sinh viên mới
- Xóa sinh viên
- Sửa thông tin sinh viên
- Tìm kiếm sinh viên theo MSSV
- Hiển thị danh sách sinh viên
- Sắp xếp sinh viên theo điểm trung bình
- Lưu và đọc dữ liệu từ file


## Yêu cầu hệ thống
- GCC Compiler
- Hệ điều hành: Linux/Windows/MacOS

## Hướng dẫn cài đặt và sử dụng
1. Clone repository:
```bash
git clone https://github.com/ninhlailaptrinh/Quan_Li_Sinh_Vien.git
```

2. Biên dịch chương trình:
```bash
gcc main.c -o student_management
```

3. Chạy chương trình:
```bash
./student_management
```

## Cách sử dụng
1. Menu chính sẽ hiển thị các lựa chọn:
   - 1: Thêm sinh viên
   - 2: Xóa sinh viên
   - 3: Sửa thông tin
   - 4: Tìm kiếm
   - 5: Hiển thị danh sách
   - 6: Sắp xếp
   - 0: Thoát
2. Nhập số tương ứng với chức năng muốn sử dụng

## Người đóng góp
-@ninhlailaptrinh , 

## Giấy phép
Dự án này được phân phối dưới giấy phép MIT. Xem file `LICENSE` để biết thêm chi tiết.

## Liên hệ
- Email: ninhlailaptrinh@gmail.com
- GitHub: @ninhlailaptrinh

## Ghi chú
- Dữ liệu được tự động lưu vào file sau mỗi thao tác
- Mã số sinh viên không được trùng lặp
- Điểm trung bình trong khoảng 0-10
