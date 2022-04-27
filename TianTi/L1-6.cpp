#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string s;
    char alpha_lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char alpha_upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int T;
    cin >> T;
    while (T--)
    {
        cin >> s;
        int n = s.size();
        if (n == 0)
        {
            cout << "N" << endl;
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (isupper(s[i]))
            {
                if (s[i + 1] != tolower(s[i]) && s[i + 1] != toupper(alpha_upper[((s[i] - 'A') + 27) % 26]))
                {
                    cout << "N" << endl;
                    goto end;
                }
            }
            else if (islower(s[i]))
            {
                if (s[i + 1] != toupper(s[i]) && s[i + 1] != tolower(alpha_lower[((s[i] - 'a') + 25) % 26]))
                {
                    cout << "N" << endl;
                    goto end;
                }
            }
        }
        cout << "Y" << endl;
    end:;
    }
    return 0;
}