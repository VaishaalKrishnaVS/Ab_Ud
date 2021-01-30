#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hi name is Vaishaal Krishna";
    int vow = 0, con = 0, sp = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vow++;
        else if (str[i] == ' ')
            sp++;
        else
            con++;
    }
    cout << "Vowels " << vow << endl;
    cout << "Consonents " << con << endl;
    cout << "Words " << sp + 1 << endl;

    return 0;
}