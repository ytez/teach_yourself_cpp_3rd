#include <iostream>
using namespace std;

/*
    >> �͍s�o�b�t�@ (Enter �L�[�������܂œ��͏��͓n����Ȃ�)
*/

int main()
{
    char ch;

    cout << "Enter keys, x to stop.\n";
    do {
        //--- ������������C�ɓ��͂���Ƃ��̕����[�v�����
        cout << ": ";
        cin >> ch;
        cout << "Your input: " << ch << "\n";
    } while (ch != 'x');

    return 0;
}
