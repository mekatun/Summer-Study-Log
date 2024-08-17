爬百家姓案例


```java
        
StringBuilder sb = new StringBuilder();
        String familyNameNet = "https://hanyu.baidu.com/shici/detail?pid=0b2f26d4c0ddb3ee693fdb1137ee1b0d&from=kg0";
        URL url = new URL(familyNameNet);
        URLConnection connection = url.openConnection();
        InputStreamReader isr = new InputStreamReader(connection.getInputStream());
        int b;
        while ((b = isr.read()) != -1) {
            sb.append((char) b);
        }
        isr.close();
        List<String> date = new ArrayList<>();
        //按照正则表达式的规则，去获取数据
        Pattern pattern = Pattern.compile("(([\\u4e00-\\u9fa5]){4})([，。])");
        //按照pattern的规则，到str当中获取数据
        Matcher matcher = pattern.matcher(sb.toString());
        while (matcher.find()) {
            date.add(matcher.group(1));
        }
        List<Character> familyNameList = new ArrayList<>();
        date.forEach(names -> {
            for (char c : names.toCharArray()) {
                familyNameList.add(c);
            }
        });
        System.out.println(familyNameList);
```



利用hutool工具包

```java
//请求列表页
String listContent = HttpUtil.get("https://hanyu.baidu.com/shici/detail?pid=0b2f26d4c0ddb3ee693fdb1137ee1b0d&from=kg0");
//使用正则获取所有标题
List<String> names = ReUtil.findAll("(([\\u4e00-\\u9fa5]){4})([，。])", listContent, 1);
for (String name : names) {
    System.out.println(name);
}
```