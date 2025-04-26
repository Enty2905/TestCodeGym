#include <iostream>
#include <iomanip> // Dung de can chinh do rong in ra cho dep
using namespace std;

// Khai bao cau truc SinhVien
struct SinhVien {
    string ten;
    float toan;
    float ly;
    float hoa;
    float diemTB;
};

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    while (true)
    {
        cin >> n;
        if (cin.fail() || n <= 0) // Kiem tra n co hop le khong
        {
            cin.clear(); // Xoa trang thai loi
            cin.ignore(1000, '\n'); // Bo ki tu rac
            cout << "Nhap lai so luong sinh vien: ";
        }
        else
            break; // Neu dung thi thoat vong lap
    }

    SinhVien sv[n]; // Khai bao mang sinh vien co n phan tu

    // Nhap thong tin cho tung sinh vien
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        cin.ignore(); // Xoa bo dem truoc khi nhap chuoi
        cout << "Ten: ";
        getline(cin, sv[i].ten); // Nhap ho ten

        cout << "Diem Toan: ";
        cin >> sv[i].toan;

        cout << "Diem Ly: ";
        cin >> sv[i].ly;

        cout << "Diem Hoa: ";
        cin >> sv[i].hoa;

        // Tinh diem trung binh
        sv[i].diemTB = (sv[i].toan + sv[i].ly + sv[i].hoa) / 3;
    }

    // In danh sach sinh vien co diem trung binh >= 8
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    cout << left << setw(20) << "Ten" << setw(10) << "Toan" << setw(10) << "Ly" << setw(10) << "Hoa" << setw(10) << "DTB" << endl;
    
    bool found = false; // Bien danh dau co sinh vien nao thoa man khong
    for (int i = 0; i < n; i++)
    {
        if (sv[i].diemTB >= 8.0)
        {
            // In thong tin sinh vien
            cout << left << setw(20) << sv[i].ten
                 << setw(10) << sv[i].toan
                 << setw(10) << sv[i].ly
                 << setw(10) << sv[i].hoa
                 << setw(10) << fixed << setprecision(2) << sv[i].diemTB
                 << endl;
            found = true;
        }
    }

    if (!found)
    {
        // Neu khong co sinh vien nao diem >= 8
        cout << "Khong co sinh vien nao co diem trung binh >= 8.\n";
    }

    return 0;
}
