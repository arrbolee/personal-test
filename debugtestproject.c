//本程序用来实验debug功能time:2026/9/1 15：55
#include <stdio.h>
int main()

{
    int n;/*int a,int b,int c；是错误形式,程序显示中已经修改*/
    int n2;
    int n3;
    /*该程序多处出错*/
    n=2;
    n2=n*n;
    n3=n2*n2;
    printf("n=%d, n squaraed =%d, n cubed =%d.\n",n,n2,n3);

    return 0;
}
/*记录：1·debug模式在程序有语法错误时无法运行。
2·debug模式用来定位变量的逻辑错误，语法错误在terminal就发现了。*/