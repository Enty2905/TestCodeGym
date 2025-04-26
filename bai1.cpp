#include <iostream>
using namespace std;

// Ham kiem tra so nguyen to
bool laSoNguyenTo(int num) {
    if (num < 2) return false; // So nho hon 2 khong phai so nguyen to
    for (int i = 2; i * i <= num; i++) { // Kiem tra uoc tu 2 den can bac 2 cua num
        if (num % i == 0) return false; // Neu chia het thi khong phai so nguyen to
    }
    return true; // Neu khong co uoc nao thi la so nguyen to
}

int main()
{
    //Khai bao va nhap n
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    if (n <= 2)
    {
        cout << "Khong co so nguyen to"; // Neu n <= 2 thi khong co so nguyen to
    }
    else
    {
        // Duyet tu 2 den n-1 de in ra cac so nguyen to
        for (int i = 2; i < n; i++)
        {
            if (laSoNguyenTo(i))
            {
                cout << i << " "; // In ra so nguyen to
            }
        }
    }
    
    return 0;
}
