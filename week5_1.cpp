#include <bits/stdc++.h>
using namespace std;
// nhap n nguyen duong, thuc hien phan tich n thanh cac thua so nguyen to

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    for (auto it : mp)
    {
        cout << it.first << "^" << it.second << "\n";
    }
    system("pause");
    return 0;
}
