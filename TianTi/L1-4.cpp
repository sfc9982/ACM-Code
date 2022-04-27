#include <iostream>
using namespace std;
int main()
{
    int n;
    int sex, height, weight;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> sex >> height >> weight;
        if (sex)
        {
            if (height > 130)
                cout << "ni li hai!"
                     << " ";
            else if (height < 130)
                cout << "duo chi yu!"
                     << " ";
            else
                cout << "wan mei!"
                     << " ";
            if (weight > 27)
                cout << "shao chi rou!";
            else if (weight < 27)
                cout << "duo chi rou!";
            else
                cout << "wan mei!";
        }
        else
        {
            if (height > 129)
                cout << "ni li hai!"
                     << " ";
            else if (height < 129)
                cout << "duo chi yu!"
                     << " ";
            else
                cout << "wan mei!"
                     << " ";
            if (weight > 25)
                cout << "shao chi rou!";
            else if (weight < 25)
                cout << "duo chi rou!";
            else
                cout << "wan mei!";
        }
        cout << endl;
    }
    return 0;
}