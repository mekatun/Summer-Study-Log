配套视频

https://www.bilibili.com/video/BV1wL411L7A3?p=6&vd_source=4fc9f1e3263072a5e60d8e2ddc1f40d9



final int amount;
定义常量，类似c语言中的const


判断浮点数常用手法

Math.abs(a - b) > 1e-6

单一出口

continue: 跳过循环这一轮剩下的语句进入下一轮

System.out.print()
输出
System.out.println()
输出且换行

xxx: for....

Break xxx:
break xxx:后面的循环

逻辑运算的优先级
! > && > ||

定义数组
int[] numbers = new int[100];

int[] 可以理解成指针，但是只能指向一个数组

遍历数组
for(i = 0;i < arr.lenth;++i)
    sum += arr[i];

统计用户输入的1~9数字，输入-1时结束
        Scanner in = new Scanner(System.in);
        int[] arr = new int[10];
        int x;
        x = in.nextInt();
        while (x != -1){
            arr[x] ++;
            x = in.nextInt();
        }
        for (int i = 0;i < arr.length;++i){
            System.out.println(i + ":" + arr[i]);
        }


for-each
for(int k : data){}
类似lua的迭代

二维数组
int[][] a = new int[3][5];
遍历
for(i = 0;i < 3;i++){
    for(j = 0;j < 5;j++){
        a[i][j] = i*j;
    }
}
初始化
int[][] a = {
    {1,2,3,4,5,6},
    {1,2,24,5},
};

单个字符是一种特殊的类型:char
用单引号表示字符字面量:'a'

24.4.2 学到了p44包裹类型

比较两个字符串

input == "bye" 比较是否是同一个东西
input.equals("byt") 比较内容是否相同

当函数期望的参数类型比调用时给的值的类型宽的时候，
编译器能悄悄替你把类型转换好
char -> int -> double
但是不能从大的转换成小的

构造函数
如果有一个成员函数的名字和类的名字完全相同，
则再创建这个类的每一个对象的时候会自动调用这个函数
——> 构造函数(没有返回类型)

函数重载

创建对象的时候给出不同的参数值，就会自动调用
不同的构造函数
通过this()还可以调用其它的构造函数
这样的this()只能在构造函数的第一句出现
并且只能出现一次


当一个类中有这个函数的话:
    public String toString(){}  
使用println输出这个类会自动调用toString
p73 4.10

父类里的private 子类不可用
先构造父类的构造器再构造子类的
如果子类没super会默认构造没有参数的父类构造器
如果在子类中存在跟父类同名的变量，那么会优先访问自己的.
调用父类的函数 --> super.xxx()

p75 多态变量
子类的对象可以被当作父类的变量来使用
Vehicle v1 = new Vehicle();
Vehicle v2 = new Car();
Vehicle v3 = new Bicycle();
所有的对象变量都是多态的，它们能保存不止一种类型的对象
向上造型:拿一个子类的对象，当作父类的对象来用
向上造型是默认的，不需要运算符
向上造型总是安全的
它们可以保存声明类型的对象，或声明类型的子类的对象
当把子类的对象赋给父类的变量的时候，就发生了向上造型

造型 cast

v3 = new Car();
v2 = (Vehicle)v3;
(只有当v3这个变量实际管理的也是Car才行)

abstract 抽象
抽象函数--表达概念而无法实现具体代码的函数
抽象类--表达概念而无法构造出实体的类

2024.4.18 P94