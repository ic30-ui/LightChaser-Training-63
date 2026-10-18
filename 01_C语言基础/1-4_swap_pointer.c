#include<stdio.h>      // 引入标准输入输出库，为使用 printf 函数做准备
#include<stdlib.h>     // 引入标准库，为使用 system 函数做准备
void swap(int*a,int*b);  // 函数声明：告诉编译器有一个 swap 函数，接收两个 int 指针参数，无返回值

int main(){              // 程序的主函数，程序的入口点
    int c = 10;          // 定义整型变量 c，并初始化为 10
    int d = 20;          // 定义整型变量 d，并初始化为 20
    swap(&c,&d);         // 调用 swap 函数，把 c 和 d 的地址（指针）传进去，这样函数内部才能修改原变量
    printf("c = %d,d = %d\n",c,d);  // 打印交换后 c 和 d 的值，%d 是整型占位符，\n 表示换行
    
    
    
    
    
    system("pause");     // 调用系统命令暂停程序，防止控制台窗口一闪而过（Windows 下常用）
    return 0;            // 主函数返回 0，表示程序正常结束
}

void swap(int*a,int*b){  // swap 函数定义，参数 a、b 分别是两个 int 变量的地址（指针）
    int temp = *a;       // 用临时变量 temp 保存 a 所指向的值（即 c 的值 10），*a 表示解引用取地址里的内容
    *a = *b;             // 把 b 所指向的值（d 的值 20）赋给 a 所指向的内存（即把 c 改成 20）
    *b = temp;           // 把临时变量 temp 中保存的原 c 值（10）赋给 b 所指向的内存（即把 d 改成 10）
}