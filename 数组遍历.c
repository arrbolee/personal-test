#include <stdio.h>
#include <windows.h>//terminal输出中文乱码的解决
int main(){
    SetConsoleOutputCP(65001);//terminal输出中文乱码的解决

    int a[10]={3,32,45,12,56,67,77,86,1,343};/*定义并初始化*/
    int max=a[0];/*定义并初始化*/
    int min=a[0];
    int sum=0;
    for(int i=0;i<10;i++){//for函数体的运用；（初始化；条件；执行）
        if(a[i]>max){//函数体内的分支结构
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
        sum+=a[i];
    }
    double ave=(double)sum/10;//格式的强制转换，不然会截断
    printf("最大值为%d,最小值为%d,平均值为%.2f.",max,min,ave);
}