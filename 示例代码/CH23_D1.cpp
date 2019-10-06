#include <stdio.h>

class Base
{
public:
     void Test()
    {
        printf("father\n");
    }
};

class Child : public Base
{
public:
    void Test()
    {
        printf("child\n");
    }
};

int main()
{
    Base* p = new Child;
    p->Test();
    return 0;
}
