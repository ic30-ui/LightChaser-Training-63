#include<stdio.h>        // 引入标准输入输出库，后面用到 printf 函数
#include<stdlib.h>       // 引入标准库，后面用到 system 函数

int main(){              // 程序的主函数，程序的入口点，返回类型为 int
    int sum = 0;         // 定义整型变量 sum，用来累加奇数之和，初始值为 0

    for (int i = 1; i <= 100; i++){   // 循环：i 从 1 开始，每次加 1，直到 i 等于 100 为止
        if (i % 2 != 0){              // 判断 i 是否为奇数：i 对 2 取余不等于 0，说明是奇数
            sum = i + sum;            // 把当前的奇数 i 累加到 sum 上（也可简写为 sum += i）
        }                             // if 语句结束
    }                                 // for 循环结束

    printf("%d\n", sum);              // 打印 sum 的值（1 到 100 之间所有奇数之和），%d 表示整数，\n 表示换行
    system("pause");                  // 暂停程序（Windows 下常见写法），等待用户按任意键继续，防止控制台窗口一闪而过
    return 0;                         // 主函数返回 0，表示程序正常结束
}                                     // main 函数结束