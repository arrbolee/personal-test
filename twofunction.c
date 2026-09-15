#include <stdio.h>
void butler(void);//自定义函数要在main函数之前，声明函数
int main()//函数1开始

{
    printf("i will summon the butler function .\n");
    butler();/*函数2跳转*/
    printf("yes,bring me some tea and writeable.");
}
void butler(void)//函数2定义
{
    printf("you rang,sir?\n");
}//执行完毕返回结果