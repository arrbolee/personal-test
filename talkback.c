#include <stdio.h>
#include <string.h>//这里出现了目前所学第二个预处理指令，用来处理字符
#define density 62.4 /*1.这里定义了一个常量，这种形式下只能在宏名与值之间空格不能用等号。
2.用const也可以，如const float density=62.4这样也是常量*/
int main()
{
    float weight,volume;
    char name[40];//数组的标准写法
    int letters,size;
    printf("Hi!What's your first name?\n");
    scanf("%s",name);/*这里的name不需要&，因为它属于是数组，已经打包好了值*/
    printf("%s,what's your weight in pounds?\n");
    scanf("%f",&weight);//对比上面weight是一个值，所以要加&作为取地址运算
    volume=weight/density;
    letters=strlen(name);/*本行与下行的函数均起一个运算的作用*/
    size=sizeof(name);
    printf("%s,%f,%d,%d\n",name,volume,letters,size);
}