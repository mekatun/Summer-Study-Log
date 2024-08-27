主要记录与Java不同的写法



在Python中定义变量非常简单。你只需给变量一个名字，并将其赋值即可。Python使用动态类型，这意味着你不需要声明变量的类型，Python会根据赋给变量的值自动推断其类型。

```python
name = "Alice"
age = 16
```

Python允许你改变变量的类型。例如，你可以先将一个变量定义为整数，然后再将其赋值为字符串

```python
x = 10       # x 是整数
x = "Hello"  # 现在 x 是字符串
```

### 使用 `type()` 函数

`type()` 函数返回一个对象的类型。你可以用它来检查一个变量的类型：

```python
# 示例代码
x = 42
print(type(x))  # 输出: <class 'int'>

y = 3.14
print(type(y))  # 输出: <class 'float'>

z = "Hello"
print(type(z))  # 输出: <class 'str'>
```





```python
#1. 真除法（浮点除法）
#使用 / 操作符进行真除法，这会返回一个浮点数，即使两个操作数都是整数：
35 / 5  # => 7.0
10.0 / 3  # => 3.3333333333333335

#2.  整除（地板除法）
#使用 // 操作符进行整除，这会返回除法的结果的整数部分（向下取整）：

7 // 3 # => 2
```





```
# 模除
7 % 3 # => 1
# i % j 结果的正负符号会和 j 相同，而不是和 i 相同
-7 % 3 # => 2
```

```
# x 的 y 次方
2**4 # => 16
```

```
# 逻辑运算符，注意 and 和 or 都是小写
# 有点像lua..
True and False # => False
False or True # => True
```

```
# True 和 False 实质上就是数字 1 和0
True + True # => 2
True * 8    # => 8
False - 5   # => -5
```

```
# 使用布尔逻辑运算符对数字类型的值进行运算时，会把数值强制转换为布尔值进行运算
# 但计算结果会返回它们的强制转换前的值
# 注意不要把 bool(ints) 与位运算的 "按位与"、"按位或" (&, |) 混淆
bool(0)     # => False
bool(4)     # => True
bool(-6)    # => True
0 and 2     # => 0
-5 or 0     # => -5
```

```
# (is 对比 ==) is 判断两个变量是否引用同一个对象,
# 而 == 判断两个对象是否含有相同的值
a = [1, 2, 3, 4]  # 变量 a 是一个新的列表, [1, 2, 3, 4]
b = a             # 变量 b 赋值了变量 a 的值
b is a            # => True, a 和 b 引用的是同一个对象
b == a            # => True, a 和 b 的对象的值相同
b = [1, 2, 3, 4]  # 变量 b 赋值了一个新的列表, [1, 2, 3, 4]
b is a            # => False, a 和 b 引用的不是同一个对象
b == a            # => True, a 和 b 的对象的值相同
```

```
# 字符串可以使用加号连接成新的字符串
"Hello " + "world!"  # => "Hello world!"
# 非变量形式的字符串甚至可以在没有加号的情况下连接
"Hello " "world!"    # => "Hello world!"

# 字符串可以被当作字符列表
"Hello world!"[0]  # => 'H'

# 你可以获得字符串的长度
len("This is a string")  # => 16

# 你可以使用 f-strings 格式化字符串（python3.6+）
name = "Reiko"
f"She said her name is {name}." # => "She said her name is Reiko"
# 你可以在大括号内几乎加入任何 python 表达式，表达式的结果会以字符串的形式返回
f"{name} is {len(name)} characters long." # => "Reiko is 5 characters long."

# 用 .format 来格式化字符串
"{} can be {}".format("strings", "interpolated")
# 可以重复参数以节省时间
"{0} be nimble, {0} be quick, {0} jump over the {1}".format("Jack", "candle stick")
# => "Jack be nimble, Jack be quick, Jack jump over the candle stick"
# 如果不想数参数，可以用关键字
"{name} wants to eat {food}".format(name="Bob", food="lasagna") 
# => "Bob wants to eat lasagna"

# 如果你的 Python3 程序也要在 Python2.5 以下环境运行，也可以用老式的格式化语法
"%s can be %s the %s way" % ("strings", "interpolated", "old")
```



```
# None是一个对象
None  # => None

# 当与 None 进行比较时不要用 ==，要用 is。is 是用来比较两个变量是否指向同一个对象。
"etc" is None  # => False
None is None  # => True

# None，0，空字符串，空列表，空字典，空元组都算是 False
# 所有其他值都是 True
bool(0)  # => False
bool("")  # => False
bool([]) # => False
bool({}) # => False
bool(()) # => False
```



```
# 默认情况下，print 函数会在输出结果后加入一个换行作为结尾
# 可以使用附加参数改变输出结尾
print("Hello, World", end="!")  # => Hello, World!

# 可以很简单的从终端获得输入数据
input_string_var = input("Enter some data: ") # 返回字符串数值
```

```
# "if" 可以用作表达式，它的作用等同于 C 语言的三元运算符 "?:"
"yay!" if 0 > 1 else "nay!"  # => "nay!"
```

```
# 用列表 (list) 储存序列
li = []
# 创建列表时也可以同时赋给元素
other_li = [4, 5, 6]

# 用append在列表最后追加元素
li.append(1)    # li现在是[1]
li.append(2)    # li现在是[1, 2]
li.append(4)    # li现在是[1, 2, 4]
li.append(3)    # li现在是[1, 2, 4, 3]
# 用pop从列表尾部删除
li.pop()        # => 3 且li现在是[1, 2, 4]
# 把3再放回去
li.append(3)    # li变回[1, 2, 4, 3]

# 列表存取跟数组一样
li[0]  # => 1
# 取出最后一个元素
li[-1]  # => 3
# 列表有切割语法
li[1:3]    # => [2, 4]
# 取尾
li[2:]     # => [4, 3]
# 取头
li[:3]     # => [1, 2, 4]
# 隔一个取一个
li[::2]    # =>[1, 4]
# 倒排列表
li[::-1]   # => [3, 4, 2, 1]
# 可以用三个参数的任何组合来构建切割
# li[始:终:步伐]

# 简单的实现了单层数组的深度复制
li2 = li[:]  # => li2 = [1, 2, 4, 3] ，但 (li2 is li) 会返回 False

# 用 del 删除任何一个元素
del li[2]   # li 现在为 [1, 2, 3]
```