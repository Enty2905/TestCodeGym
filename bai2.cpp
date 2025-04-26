#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Nhap so luong phan tu: ";
    while (true)
    {
        cin >> n;

        if (cin.fail() || n <= 0) // Kiem tra nhap sai kieu du lieu hoac n <= 0
        {
            cin.clear();           // Xoa trang thai loi
            cin.ignore(1000, '\n'); // Bo qua ki tu rac trong bo dem
            cout << "Gia tri khong hop le! Vui long nhap lai so luong phan tu: ";
        }
        else
        {
            break; // Nhap dung roi thi thoat vong lap
        }
    }

    int arr[n]; // Khai bao mang n phan tu

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        while (true)
        {
            cin >> arr[i];

            if (cin.fail() || arr[i] <= 0) // Kiem tra phan tu <=0 hoac nhap sai
            {
                cin.clear();           
                cin.ignore(1000, '\n'); 
                cout << "Gia tri khong hop le! Nhap lai phan tu thu " << i + 1 << ": ";
            }
            else
            {
                break; // Nhap dung thi thoat vong lap
            }
        }
    }

    int maxDiv3 = -1; // Gia tri lon nhat chia het cho 3, khoi tao bang -1

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0) // Neu phan tu chia het cho 3
        {
            if (arr[i] > maxDiv3) // Va lon hon maxDiv3 hien tai
            {
                maxDiv3 = arr[i]; // Cap nhat maxDiv3
            }
        }
    }

    if (maxDiv3 == -1)
    {
        cout << "Khong co so nao chia het cho 3 trong mang."; // Neu khong co phan tu chia het cho 3
    }
    else
    {
        cout << "So lon nhat chia het cho 3 la: " << maxDiv3; // In ra so lon nhat chia het cho 3
    }

    return 0;
}
