#include <iostream>

int main() {
    // Khai báo biến
    int a, b, sum;

    // Nhập giá trị của hai số từ người dùng
    std::cout << "Nhập số thứ nhất: ";
    std::cin >> a;

    std::cout << "Nhập số thứ hai: ";
    std::cin >> b;

    // Tính tổng
    sum = a + b;

    // Hiển thị tổng
    std::cout << "Tổng của hai số là: " << sum << std::endl;

    return 0;
}