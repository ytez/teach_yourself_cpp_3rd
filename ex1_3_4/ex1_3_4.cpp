#include <iostream>
using namespace std;

/*
    �����̃��[�U���͂��ꊇ�œǂݍ���ł݂�
*/

int main()
{
    int i;
    float f;
    char s[80];

    cout << "Enter a integer, float, and string: ";
    //--- �����C���������_���C���������C�ɓǂݍ���
    cin >> i >> f >> s;
    cout << "Your inputs: " << i << ' ' << f << ' ' << s;

    return 0;
}
