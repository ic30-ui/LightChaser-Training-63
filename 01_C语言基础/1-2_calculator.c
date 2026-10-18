#include <stdio.h>      // 引入标准输入输出库，用于 printf、scanf 等函数
#include <stdlib.h>     // 引入标准库，用于 system() 函数（调用系统命令）

int main()              // 主函数，程序的入口点，返回整型状态码
{
    double a;           // 声明第一个操作数 a，类型为双精度浮点数
    double b;           // 声明第二个操作数 b，类型为双精度浮点数
    char op;            // 声明运算符 op，类型为字符（如 +、-、*、/）

    printf("请输入表达式:");                       // 提示用户输入一个表达式（如 3 + 5）
    scanf("%lf %c %lf", &a, &op, &b);             // 读取输入：第一个数存入 a，运算符存入 op，第二个数存入 b

    switch(op){                                   // 根据运算符 op 的值进行分支判断
       
         case('+'):                               // 当运算符为 '+'（加法）时
         printf("两数之和为：%g\n", a + b);       // 输出 a 与 b 的和，%g 以紧凑格式显示浮点数
         break;                                   // 结束该分支，跳出 switch

          case('-'):                              // 当运算符为 '-'（减法）时
         printf("两数之差为：%g\n", a - b);       // 输出 a 减 b 的差
         break;                                   // 结束该分支

          case('*'):                              // 当运算符为 '*'（乘法）时
         printf("两数之积为：%g\n", a * b);       // 输出 a 与 b 的积
         break;                                   // 结束该分支

          case('/'):                              // 当运算符为 '/'（除法）时
          if(b!=0){                               // 先判断除数 b 是否为 0，避免除以零
         printf("两数之商为：%g\n", a / b);       // 若 b 不为 0，输出 a 除以 b 的商
        }
        else{                                     // 若除数为 0
         printf("错误,没有这样的运算法则");       // 输出错误提示：不能除以零
         break;                                   // 跳出 switch

        }
        default:                                  // 若运算符不属于以上任意一种
         printf("错误,没有这样的运算符");         // 输出错误提示：无效运算符
         break;                                   // 跳出 switch
    }

    system("pause");        // 暂停程序，等待用户按键后再关闭窗口（常见于 Windows）
    return 0;               // 返回 0，表示程序正常结束
}