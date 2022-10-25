#include<iostream>
using namespace std;
const int ARR_LENGTH = 3;

//以下为声明：
void sum(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]);
void jianfa(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]);
void chengfa(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]);
void menu();
void inputarr(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]);

//以下为实现：
//菜单
void menu(){
    cout<<"    请选择计算类型:<   "<<endl;
    cout<<"    1.矩阵加法        " <<endl;
    cout<<"    2.矩阵减法        " <<endl;
    cout<<"    3.矩阵乘法        " <<endl;
    cout<<"    0.退出计算器      " <<endl;
    }
//加和的
void sum(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]){
    cout<<"-----------"<<endl;
    for (size_t i = 0; i < ARR_LENGTH; i++)
    {
        for(size_t j=0;j<ARR_LENGTH;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for (size_t i = 0; i < ARR_LENGTH; i++)
    {
        for(size_t j=0;j<ARR_LENGTH;j++){
            cout<<arr3[i][j]<< ' ';
        }
        cout<<endl;
    }
    cout<<"-----------"<<endl;
}
//相减的
void jianfa(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]){
    cout<<"-----------"<<endl;
    for (size_t i = 0; i < ARR_LENGTH; i++)
    {
        for(size_t j=0;j<ARR_LENGTH;j++){
            arr3[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    for (size_t i = 0; i < ARR_LENGTH; i++)
    {
        for(size_t j=0;j<ARR_LENGTH;j++){
            cout<<arr3[i][j]<< ' ';
        }
        cout<<endl;
    }
    cout<<"-----------"<<endl;
}
//相乘的
void chengfa(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]){
    cout<<"-----------"<<endl;
    ;
    cout<<"-----------"<<endl;
}
//输入矩阵
void inputarr(int arr1[][ARR_LENGTH],int arr2[][ARR_LENGTH],int arr3[][ARR_LENGTH]){
    cout<<"请输入第一个矩阵：<\n";
      for (size_t i = 0; i <ARR_LENGTH; i++)
      {
          for(int j=0;j<ARR_LENGTH;j++){
            cin>>arr1[i][j];
          }
      }
    cout<<"请输入第二个矩阵:<\n";
    for (size_t i = 0; i < ARR_LENGTH; i++)
    {
        for(size_t j=0;j<ARR_LENGTH;j++){
            cin>>arr2[i][j];
        }
    }
}