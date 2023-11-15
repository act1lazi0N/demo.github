#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand((int)time(0)); // time(0): Trả về thời gian hiện tại của hệ thống, tính từ thời điểm ngày 1 tháng 1 năm 1970
                         // srand(): cung cấp seed cho bộ sinh ngẫu nhiên được sử dụng bởi hàm rand
    int maxAtp = 5;
    cout << "Chao mung den voi tua game doan so! Ban co 5 luot trong tay. Viec cua ban la doan xem so ngau nhien do!\n";
    do
    {
        int ran = rand() % 100 + 1;
        int atp = 0;
        int guess;
        bool dung = 0;
        while (atp < maxAtp)
        {
            while (true)
            {
                cout << "Nhap so tu 1 den 100: ";
                cin >> guess;
                if (guess < 1 || guess > 100)
                {
                    cout << "Nhap trong khoang tu 1 den 100!\n";
                }
                else
                {
                    break;
                }
            }
            atp++;
            if (guess < ran)
            {
                cout << "Chua chinh xac! Ban doan nho hon so may sinh ra\n";
            }
            else if (guess > ran)
            {
                cout << "Chua chinh xac! Ban doan lon hon so may sinh ra\n";
            }
            else
            {
                cout << "Ban da chien thang trong " << atp << " luot!\n";
                bool dung = 1;
                break;
            }
            if (atp < maxAtp)
            {
                cout << "Ban con " << maxAtp - atp << " lan choi nua! ";
            }
            else
            {
                cout << "Ban chua chien thang trong lan choi nay. So may can doan la: " << ran << '\n';
            }
        }

        char choilai;
        cout << "Ban co muon tiep tuc choi nua khong? (Y/N): ";
        cin >> choilai;

        if (choilai != 'y' && choilai != 'Y')
        {
            break; // nếu nhập khác "Y" thì trò chơi kết thúc do đã dừng lại vòng lặp
        }
    } while (1); // loop vô tận cho đến khi đến cuối người chơi đòi thoát ra và chương trình dừng lại không lặp lại
    cout << "Cam on va hen gap lai!\n"
         << "San pham cua N_H_M\n";
    system("pause");
    return 0;
}
