/*
 * Comprehensive C Preprocessor Directives Example
 * C 语言编译预处理命令综合示例
 */

// 1. File Inclusion / 文件包含
// Include standard library header / 包含系统标准库头文件
#include <stdio.h> 
#include <stdlib.h>

// 2. Macro Definitions / 宏定义
// Define a constant / 定义无参数宏（常量）
#define MAX_USERS 100 
#define PI 3.14159

// Define a macro with parameters (always use parentheses!) 
// 定义带参数的宏（非常重要：参数和整个表达式都要加括号！）
#define SQUARE(x) ((x) * (x)) 

// 3. Conditional Compilation / 条件编译
// Define flags for OS detection / 定义用于系统检测的标志
#define OS_LINUX 1
#define OS_WINDOWS 2

// Simulate targeting Windows / 模拟目标系统为 Windows
#define TARGET_OS OS_WINDOWS 

// 4. Special Operators / 预处理器特殊运算符
// Stringification operator (#): converts macro parameter to a string literal
// 字符串化运算符 (#)：将宏参数转换为字符串常量
#define PRINT_VAR(var) printf(#var " = %d\n", var)

// Token pasting operator (##): concatenates two tokens into one
// 记号拼接运算符 (##)：将两个标记连接成一个完整的标识符
#define MAKE_VAR(name, num) name##num

int main() {
    printf("--- Macro Definitions / 宏定义测试 ---\n");
    
    // Using the constant macro / 使用常量宏
    // Output: Max users allowed: 100 / 输出：允许的最大用户数：100
    printf("Max users allowed: %d\n", MAX_USERS); 
    
    int num = 5;
    // Using the function-like macro / 使用函数式宏
    // The preprocessor replaces it with: ((num) * (num))
    // 预处理器会将其替换为: ((num) * (num))
    printf("Square of %d is %d\n", num, SQUARE(num)); 
    printf("\n");

    printf("--- Conditional Compilation / 条件编译测试 ---\n");
    
    // The compiler will only compile the block that matches the condition
    // 编译器只会编译符合条件的那个代码块
    #if TARGET_OS == OS_WINDOWS
        // This block will be compiled / 这个代码块会被编译
        printf("System Check: Running on Windows OS.\n"); 
    #elif TARGET_OS == OS_LINUX
        // This block will NOT be compiled / 这个代码块不会被编译
        printf("System Check: Running on Linux OS.\n"); 
    #else
        // If TARGET_OS is neither 1 nor 2, force a compiler error
        // 如果 TARGET_OS 既不是 1 也不是 2，强制编译器报错停止编译
        #error "Unknown Operating System specified!" 
    #endif
    printf("\n");

    printf("--- Special Operators / 特殊运算符测试 ---\n");
    
    int testValue = 42;
    // (#) Stringification: Expands to printf("testValue" " = %d\n", testValue);
    // (#) 字符串化：将被预处理展开为 printf("testValue" " = %d\n", testValue);
    PRINT_VAR(testValue); 

    // (##) Token Pasting: Expands to int myVar1 = 10;
    // (##) 记号拼接：将被预处理展开为 int myVar1 = 10;
    int MAKE_VAR(myVar, 1) = 10; 
    printf("Created variable using token pasting: myVar1 = %d\n", myVar1);
    printf("\n");

    // 5. Undefining Macros / 取消宏定义
    #undef MAX_USERS
    
    /*
     * If we try to uncomment the line below, the code will fail to compile
     * because MAX_USERS is no longer defined after #undef.
     * * 如果我们尝试取消下面这行代码的注释，将会导致编译失败，
     * 因为在 #undef 之后，MAX_USERS 已经失效（不再被定义）。
     */
    // printf("Trying to print MAX_USERS: %d\n", MAX_USERS); 

    return 0;
}
