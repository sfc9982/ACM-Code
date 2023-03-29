#include <cstdio>
#include <iostream>

using namespace std;


int main()
{
    int KEY[] = {180, 136, 137, 147, 191, 137, 147, 191, 148, 136, 133, 191, 134, 140, 129, 135, 191, 65};
    char ans[20];

    for (int i = 0; i <= 17; i++)
    {
        ans[i] = (char) ((KEY[i] ^ 0x20) - 64);
    }
    cout << ans << endl;
    
    return 0;
}