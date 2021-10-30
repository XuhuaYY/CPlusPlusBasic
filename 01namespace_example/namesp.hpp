#include <iostream>
using std::string;

namespace Per
{
    struct People{
        string firstName;
        string lastName;
    };

    void getName(People &);
    void showName(const People &);
}

namespace Mon
{
    using namespace Per;
    struct Money{
        People pername;
        double debt;
    };

    void getAmount(Money &);
    void showAmount(const Money &);
    int countDebt(const Money ar[], int n);
}

