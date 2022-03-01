#include "NumberList.h"
int main()
{
    NumberList Obj;
    Obj.Init();
    Obj.Add(110);
    Obj.Add(15);
    Obj.Print();
    Obj.Add(2);
    Obj.Print();
    Obj.Sort();
    Obj.Print();
    return 0;
}