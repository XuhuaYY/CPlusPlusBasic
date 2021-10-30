#include <iostream>
#include "namesp.hpp"

using Mon::Money;
using Mon::showAmount;

void Fun1(void);
void Fun2(void);


int main()
{
    Money xuhua = {{"Li", "Xuhua"}, 600};
    showAmount(xuhua);

    Fun1();
    Fun2();
    system("pause");
    

}

void Fun1(void)
{
    using std::cout;
    using std::endl;
    using namespace Mon;
    Money arr[3];
    int i = 0;
    for(i=0; i<3; i++)
    {
        getAmount(arr[i]);
    }
    for(i=0; i<3; i++)
    {
        showAmount(arr[i]);
    }
    cout << countDebt(arr, 3) << endl;
}

void Fun2(void)
{
    using namespace Per;
    People QPing = {"qw", "ping"};
    showName(QPing);
}