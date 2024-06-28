

### Java异常



异常有两种,分别是运行时异常`RuntimeException`和编译时异常

 异常的最上层父类时：`Exception`

![1](README.assets/1.png)

![2](README.assets/2.png)

throw 抛出异常

捕获异常:`try{}catch(){}`

程序出现异常，如果没有捕获jvm就会报错，并且异常之后的代码都会不运行。

> 如果在`try{}`里面出现异常，之后所在的代码块里的代码都不会运行.直接跳转到catch...





![image-20240628113510027](README.assets/image-20240628113510027.png)

![image-20240628114305152](README.assets/image-20240628114305152.png)

---



在JDK7以后，我们可以在一个catch中捕获多种异常.

> 例如：要捕获两种不同的异常，但它们的处理方式是一样的，可以这么写：

```
try{
    int a = 2/0;
    throw new ArrayIndexOutOfBoundsException();
}catch (ArithmeticException | ArrayIndexOutOfBoundsException e){
    System.out.println(e);
}
```

__异常的方法__:

![image-20240628121040805](README.assets/image-20240628121040805.png)

**自定义异常**

1. 定义异常类
2. 写继承关系
3. 空参构造
4. 带参构造





## File

构造方法:

![image-20240628124432031](README.assets/image-20240628124432031.png)

 ![image-20240628124529621](README.assets/image-20240628124529621.png)
