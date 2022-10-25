#include <iostream>
#include"accumulate.h"
using namespace std;
 //#define   Max_ARR_LENGTH (3)//这个常用，是直接替换，没有体现数据类型
//const ARR_LENGTH = 3;//这个可以体现数据类型
/* int Arr[Max_ARR_LENGTH]={1,2,3};//一维数组
int Arr2[Max_ARR_LENGTH][Max_ARR_LENGTH];//二维数组
int Arr3[Max_ARR_LENGTH][Max_ARR_LENGTH]{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};///二维数组初始化  */

//课上笔记：
//引用：引用是给已知变量起一个别名
//
//
//
int main()
{
    int arr1[ARR_LENGTH][ARR_LENGTH]={0};
    int arr2[ARR_LENGTH][ARR_LENGTH]={0};
    int arr3[ARR_LENGTH][ARR_LENGTH]={0};
    int input=0;
    do{
      menu();
      cin>>input;
      switch (input)
      {
      case 1:
        inputarr(arr1,arr2,arr3);
        sum(arr1,arr2,arr3);
        break;
      case 2:
        inputarr(arr1,arr2,arr3);
        jianfa(arr1,arr2,arr3);
        break;
      case 3:
        inputarr(arr1,arr2,arr3);
        chengfa(arr1,arr2,arr3);
        break;
      case 0:
        cout<<"退出成功";
        break;
      default:
        cout<<"输入错误，请重试";
        break;  
      }
    }while(input);
    return 0;
}