#include <iostream>
#include <set> // Thu vien set de luu cac phan tu khong trung lap
using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    while (true)
    {
        cin >> n;
        if (cin.fail() || n <= 0) // Kiem tra loi nhap hoac n <= 0
        {
            cin.clear(); // Xoa trang thai loi
            cin.ignore(1000, '\n'); // Xoa bo dem nhap
            cout << "Nhap lai so luong phan tu: ";
        }
        else
            break; // Nhap dung thi thoat vong lap
    }

    set<int> s; // Khai bao set de luu cac gia tri khac nhau

    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x); // Them phan tu vao set (tu dong loai bo gia tri trung lap)
    }

    // In ra so luong gia tri phan biet
    cout << "So luong gia tri phan biet trong mang la: " << s.size() << endl;

    return 0;
}
