#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "today";

    string::iterator it;

    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << endl;
    }

    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it << endl;
        *it = *it - 32;
    }
    cout << str << endl;

    string::reverse_iterator ti;
    for (ti = str.rbegin(); ti != str.rend(); ti++)
    {
        cout << *ti << endl;
    }
    return 0;
}