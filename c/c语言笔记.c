// <wengkai C program notes>

// 配套学习视频:
// https://www.bilibili.com/video/BV1XZ4y1S7e1/?spm_id_from=333.1007.top_right_bar_window_custom_collection.content.click
#include <stdio.h>

int main()
{
	const

	const是一个修饰符，加在int前面，用来
	给这个变量加上一个const（不变的）的属性

	这个const的属性表示这个变量的值一旦初始化，
	就不能再修改了。


	常量习惯用大写字母，变量小写
	例: int RANGE = 10

	int a,b;
	scanf("%d %d",&a,&b);
	scanf里面传值要加&

	scanf("xxx%d")
	里面的xxx也要输入进去
	否则后面的%d读不到

	浮点数用%f来输出

  	a++和++a的区别

  	a++是先返回a的值再++
  	++a是先++再返回值

	关系运算符的优先级比算术运算符低
	但是比赋值运算的高
	int r = a > 0;

	int x;
	scanf("%d",&x);
	int n = 0;
	do{
		x /= 10;
		n ++;
	}while(x > 0 );
	printf("%d\n",n );

	for (; i < count; ++i)
	{
		/* code */
	}
	对于for循环来说它的表达式是可以
	省掉一个的

	int a = 6;
	sizeof(a+1.0)  --> 8
	int类型变double所以结果是8

	数据类型

		  整数：char short int long  long long
	64位几个字节：	 1 		2	 4	  8	 	  8

		补码

	11111111被当作纯二进制看待时，是255
			被当作补码看待时是-1
	对于-a，其补码解释0-a，实际是2的次方-a，n是这种类型的位数

	char c = 255  --> 11111111 因其最左边是1 所以当补码看待 = -1
	若想让其当存二进制数 可以在前面加 unsigned 
	unsigned char c = 255 --> 255

	如果一个字面量常数想要表达自己是unsigned,可以在后面加u或U-->255U
		用l或L表示long

	p58 整数的格式化 2023.10.6

	所有字节小于int的变量传进printf里编译器会转换为int传进去
	char c = -1; 
	int i = -1;
	printf("%u,%u\n",c,i );

	输出4294967295 4294967295 为unsigned最大值

	八进制以0开头 char c = 012 
	十六进制以0x开头 int i = 0x12
	printf("%d,%d",c,i) 
	%d转换为十进制输出 结果为10 18
	%o八进制输出
	%x十六进制输出,小写的x输出小写字母 大写X输出大写字母

p60 浮点类型

 	浮点的输入输出

 	类型		scanf	printf   有效数字
 	float	%f 		%f，%e 		7
 	double  %lf  	%f，%e  		15

 	%e输出科学计数法
 	%.3f输出小数点后3位 省略的四舍五入

 	float a = 1.345f 
 	带小数点的字面量是double而非float
 	float需要用f或F后缀来表面身份

 	p61 字符类型

 	%c 用来输入输出字符

 	在scanf中 %d后面没有空格的话 只读到整数结束为止 

 	字符进行运算时是使用ASCII码表中的数

 	int i = 'Z' - 'A'; --25

 	p63 类型转换

 	自动类型转换
 	
 	当运算符的两边出现不一致的类型时，会自动转换成
 	较大的类型
 		大的意思时能表达的数的范围更大
 		char --> short --> int --> long --> long long
 		int --> float --> double

 	对于 printf() 任何小于 int 的类型会被转换成int
 	// float 会被转换成 double

 	但是 scanf() 不会，要输入 short ,需要%hd


 	强制类型转换

 	需要把一个量强制转换成另一个类型，需要 (类型)值

 	比如 (int)10.2  -- float --> int

 	强制类型转换的优先级高于四则运算

 	double a,b;
 	int i = (int)a / b; 先int a 在除b

 	p66 逻辑运算

 	!	非
 	&&	与	并且		
 	||	或

 	1和0代表真假

 	！age < 20  会优先计算！再作比较

 	! > && > ||

 	短路

 	逻辑运算是自左向右进行的，如果左边的结果已经能够
 	决定结果了，就不会做右边的计算

 	对于&&，左边是false时就不做右边了
 	对于||,左边是true时就不做右边了

 	条件运算符

 	条件?条件满足时的值:条件不满足的值

 	逗号表达式

 	i = (1+2,2+3) --> i = 5

 	逗号表达式用来连接两个表达式，并以其右边的表达式
 	的值作为它的结果。
 	常用于for循环

 	for(i = 0,j = 1;i < 10;i++,j--)....

 	p69 函数

 	void xxx 不返回值

 	调用函数时给的值与参数的类型不匹配时
 	编译器会把类型转换好，但是这很可能不是你所期望的

 	void xxx(int)

 	xxx(2.4) --> 2

 	本地变量 local

 	就是定义在{}内的变量

 	c语言不允许函数的嵌套定义

 	p77 数组例子

 	初始化数组

 	集成初始化

 	int a[10] = {1,23,124,124,6};
 	
 	数组的大小
 	sizeof(a)/sizeof(a[0])

 	p81

 	&运算符

 	获得变量的地址，它的操作数必须是变量

 	输出地址%p
 	printf("%p\n",&i);

 	指针

 	保存地址的变量
 	int i;
 	int *p = &i;

 	作为参数的指针
 	void f(int *p);

 	int i = 0;f(&i);
 	在函数里面可以通过这个指针访问外面的这个i

 	可以给地址赋值
 	*p = 26;

 	
 	 传入函数的数组是个指针

 	 数组变量本身表达地址，所以
 	 int a[10]; int *p = a;//无需用&取地址

 	 a == &a[0]; //a的地址等于a[0]

 	 []运算符可以对数组做，也可以对指针做：
 	 p[0] <==> a[0]

 	 p86 指针运算

 	 给指针加1表示要让指针指向下一个变量
 	 int a[10];
 	 int *p = a;
 	 *(p+1) --> a[1]
 	 如果指针不是指向一片连续分配的空间，
 	 如数组，则这种运算没有意义

 	 <,<=,==,>,>=,!= 都可以对指针做
 	 比较它们在内存中的地址
 	 数组中的单元的地址肯定是线性递增的

 	 NULL是一个预定定义的符号，表示0地址
 	 
 	 动态内存分配

 	 malloc()

 	 #include <stdlib.h>

 	 void* malloc(size_t size);
 	 
 	 向malloc申请的空间的大小是以字节为单位的
 	 返回结果是void*，需要类型转换为自己需要的类型
 	 (int*)malloc(n*sizeof(int))
 
 	 while((p = malloc(100)))
 	 	p得到的值拿来做while的条件
 	 	如果没有内存可分配了 会返回0或NULL

 	 	free()
 	 用完之后 把申请来的空间还给“系统”
 	 只能还申请来的空间的首地址
 	 地址变过了不能free

 	 申请了没free -->长时间运行内存逐渐下降


 	 p88 字符串

 	 以0结尾的一串字符
 	 0或'\0'是一样的
 	 0标志着字符串的结束，但它本身不是字符串的一部分

 	 字符串以数组的形式存在，以数组或指针的形式访问


 	 char *s = "hello world";
 	 s地址在一个只读的地方，叫做代码段
 	 对s[0]赋值会报错
 	 如果需要修改字符串，应该用数组：
 	 char s[] = "hello world!";

 	 char*是字符串？
 	 字符串可以表达为char*的形式
 	 char*不一定是字符串
 	 本意是指向字符的数组，
 	 可能指向的是字符的数组
 	 只有它所指的字符数组有结尾的0，
 	 才能说它所指的是字符串

 	 p90 字符串输入输出

 	 在printf和scanf内字符串输入输出用%s

 	 scanf读入一个单词（到空格，tab或回车为止）

 	 安全的输入
 	 char string[8];
 	 scanf("%7s",string);

 	 在%和s中间的数字表示最多允许读入的字符
 	 的数量，这个数字应该比数组的大小小一

 	 下一次scanf直接从这次后面阅读

 	 空字符串
 	 char buff[100] = "";
 	 	这是一个空字符串，buff[0] == '\0';

 	 char buff[] = "";
 	 	这个数组的长度只有1!

 	 // p91 字符串数组

	int main(int argc, char const *argv[]) --> 数组的长度，数组本身 
	main函数能读到启动程序时 后面的参数

	p92 单字符输入输出

	int putchar(int c);
	向标准输出写一个字符
	 返回写了几个字符，写入失败返回EOF也就是-1
	
	// int getchar(void);
	// 从标准输入读入一个字符
	// 返回类型是int是为了返回EOF
	// ctrl+c 

	p93 字符串函数

	在头文件<string.h>

	size_t strlen(const char *s);
	返回s的字符串长度（不包括结尾的\0）

	int strcmp(const char *s1,const char *s2);
	比较两个字符串，返回首个不同字符的ascll码表的差值

	int mycmp(const char* s1,const char* s2){
		while( *s1 == *s2 && *s1 != '\0'){
			s1++;
			s2++;
		};
		return *s1 - *s2;
	}; 

	char * strcpy(char *restrict dst,const char *restrict src);
	把src的字符串拷贝到dst
		restrict表明src和dst不重叠（c99）
	返回dst
		// 为了能链起代码来

	复制一个字符串
	 char *dst = (char*)malloc(strlen(src)+1);
	 strcpy(dst,src);

	 char * strchr(const char *s,int c);
	 字符串中找字符  从左往右
	 返回NULL表示没有找到
	 返回那个字符的指针表示找到了
	 char s[] = "hello";
	 char *p = strchr(s,'l');
	 printf("%s\n", p); -- 输出llo

	 截取llo前面的字符
	 char *p = strchr(s,'l');
	 *p = '\0';
	 printf("%s\n",s ); --输出he


	 char * strrchr(const char *s,int c);
	 从右往左找字符

	 p97 枚举

	 enum 枚举类型名字 {name_0,...,name_n};

	 括号里的名字类型是int，值以此从0到n；

	 声明枚举量的时候可以指定值
	 enum color{red = 1, yellow = 3};

	 结构
	 声明结构的形式
	 struct point{
	 	int x;
	 	int y;
	 }; --声明结构类型
	 struct point p1,p2; -- 定义结构变量

	 p1和p2都是point
	 里面有x和y的值

	 struct{
	 	int x;
	 	int y;
	 } p1,p2;
	 p1和p2都是一种无名结构，里面有x和y（不常见）

	 struct point{
	 	int x;
	 	int y;
	 } p1,p2;
	 p1和p2都是point里面有x和y的值

	 和本地变量一样，在函数内部声明
	 的结构类型只能在函数内部使用

	 结构的初始化

	 struct date {
	 	int month;
	 	int day;
	 	int year;
	 };
	 int main{
	 	struct date today = {11,28,2023};
	 	struct date thismonth = {.month=11,.year=2023};
	 	// 没有赋值的为0
	 }

	 结构用.运算符和名字访问其成员
	 例：
		 today.day
		 student.fistname
		 p1.x

	结构运算

	要访问整个结构，直接用结构变量的名字
	对于整个结构，可以做赋值、取地址，也可以
	传递给函数参数/
		p1 = (struct point){5,10};
		// 相当于p1.x = 5;p1.y = 10;

		p1 = p2;
		// 相当于p1.x = p2.x;p1.y = p2.y;

	例：
		struct date today;--定义结构
		today = (struct date){07,31,2014};--初始化结构

		struct date day;
		day = today;
		// day == today


	结构指针
	和数组不一样，结构变量的名字并不是
	结构变量的地址，必须使用&运算符

	struct date *pDate = &today;

	函数与结构

	结构作为函数参数

	int numberOfDays(struct date d)

	整个结构可以作为参数的值传入函数

	这时候是在函数内新建一个结构变量，并
	复制调用者的结构的值！

	函数也可以返回一个结构


	结构指针作为参数

	struct date{
		int month;
		int day;
		int year;
	} myday;

	struct date *p = &myday;

	(*p).month = 12;
	p->month = 12;
	用->表示指针所指的结构变量中的成员

	p99 结构中的结构

	结构数组

	struct time {
		int hour;
		int minutes;
		int seconds;
	};
	struct time testTime[3] = {
		{11,55,56},
		{12,0,0},
		{1,54,22}
	};

	testTime[1].hour == 12

	结构中的结构（结构嵌套结构）

	struct point{
		int x;
		int y;
	};
	struct rectangle{
		struct point pt1;
		struct point pt2;
	};
	
	如果有变量:struct rectangle r;
	就可以有:r.pt1.x 	r.pt1.y,
			r.pt2.x 	r.pt2.y

	如果有变量定义：
		struct rectangle r,*rp;
		rp = &r;
	那么下面的四种形式是等价的：
		r.pt1.x
		rp->pt1.x
		(r.pt1).x
		(rp->pt1).x
	但是没有rp->pt1->x（因为pt1不是指针）

	结构中的结构的数组

	struct point{
		int x;
		int y;
	};
	struct rectangle{
		struct point pt1;
		struct point pt2;
	};
	struct rectangle rects[2] = {
		{
			{1,2},
			{3,4}
		},
		{
			{5,6},
			{7,8}
		}
	};
	// rects[0].pt1.y = 2

	p104 类型定义

	自定义数据类型(typedef)
	C语言提供了一个叫做 typedef 的功能来声明一个已有的
	数据类型的新名字。比如：
		typedef int Lenght;

	使得 Lenght 成为 int 类型的别名。

	这样, Lenght 这个名字就可以代替int出现在变量定义和
	参数声明的地方了；

	Lenght a,b,len;

	typedef struct ADate{ 
		int month;
		int day;
		int year;
	} d;
	Date d = {12,5,2023};
	这里Date等价于struct ADate{...};

	p105 联合

	union AnElt {
		int i;
		char c;
	} elt1, elt2;

	elt.i = 4;
	elt2.c = 'a';

	union 类似 struct 不同的是：
		
	union 所有的成员共享一个空间
	// 同一时间只有一个成员是有效的（不理解）
	union的大小是其最大的成员

	union的用处

	#include <stdio.h>
	typedef union{
		int i;
		char ch[sizeof(int)];
	} CHI;

	int main()
	{
		CHI chi;
		int i;
		chi.i = 1234;
		for( i = 0; i < sizeof(int); i++){
			printf("%02hhx",chi.ch[i]);
		}
		printf("\n")
		return 0;
	}


	p106 全局变量
	定义在函数外面的变量是全局变量
	全局变量具有全局的生存期和作用域
	在任何函数内部都可以使用它们

	没有做初始化的全局变量会得到0值
	指针会得到 NULL 值

	只能用编译时刻已知的值来初始化全局变量
	它们的初始化发生在mian函数之前

	错误示范：
		int gAll = f();
		int a = 12; int b = a;
	--以上都会报错

	p107静态本地变量

	在本地变量定义时加上 static 修饰符将成为静态本地变量
	当函数离开的时候，静态本地变量会继续存在并保持其值
	静态本地变量的初始化只会在第一次进入这个函数时做，以后
	进入函数时会保持上次离开时的值

	静态本地变量实际上时特殊的全局变量
	它们位于相同的内存区域
	静态本地变量具有全局的生存期，函数内的局部作用域

	// static 在这里的意思是局部作用域（本地可访问）

	p108 *返回指针的函数

	函数里返回一个本地变量的地址是很危险的！
	离开函数之后，这个地址可能会被别的值“占领”

	最好的做法是返回传入的指针

	tips
	不要使用全局变量来在函数间传递参数和结果
	// 尽量避免使用全局变量
	*使用全局变量和静态本地变量的函数是线程不安全的

	p109 宏

	#开头的是编译预处理指令
	#define <名字> <值>

	注意没有结尾的分号，因为不是c的语句
	名字必须是一个单词，值可以是各种东西
	在c语言的编译器开始编译之前，编译预处理程序（cpp）
	会把程序中的名字换成值（完全文本替换）

	// gcc --save-temps 

	如果一个宏的值中有其他的宏的名字，也是会被替换的
	#define PI 3.14
	#define PI2 PI*2 //注释
	如果一个宏的值超过一行，最后一行之前的行末需要加\
	#define PRT printf("%d",PI);\
				printf("%d",PI2)
	宏的值后面出现的注释不会被当作宏的值的一部分

	没有值的宏
	#define _DEBUG
	这类宏是用于条件编译的，后面有其他的编译预处理指令
	来检查这个宏是否已经被定义过了

	预定义的宏
	__LINE__  	当前所在的行的行号
	__FILE__	文件名
	__DATE__	日期
	__TIME__	时间

	p110 带参数的宏

	#define cube(x) ((x)*(x)*(x))

	宏可以带参数

	带参数的宏
	一切都要有括号
	整个值要括号
	参数出现的每个地方都要括号
	#define RADTODEG(x) ((x) * 57.29578)

	可以带多个参数
	#define MIN(a,b) ((a)>(b)?(b):(a))
	也可以组合使用其他宏

	宏定义的时候结尾不要有分号

	p111 多个源代码文件

	项目
	在编译器中新建一个项目，然后把几个源代码文件加入进去
	编译器会把一个项目中所有的源代码文件都编译后，链接起来

	 一个.c文件是一个编译单元
	 编译器每次编译只处理一个编译单元
	 编译完以后形成的是.o文件(目标代码文件)
	 然后由链接器把它们链接到一起

	有的IDE有分开的编译和构建两个按钮，前者是对单个
	源代码文件编译，后者是对整个项目做链接

	p112 头文件

	把函数的原型放到一个头文件（以.h结尾）中，在需要
	调用这个函数的源代码文件（.c文件）中#include这个头文件，
	就能让编译器在编译的时候知道函数的原型

	#include 是一个编译预处理指令，和宏一样，在编译之前
	就处理了
	它把那个文件的全部文本内容原封不动地插入到它所在的地方

	#include 有两种形式来指出要插入的文件/
	""要求编译器首先在当前目录（.c文件所在的目录）
	寻找这个文件，如果没有，到编译器指定的目录去找

	<>让编译器只在指定的目录去找

	简单来说，自己写的用""，系统的用<>

	#include 不一定是用来引入库的

	stdio.h里只有printf的原型，printf的代码在另外的地方，
	某个.lib（Windows）或.a（Unix）中

	#include <stdio.h> 只是为了让编译器知道printf函数的原型，
	保证你调用时给出的参数值是正确的类型

	在使用和定义这个函数的地方都应该有#include这个头文件
	一般的做法就是任何.c都有对应的同名的.h，把所有对外公开的
	函数的原型和全局变量的声明都放进去

	不对外公开的函数

	在函数或全局变量前面加上static就使得它成为只能在所在的编译单元中
	被使用的函数或全局变量

	p113 声明

	在变量前面加上 extern int i;是变量的声明
	这样做整个项目都会知道有整个变量
	标准头文件结构:
	#ifdef __LIST_HEAD__
	#define __LIST_HEAD__

		// code....

	#endif

	这段预处理文件的作用是防止重复include
	运用条件编译和宏，保证这个头文件在一个编译单元中只会被#include一次

	#pragma once 也能起到相同的作用，但是
	不是所有的编译器都支持

	p114 格式化输入输出

	//printf: %[flag][width][.prec][hlc]type

	[flag]:
	printf("%9d",123);
	%9d 意味着输出的这个数据要占据9个字符空间(靠右对齐)
	%-9d 同上，但是靠左对齐
	%+9d 数据前面加个+号 -->+123
	%09d 占据9个字符输出，且空位字符用0填充（仅限右对齐）


	[width]:
	%.2f 保留小数点后两位

	%*f 下一个参数替换*
	例如:	
			printf("%*d\n",6,123);
				等同于
			printf("%6d\n",123);

	%hhd 把他当成 单个字节 来输出
	printf("%hhd\n",12345); -->只拿它的最低位 作为一个char去输出
							-->printf("%d",(char)12345);
							-->结果是:57



	%n 在此输出之前已经输出了x个字符，把x填到后面指针所指的变量里去
	// 例子:
	// 	printf("%dty%n",321,&num);
	// 	printf("%d\n",num); --> 

	// 实测了一下 会出问题 可能是编译器不同的原因


	scanf: %[flag]type 

	%*d 跳过一个%d
	例如：
		scanf("%*d%d",&num);
	用户输入: 123 321
	程序会跳过前面的123只读到321

	%i 读入一个整数，可能是十六进制或八进制
	相比%d 它更灵活
	例如:
		0x12 以十六进制读进来，值是十进制的 18
		012  以八进制读进来，值是十进制的 10

	printf和scanf的返回值

	读入的项目数
	输出的字符数

	int num;
	int i1 = scanf("%i",&num);
	int i2 = printf("%d\n",num);·
	printf("%d:%d\n",i1,i2);
	输出结果: 1:5

	在要求严格的程序中，应该判断每次调用scanf或printf的返回值，
	从而了解程序运行中是否存在问题

	p115 文件的输入输出

	FILE* fopen()

	p116二进制文件

	char format[10];
	// 向字符串输入 产生一个格式字符串
	sprintf(format,"%ds",10 - 1);
	printf("%s",format); --> "%9s"

	p117按位运算

	按位与&
	把二进制数进行&运算
	两个操作数的对应位都为1，那么结果的对应位就为1
	否则，结果的对应位为0。
	例如：	
			1111 1110	--> 0xFE
			1101 1011	--> 0xcb

	结果为：	1101 1010 

	或: | 
	`两个操作数的 任何一个 对应的位都为1，那么结果的对应位就为1
	否则，结果的对应位为0
	取反：~

	逻辑运算vs按位运算
	对于逻辑运算，他只看到两个值：0和1；
	可以认为逻辑运算相当于把所有非0的值都变成1，然后做按位运算

			5 & 4 --> 4
			5 && 4 --> 1 & 1 --> 1
			
			~4 --> 3 
			!4 --> !1 --> 0


	按位异或:^

	如果两个位相等，那么结果为0
	不相等，结果为1
	如果x和y相等，那么x^y的结果为0


	p118 移位运算

	左移 << 
	i << j
	i中所有的位向向左移动j个位置，而右边填入0
	所有小于int的类型，移位以int的方式来做，结果是int
	x <<= 1 等价于 x *= 2

	右移 >>
	同上
	对于unsigned的类型，左边填入0
	对于signed的类型，左边填入原来的最高位（保持符号不变）

	x >>= 1 等价于 x /= 2 

	输出一个数的二进制程序：
	int number;
	scanf("%d",&number);
	unsigned int mask = 1u << 31;
	for( ; mask ;mask >>= 1){
		printf("%d", number & mask ? 1 : 0);
	}

	p121 可变数组	Resizeble Array
	
	typedef struct
	{
		int *array;
		int size;
	} Array;
	const int BLOCK_SIZE = 20;

	Array array_create(int init_size){
		Array a;
		a.size = init_size;
		a.array = (int*)malloc(sizeof(int) * a.size);
		return a;
	}

	void array_free(Array *a){
		free(a->array);
		a->array = NULL;
		a->size = 0;
	}
	int array_size(const Array *a){
		return a->size;
	}
	int* array_at(Array *a,int index){
		if(index >= a->size){
			array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
		}
		return &(a->array[index]);
	}
	void array_inflate(Array *a,int more_size){
		int *p = (int*)malloc(sizeof(int) * (a->size + more_size));
		for(int i = 0;i < a->size;i++){
			p[i] = a->array[i];
		}
		free(a->array);
		a->array = p;
		a->size += more_size;
	}
	
	// p125 链表







	return 0;
}