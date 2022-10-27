#include<iostream>
#define LEN (12);
using namespace std;
//指针常量和常量指针
//指针常量: int* const p=&a;  指针(地址)本身不可以修改，即指向哪个对象不能改，但指向的那个对象的值可以改变
//常量指针：const int* p=&a;  指针指向的区域内容不能被修改，但是可以改变指向的对象，可以换对象，但指向谁谁就不能改
//通常用于函数的参数，增强程序的健壮性


//引用就是外号
//形式：goto Line18


//结构体:描述一个复杂的对象，可以汇集不同数据类型的变量
//形式：goto Line16

//联合：一种特殊的结构，一个联合中的数据成员在内存中共享一片内存单元
//形式：goto Line
struct StuGrade 
{
    float number1;//学生成绩
    int rank;//学生成绩排名
}s1={8.02,6};

struct Stu
{
    char name[20];
    char number2[13];
    float grade;

}s2{"lyn","220221090214",95.00};

union exam{
    int a;
    double b;
    char c;
}x={2};



int main(){
    const int locked[4]={1,2,3,4};
//  int* p=locked;//这样会报错，因为locked是常量数组，不能改了,而指针指向他就是想对那个内存单元操作
   
    const int* p2=locked;//但如果非要指向他，也可以，只是这样只能指向或者读取，不能修改了
    int a=10;
    int b=10;
    int &i=a;//引用就是外号，对i操作就是对a操作，i和a是同一个地址
    i=5;
    i=b;

    cout<<s1.number1<<endl;
    cout<<sizeof(s1)<<endl;
    cout<<sizeof(StuGrade)<<endl;
    cout<<s2.name;
 
 cout<<x.a;


    system("pause");
    return 0;
}