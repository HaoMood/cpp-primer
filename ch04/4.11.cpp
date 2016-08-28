#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int a = 3.90 + 4.33;
    cout << a << endl;

    void *pv;
    char *pc = static_cast<char *>(pv);
    return 0;
}
