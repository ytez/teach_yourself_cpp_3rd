#include <iostream>
using namespace std;

/*
    複数のユーザ入力を一括で読み込んでみる
*/

int main()
{
    int i;
    float f;
    char s[80];

    cout << "Enter a integer, float, and string: ";
    //--- 整数，浮動小数点数，文字列を一気に読み込む
    cin >> i >> f >> s;
    cout << "Your inputs: " << i << ' ' << f << ' ' << s;

    return 0;
}
