#include <iostream>
#include <string>
using namespace std;


#define example 4

#if example == 0
int a = 0;

void function(void);

int main()
{
    int b = 0;
    cout << a << endl;
    if(true)
    {
        int b = 10;
        cout << b << endl;
    }
    cout << b << endl;

    function();

    system("pause");
}

void function()
{
    int a = 10;
    cout << a << endl;
}


#elif example == 1

namespace People{
    int age = 0;
    struct man
    {
        int age = 23;
        string hobby = "runnung";
    };
}

int age = 1;
using namespace People;
int main()
{
    
    int age = 2;
    man Xuhua;
    Xuhua.age = 3;

    //在代码块中局部声明的变量会将在命名空间下声明的同名变量和全局声明的同名变量隐藏。
    cout << People::age <<endl;
    cout << ::age <<endl;
    cout << age << endl;
    cout << Xuhua.age << endl;

    system("pause");
}

int Student()
{
    //man XiaoMing; //using编译指令在main中使用，则该文件的其他函数不能使用该命名空间
    People::man DaMing;

}


#elif example == 2

namespace People{
    int age  =23;
}
namespace Cat{
    int age = 3;
}

int main()
{
    /* 
        using 编译指令
        能访问命名空间中所有标识符，容易造成冲突，不建议使用
    */
    using namespace People;
    cout << age << endl;

    /*
        using声明
        访问命名空间中特定的标识符
    */
    using Cat::age;
    cout << age << endl;

    system("pause");

}

#elif example == 3
/*----------------------------------*/
/*         命名空间的嵌套使用        */
/*----------------------------------*/
void Fun1(void);
void Fun2(void);
void Fun3(void);

namespace People{
    int age = 23;
    namespace Student{
        int age = 12;
    } 
}

namespace myth{
    using namespace People;
}


int main()
{
    Fun1(); //23
    Fun2(); //12
    Fun3(); //12

    system("pause");
}
// 命名空间中使用using编译指令
void Fun1()
{
    using namespace myth;
    cout << age << endl;
}
// 嵌套命名空间能使用using编译指令获得子命名空间
void Fun2()
{
    using namespace People::Student;
    cout << age << endl;
}
// 嵌套命名空间能使用using声明获取子命名空间特定的标识符
void Fun3()
{
    using People::Student::age;
    cout << age << endl;
}


#elif example == 4
/*----------------------------------*/
/*         未命名的命名空间        */
/*----------------------------------*/

static int age = 10;

//未命名的命名空间等价于命名空间的定义+using编译指令，也就是作用域从声明点到该声明区域末尾;变量类型相当于static storage
namespace
{
    int age_ = 40;
}

int main()
{
    age  = 20;
    cout << age << endl;
    cout << age_ << endl;

    system("pause");
}

#endif





