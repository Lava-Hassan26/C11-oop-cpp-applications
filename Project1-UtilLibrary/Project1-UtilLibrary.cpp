#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{
    clsUtil::Srand();
    cout << clsUtil::GetRandomNumber(1, 100) << endl;
    cout << clsUtil::GetRandomCharacter(clsUtil::enCharType::Mix) << endl;
    clsUtil::GenerateKeys(10);
    return 0;
}