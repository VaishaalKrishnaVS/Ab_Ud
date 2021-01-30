#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = "Hello";

    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.capacity() << endl;
    str.resize(50);
    cout << str.max_size() << endl;
    //str.clear();
    //str.erase()

    if (str.empty())
    {
        cout << "It is empty" << endl;
    }
    else
    {
        cout << str;
    }

    cout << str.append(" World") << endl;
    cout << str.insert(5, ", Hi") << endl;
    cout << str.replace(3, 6, "R") << endl;
    str.push_back('c');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    string str1 = "programming";
    string str2 = "language";
    str1.swap(str2);
    cout << str1 << endl;
    cout << str2 << endl;

    string s = "Welcome";
    char stri[10];
    s.copy(stri, s.length());
    cout << stri << endl;
    s.copy(stri, 3);
    stri[3] = '\0';

    string stre = "how are you";
    cout << stre.find("are") << endl;
    cout << stre.find("is") << endl;
    cout << stre.find("o") << endl;
    cout << stre.rfind("o") << endl;

    string strw = "Hello world";
    cout << strw.find_first_of('l');
    cout << strw.find_first_of('l', 5);
    cout << strw.find_first_of('le');
    cout << strw.find_last_of('l');

    string stry = "programming";
    cout << stry.substr(3, 4) << endl;
    return 0;
}