#include <iostream>
using namespace std;

// Ham de quy tinh so Fibonacci thu n
int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1; // F(1) va F(2) deu bang 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Cong hai so Fibonacci lien truoc
}

int main()
{
    int n;
    cout << "Nhap n: ";
    while (true)
    {
        cin >> n;
        if (cin.fail() || n <= 0 || n >= 30) // Kiem tra n hop le (1 <= n < 30)
        {
            cin.clear(); // Xoa trang thai loi
            cin.ignore(1000, '\n'); // Xoa bo dem nhap
            cout << "Gia tri khong hop le! Vui long nhap lai n (1 <= n < 30): ";
        }
        else
            break; // Nhap dung thi thoat vong lap
    }

    // In cac so Fibonacci tu F(1) den F(n)
    cout << "Cac so Fibonacci tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "F(" << i << ") = " << fibonacci(i) << endl; // In gia tri Fibonacci thu i
    }

    return 0;
}
