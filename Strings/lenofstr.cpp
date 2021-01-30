#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tot = 0;
    string str;
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        tot++;
    }
    cout << tot << endl;

    int total = 0;
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        total++;
    }
    cout << total << endl;

    return 0;
}