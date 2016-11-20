#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int w;
    cin >> w;
    cin.ignore();
    int h;
    cin >> h;
    cin.ignore();
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    vector< string > v;
    for (int i = 0; i < h; i++)
    {
        string row;
        getline(cin, row);
        v.push_back(row);

    }

    for (int i = 0; i < h; i++)
    {
        for (int k = 0; k < s.length(); k++)
        {
            int litera = ((int)s[k]) - 64;
            if (litera <= 0 || litera > 26)
            {
                litera = 27;
            }

            for (int m = 0; m < w; m++)
            {
                cout << (v[i])[((litera - 1)*w)+m];
            }
        }
        cout << endl;
    }

    return 0;
}
