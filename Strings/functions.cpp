#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char s[50] = "hello world";
    cout << strlen(s) << endl;

    char s1[20] = "good ";
    char s2[20] = "morning";
    cout << strcat(s1, s2) << endl;

    if (strstr(s1, s2) != NULL)
    {
        cout << strstr(s1, s2) << endl;
    }
    else
        cout << "not found" << endl;

    cout << strchr(s1, 'o') << endl;
    cout << strrchr(s1, 'o') << endl;

    cout << strcmp(s1, s2) << endl;

    char s3[10] = "123";
    char s4[10] = "12.543";

    long int x = strtol(s3, NULL, 10);
    float y = strtof(s4, NULL);
    cout << x + 10 << endl
         << y - 1 << endl;

    char s5[20] = "x=10;y=20;z=30";
    char *token = strtok(s5, "=;");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "=;");
    }

    return 0;
}