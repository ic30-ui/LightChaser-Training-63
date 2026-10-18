#include<stdio.h>                                  // 引入标准输入输出库，使用 printf、scanf 等函数
#include<stdlib.h>                                 // 引入标准库，使用 malloc、free、system 等函数
int main(){                                        // 程序主函数，程序从这里开始执行
    int n;                                         // 声明整型变量 n，用于存储数组元素个数
    printf("请输入数组元素个数\n");                 // 提示用户输入数组元素的个数
    if(scanf("%d",&n) != 1 || n <= 0){             // 读取用户输入的整数，若读取失败或输入值非正数则进入错误处理
        printf("输入失败\n");                       // 提示输入失败（读取失败或数值不合法）
        return 1;                                  
    }                                              // 结束 if 判断块
    double* arr = (double*)malloc(n*sizeof(double)); // 动态申请 n 个 double 类型的内存空间，指针 arr 指向首地址
    if(arr == NULL){                               // 判断内存申请是否失败（返回空指针）
        printf("申请内存失败\n");                   // 提示内存申请失败
        return 1;                                  // 以非零状态码退出程序，表示异常结束
    }                                              // 结束 if 判断块
    double sum =0.0;                               // 声明并初始化累加变量 sum，用于存储所有元素之和
    printf("请输入%d个数\n",n);                     // 提示用户输入 n 个数值
    
    
    for( int i = 0;i < n;i++){                     // 循环 n 次，依次读取每个数组元素
        scanf("%lf",&arr[i]);                      // 读取一个 double 类型的数并存入 arr[i]
        sum += arr[i];                             // 将当前元素累加到 sum 中
    }                                              // 结束 for 循环
    double avg = sum / n;                          // 计算平均值：总和除以元素个数
    printf("平均数为：%.2lf\n",avg);                // 输出平均数，保留两位小数
    free(arr);                                     // 释放之前动态申请的内存，避免内存泄漏
    arr = NULL;                                    // 将指针置空，防止出现悬空指针


     
     
    
    
    system("pause");                               // 调用系统命令暂停程序（Windows 下常用，便于查看输出）
    return 0;                                      // 以零状态码正常退出程序
}                                                  // 结束 main 函数