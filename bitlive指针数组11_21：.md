一级指针、二级指针、三级指针

![ ](D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121190801354.png)

通过对应数量的 * 来访问对应指针变量指向的空间

# 指针数组：

用一维数组模拟二维数组

![image-20221121193056120](D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121193056120.png)





![image-20221121193418930](D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121193418930.png)

arr是指针数组，存放了a b c，arr[0]是a，也就是一个数组首元素的地址，是一个指针，指针＋整数，

结构体是一些复杂数据的集合，可以存放不同数据类型的值

![image-20221121200204022](D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121200204022.png)

tag是结构体类型，s1是结构体变量，name  age  sex  score是结构体成员

![image-20221121200955880](D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121200955880.png)

点操作符用于访问结构体变量的成员，->是访问结构体指针指向的结构体变量的成员

对于结构体指针，因为它是指针，所以也可以解引用+点操作符，这种的话有点麻烦，不如->自动补全，芜湖

结构体里面可以套结构体

结构体里面也可以套结构体指针------>链表

链表指针作为函数参数，可以Stu*  head  也可以struct  Stu* head

不知道为啥↑

结构体传参最好传结构体指针，因为传参的时候函数括号里面必须得创建一个临时变量（参数，你如果创建一个大结构体去接收，就不如就拿一个4字节的指针节约内存，参数压栈

还有一件事，如果是创建一个大结构体，本质上就是传值调用，不能修改函数外面的结构体，有点鸡肋。

计算机语言

数据结构和算法

操作系统/系统编程

网络协议/网络编程

数据库（MySOL）

实战项目

B站学UE5，easyx，自己写个游戏

大端字节序存储：低地址对高位，高地址对低位

小端字节序存储：低地址对低位，高地址对高位，vs上就是这个模式

大异小同。

拿出来的时候怎么拿？？？

数字在内存中存储的时候有一个顺序的问题

放进去，未来用的时候还得拿出来，所以放进去的时候必须得有规则的，拿出来的时候踩好拿，

以字节为单位讨论他们的顺序，所以不知道当时那个人怎么起的名，那个人当时看了格列佛游记，里面有一个故事，鸡蛋从大头向小头剥，还是小头向大头剥，所以他给起了个这个名字，大端字节序是正着放的，小端字节序是倒着放的，大正小倒，大异小同

![image-20221121212558469](D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121212558469.png)



用指针访问数组时，如果只是打印，记得尽量不要p++，看能不能(p+ i )，因为是传址调用，可能会改变函数外的变量

gets(arr)，能够读取到空格，读一个字符串，直到读到 \0——字符串结束标志

法一：用指针解引用+left

法二：就把left设成指针，就可以简化了，↓

<img src="D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121214109945.png" alt="image-20221121214109945" style="zoom:67%;" />

法三：进一步简化，left和right在设置参数的时候就已经安排好了

<img src="D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121214540830.png" alt="image-20221121214540830" style="zoom:67%;" />

传参部分（主函数）↑

reverse函数部分↓

<img src="D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121214553953.png" alt="image-20221121214553953" style="zoom:67%;" />

这样也能读一个字符串↓

![image-20221121214317818](D:%5CTypora%5C%E5%9B%BE%E7%89%87%5Cimage-20221121214317818.png)

```c
scanf("%[^\n]");
```

有点像正则表达式

正则表达式是啥？？

