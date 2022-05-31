#include <iostream>
using namespace std;

/*
    >> は行バッファ (Enter キーを押すまで入力情報は渡されない)
*/

int main()
{
    char ch;

    cout << "Enter keys, x to stop.\n";
    do {
        //--- 複数文字を一気に入力するとその分ループが回る
        cout << ": ";
        cin >> ch;
        cout << "Your input: " << ch << "\n";
    } while (ch != 'x');

    return 0;
}
