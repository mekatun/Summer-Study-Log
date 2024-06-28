## 6.27

---



### Java异常



异常有两种,分别是运行时异常`RuntimeException`和编译时异常

 异常的最上层父类时：Exception

![1](README.assets/1.png)

![2](README.assets/2.png)

throw 抛出异常

程序出现异常，之后的代码就不会运行

捕获异常:`try{}catch(){}`



![image-20240628113510027](README.assets/image-20240628113510027.png)

![image-20240628114305152](README.assets/image-20240628114305152.png)

在jdk7以后，我们可以在一个catch中捕获多种异常.

例如：要捕获两种不同的异常，但它们的处理方式是一样的，可以这么写：

```
try{
    int a = 2/0;
    throw new ArrayIndexOutOfBoundsException();
}catch (ArithmeticException | ArrayIndexOutOfBoundsException e){
    System.out.println(e);
}
```

