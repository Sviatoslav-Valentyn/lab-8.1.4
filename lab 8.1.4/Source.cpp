#include <iostream>
#include <string>
using namespace std;

bool Search(string str)
{
    if (str.find("SQ") != -1 || str.find("QS") != -1)
        return 1;
    else
        return 0;
}
string Replace(string& str)
{
    while (str.find("SQ") != -1)
        str = str.replace(str.find("SQ"), 2, "***");
    while (str.find("QS") != -1)
        str = str.replace(str.find("QS"), 2, "***");

    return str;
}
int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    if (Search(str))
    {
        cout << "yes" << endl;
        cout << Replace(str);
    }
    else
        cout << "no" << endl;
    cout << endl;
}