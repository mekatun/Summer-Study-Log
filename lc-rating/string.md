8. string-to-integer-atoi

实现一个 `myAtoi(string s)` 函数，使其能将字符串转换成一个 32 位有符号整数。

函数 `myAtoi(string s)` 的算法如下：

1. **空格：**读入字符串并丢弃无用的前导空格（`" "`）
2. **符号：**检查下一个字符（假设还未到字符末尾）为 `'-'` 还是 `'+'`。如果两者都不存在，则假定结果为正。
3. **转换：**通过跳过前置零来读取该整数，直到遇到非数字字符或到达字符串的结尾。如果没有读取数字，则结果为0。
4. **舍入：**如果整数数超过 32 位有符号整数范围 `[−231, 231 − 1]` ，需要截断这个整数，使其保持在这个范围内。具体来说，小于 `−231` 的整数应该被舍入为 `−231` ，大于 `231 − 1` 的整数应该被舍入为 `231 − 1` 。

返回整数作为最终结果。

```java
public Boolean isNumber(char c){
    int n = c - '0';
    return n >= 0 && n <= 9;
}
public int myAtoi(String s) {;
    //trim() 去除字符串前后的空格
    char[] chars = s.trim().toCharArray();
    if (chars.length == 0) return 0;
    int flag = 1, i = 1, res = 0;

    if (chars[0] == '-'){
        flag = -1;
    }else if (chars[0] != '+'){
        i = 0;
    }
    while (i < chars.length && isNumber(chars[i])) {
     //在每轮数字拼接前，判断 res 在此轮拼接后是否超过int类型最大值，若超过则加上符号位直接返回。
     //设边界为Integer.MAX_VALUE / 10 = 214748364,有两种情况越界:
	 //res > Integer.MAX_VALUE / 10
     //res = Integer.MAX_VALUE / 10 && x > 7
        if (res > Integer.MAX_VALUE / 10 || res == Integer.MAX_VALUE / 10 && chars[i] - '0' > 7) {
            return flag == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
        }
        res = res * 10 + chars[i++] - '0';
    }
    return flag * res;
}
```