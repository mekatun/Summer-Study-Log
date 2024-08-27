![image-20240818183109001](imgs/image-20240818183109001.png)

![image-20240819095837231](imgs/image-20240819095837231.png)

![image-20240819101125986](imgs/image-20240819101125986.png)

Axios

![image-20240819123859989](imgs/image-20240819123859989.png)

![image-20240819145342969](imgs/image-20240819145342969.png)

```js
//访问一个api,获取随机一条人生格言
    var url = "https://api.adviceslip.com/advice";

    axios.get(url).then((result) => {
        console.log(result.data);
        document.write(result.data.slip.advice);
    }).catch((err) => {
        console.error('Error:', err);
    });
```

