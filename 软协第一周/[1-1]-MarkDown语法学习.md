# :star: Typora基本使用

:round_pushpin: 来自：==中南林业科技大学软件协会学术部：谢添==

:timer_clock: 时间：<font color='cornflowerblue'>2022 - 10 - 16</font>

:house: 官网：https://www.csuftsap.cn/

:speech_balloon: <font color='green'>在本篇中我列举了一些我认为基本的，也是我最常用最便捷的Typora文本操作，我认为有这些其实也就能够写出一篇不错的文章了。其实关于Typora还有太多值得探讨的东西，我目前也一直在编写一个关于Typora的介绍与使用全解，当然内容肯定会超乎你想象，可以小期待一下</font>:rocket: 。

> 其实每一种基本使用都可以通过 markdown 语法，快捷键 或 快捷方式 来实现，但在这里我只列举我认为的最优最便捷方式，比如你若全使用 markdown语法，你会发现对你自己笔记的编写是一种巨大的痛苦。

# 1.标题级别

快捷键：<font color='red'>**ctrl + 数字**</font>（1 ~ 6 ）

代表 一级标题 到 六级标题

----

# 2.纯文本形式粘贴

快捷键：**<font color='red'>ctrl + shift + v</font>**

---

# 3.划线

## 3.1 上划线（分割符）

markdown语法：**<font color='red'>---</font>**（三个或三个以上的连续减号）

<font color='purple'>示例效果</font>如下（一条线）：

---

## 3.2 中划线（删除符）

markdown语法：**<font color='red'>~~</font>**你需要写的内容**<font color='red'>~~</font>**

> 文本内容左右各两个波浪线

快捷键：**<font color='red'>Alt + shift + 5</font>**

<font color='purple'>示例效果：</font>~~我也曾爱过你，可也只是爱过你~~

## 3.3 下划线

快捷键：**<font color='red'>ctrl + u</font>**

markdown语法：**<font color='red'>\<u></font>**你需要写的内容**<font color='red'>\</u></font>**

示例效果：<u>你是我的周林林，可惜我不是方予可</u>

----

# 4.列表

## 4.1 有序列表

快捷键：**<font color='red'>ctrl + shift + [</font>**

markdown语法：**<font color='red'>数字  +  .  +  空格</font>**

<font color='purple'>示例效果：</font>

1. 我可以爱你
2. 也可以没有你

## 4.2 无序列表

快捷键：**<font color='red'>ctrl + shift + ]</font>**

<font color='purple'>示例效果：</font>

- 我可以爱你
- 也可以没有你

## 4.3 减少缩进

【第一步】<font color='green'>撤回列表符号</font>
【第二步】<font color='green'>shift + tab</font>(如果是增加缩进后，又减少缩进，那么第二步的快捷键需要重复两次，再去使用4.1 / 4.2 回到原来级别)

<font color='purple'>示例效果：</font>

==我想告诉你==：

1. 其实我很喜欢你
2. 但再也不会去找你

这人呐，终其一生，满是遗憾（这里又与=="我想告诉你"==同级别了）

## 4.4 增加缩进

【第一步】<font color='green'>撤回列表符号</font>
【第二步】<font color='green'>使用4.1 / 4.2 的快捷键或markdown语法</font>

<font color='purple'>示例效果：</font>

我想告诉你：

- 其实我很担心你
- 但再也不会关心你
  1. 关心是小朋友的我们才做的事
  2. 我们不再是小孩子了
  3. <font color='cornflowerblue'>这里的 1 2 3 就是增加了缩进</font>
- 愿你幸福顺遂

## 4.5 任务列表



快捷键：**<font color='red'>ctrl + shift + x</font>**

<font color='purple'>示例效果：</font>

- [ ] 未完成：我想有一天，能好好和你告别
- [ ] 我不想再和你做朋友了

----

# 5.高亮

markdown语法：**<font color='red'>\==</font>**你需要写的内容**<font color='red'>==</font>**

> ⚠️注意：高亮还需要自己手动打开typora的该功能并`重启`Typora才能生效

![image-20221017004045760](https://sapfigure-1-1256773093.cos.ap-nanjing.myqcloud.com/learnFile-image/image-20221017004045760.png)

示例效果：

==有一天，我突然想谈恋爱了，还是因为想起你了==

----

# 6.引用

markdown语法：**<font color='red'>></font>**  +  **<font color='red'>空格</font>**

<font color='purple'>示例效果：</font>

> 其实我还记得你
>
> 那个戴着难看胡萝卜发夹的短发女孩

---

# 7.代码框

markdown语法：**<font color='red'>```</font>** + **<font color='red'>语言类型</font>** + **<font color='red'>回车</font>**

<font color='purple'>示例效果：</font>

![image-20220721003912997](https://sapfigure-1-1256773093.cos.ap-nanjing.myqcloud.com/learnFile-image/image-20220721003912997.png)

```java
//这就是代码框
//上面为步骤
```

---

# 8.表格

快捷键：**<font color='red'>ctrl + t</font>**

快捷方式：

![image-20220803005959355](https://sapfigure-1-1256773093.cos.ap-nanjing.myqcloud.com/learnFile-image/image-20220803005959355.png)

---

<font color='purple'>示例效果：</font>

| 天数           | 时间       | 我的话                       |
| -------------- | ---------- | ---------------------------- |
| 喜欢你的第97天 | 2022/10/15 | 那时，不对的时间，不对的地点 |
| 喜欢你的第98天 | 2022/10/16 | 我想我们晚一点遇见           |
| 喜欢你的第99天 | 2022/10/17 | 结局就不会那样了             |

# 9.内联代码片

markdown语法：**<font color='red'>\`</font>**你需要写的内容**<font color='red'>`</font>**

<font color='purple'>示例效果：</font>`人生是那样的长，我们大概都不缺好朋友`

# 10.图片

## 10.1 插入图片

如果剪切板上已经是 图片 了，直接 **<font color='red'>ctrl + v</font>** 即可

## 10.2 插入图片路径

markdown语法：**<font color='red'>!</font>** + **<font color='red'>[]</font>** + **<font color='red'>()</font>**

快捷键：**<font color='red'>ctrl + shift + i</font>**

<font color='purple'>示例效果：</font>![图片名](这个括号中写你的图片路径)

# 11.内容目录

快捷方式：

![image-20221017005458123](https://sapfigure-1-1256773093.cos.ap-nanjing.myqcloud.com/learnFile-image/image-20221017005458123.png)

<font color='purple'>示例效果：</font>

![image-20221017005644409](https://sapfigure-1-1256773093.cos.ap-nanjing.myqcloud.com/learnFile-image/image-20221017005644409.png)

# 12.斜体

markdown语法：**<font color='red'>*</font>**你需要写的内容**<font color='red'>*</font>**

<font color='purple'>示例效果：</font>*我有故事，你有酒吗*

> 示例效果的源代码：
>
> ```html
> *我有故事，你有酒吗*
> ```

# 13.字体大小

markdown语法：**<font color='red'>\<font size="数字"></font>**你想写的内容**<font color='red'>\</font></font>**

<font color='purple'>示例效果：</font>

<font size="5">其实我很爱你</font>

<font size="4">我爱你少几分</font>

<font size="1">我对你爱很少</font>

> 示例效果的源代码：
>
> ```html
> <font size="5">其实我很爱你</font>
> <font size="4">我爱你少几分</font>
> <font size="1">我对你爱很少</font>
> ```

# 14.字体颜色

> 其实不止可以写英文名，还可以写RGB值，但这是前端的知识，这里不做过多说明。

markdown语法：**<font color='red'>\<font color="颜色英文名"></font>**你想写的内容**<font color='red'>\</font></font>**

<font color='purple'>示例效果：</font>

<font color='green'>我有个大胆的想法，绿了你的男朋友</font>

<font color='pink'>你喜欢粉色的娃娃，我喜欢你</font>

<font color='cornflowerblue'>天空是蔚蓝色，窗外有千纸鹤，我的眼里只有你</font>

> 示例效果的源代码：
>
> ```html
> <font color='green'>我有个大胆的想法，绿了你的男朋友</font>
> <font color='pink'>你喜欢粉色的娃娃，我喜欢你</font>
> <font color='cornflowerblue'>天空是蔚蓝色，窗外有千纸鹤，我的眼里只有你</font>
> ```

# 15.图标功能

:point_right: 查阅图标文档快捷键：==win + .==     

:thought_balloon: 下面我列举了一些<font color='orange'>自己常用的图标语法</font>，其它的可根据自己需要自行查阅图标文档 :book:

:heavy_exclamation_mark: 注意：实际语法是没有空格的，但该列表中的语法在第二个冒号前面有空格是展示需要，如果不打空格则会变成图标

| 图标                      | 语法                       |
| ------------------------- | -------------------------- |
| :yellow_heart:            | :yellow_heart :            |
| :green_heart:             | :green_heart :             |
| :heart:                   | :heart :                   |
| :sparkling_heart:         | :sparkling_heart :         |
| :broken_heart:            | :broken_heart :            |
| :star:                    | :star :                    |
| :sparkles:                | :sparkles :                |
| :dizzy:                   | :dizzy :                   |
| :thumbsup:                | :thumbsup :                |
| :thumbsdown:              | :thumbsdown :              |
| :white_check_mark:        | :white_check_mark :        |
| :heavy_check_mark:        | :heavy_check_mark :        |
| :point_up_2:              | :point_up_2 :              |
| :point_down:              | :point_down :              |
| :point_right:             | :point_right :             |
| :thought_balloon:         | :thought_balloon :         |
| :herb:                    | :herb :                    |
| :four_leaf_clover:        | :four_leaf_clover :        |
| :droplet:                 | :droplet :                 |
| :key:                     | :key :                     |
| :e-mail:                  | :email :                   |
| :page_facing_up:          | :page_facing_up :          |
| :green_book:              | :green_book :              |
| :blue_book:               | :blue_book :               |
| :pencil2:                 | :pencil2 :                 |
| :book:                    | :book :                    |
| :bookmark:                | :bookmark :                |
| :round_pushpin:           | :round_pushpin :           |
| :triangular_flag_on_post: | :triangular_flag_on_post : |
| :one:                     | :one :                     |
| :two:                     | :two :                     |
| :nine:                    | :nine :                    |
| :x:                       | :x :                       |
| :heavy_exclamation_mark:  | :heavy_exclamation_mark :  |
| :question:                | :question :                |
| :small_orange_diamond:    | :small_orange_diamond :    |
| :small_blue_diamond:      | :small_blue_diamond :      |

# 16.超链接

markdown语法：**<font color='red'>\[链接名](链接)</font>**

<font color='purple'>示例效果：</font>点击这里，[初学者入门必看，打通编程疑惑](https://blog.csdn.net/qq_62982856/article/details/127344287?spm=1001.2014.3001.5502)

> 示例效果的源代码：
>
> ```html
> 点击这里，[初学者入门必看，打通编程疑惑](https://blog.csdn.net/qq_62982856/article/details/127344287?spm=1001.2014.3001.5502)
> ```

# :bookmark: 小结

:speech_balloon: 过去日子里我陆陆续续用了许多支持markdown语法的程序员笔记软件，但兜兜转转还是回到了Typora，我确实认为它是最好的程序员笔记工具，你值得去学一下，遇到任何疑惑联系软件协会

# 软件协会学习小组第一次活动第一周任务

1、自己尝试上面的内容，使用markdown语法写一篇笔记

2、上传自己的.md格式的笔记到软协官网

之所以有这两个任务，主要是因为我们以后的形式都是通过提交.md的文件来完成，所以我们第一周就是学会如何上传这些东西，如何书写markdown的语法格式，这样我们打通了之后交流的渠道，就会少很多的麻烦！！！

第一周的任务很简单，也是给大家一个缓冲的时间。

上交时间:2022年21晚上八点之前(这周五晚上八点之前)

希望大家能够认真完成，下一周的难度会稍微大一点！！





:house: 了解更多关注软协官网：https://www.csuftsap.cn/

:green_heart: <font color='red'>来自软件协会编辑，注册会员即可获取全部开源.md资源，请勿转载，归软件协会所有。</font>
