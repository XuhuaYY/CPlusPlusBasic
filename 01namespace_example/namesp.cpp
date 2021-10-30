#include "namesp.hpp"

using std::cout;
using std::cin;
using std::endl;


namespace Per{
    void getName(People & people)
    {
        cout << "please input the first name of people!" << endl;
        cin >> people.firstName;
        cout << "then input the last name of people!" << endl;
        cin >> people.lastName;
    }

    void showName(const People & people)
    {
        cout << people.lastName << ' ' << people.firstName << endl;
    }
}

namespace Mon{
    void getAmount(Money & permoney)
    {
        getName(permoney.pername);
        cout << "please input the money of your debt" << endl;
        cin >> permoney.debt;
    }

    void showAmount(const Money & permoney)
    {
        showName(permoney.pername);
        cout << permoney.debt << endl;
    }

    int countDebt(const Money ar[], int n)
    {
        int i = 0;
        int total = 0;
        for(i=0; i<n; i++)
        {
            total += ar[i].debt;
        }
        return total;
    }
}


