#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    bitset<64> bit;
    int64_t x;
    while (cin >> x)
    {
        bit = x;
        if (x > 0)
        {
            string s = bit.to_string();
            cout << s.erase(0, s.find_first_not_of('0')) << endl;
        } else
            cout << x << endl;
    }
    return 0;
}