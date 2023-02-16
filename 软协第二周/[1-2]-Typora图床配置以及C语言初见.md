# :star: 软件协会第一次活动第二周任务布置

:round_pushpin: 来自：==中南林业科技大学软件协会学术部：谢添，樊东升==

:timer_clock: 时间：<font color='cornflowerblue'>2022 - 10 - 23</font>

:house: 官网：https://www.csuftsap.cn/

:speech_balloon: 任务布置说明：

- 上传一张来自`gitee`或`腾讯云cos`或`阿里云oss`的图床，学会一种方式上传即可。
- 题目考察范围：初识C语言与三大基本结构
- 所有答案均放在我所写的`空代码块`或`空引用框`中

:speech_balloon: 一些话：这是软件协会第一次代码训练，以下给出的都是经典题目，希望大家都做一做，另外，进阶训练可能现在来说对大家有点难度，但不要怕，你不会就应该去学习。这些题都是你以后会多次碰见的，那为什么不现在就掌握呢？千万不要去抄别人的代码，一定要自己能独立的写出来，软件协会做这些都是希望大家的能力能够真正的提升，如果有什么不理解的地方最好先独立思考再问。**<font color='red'>加油，你是最棒的。</font>**:rocket:

# 1.图床任务

:question: **为什么要设置图床，图床是什么**

> 你们传给我们的.md文档如果存在图片，你们能看到图片是因为Typora这个软件引用了你们图片本地的地址，然后显示了这张图片，但是当这个文档发送给其他人，他们的电脑上并没有这张图片，那么其他人是看不到你在文档上上传的图片。这时候我们就想到，为什么我们可以看到网络上的图片，这是因为图片被上传网络上，PicGo可以定位到网上这张图片并且显示。
>
> 那么我们也可以把图片传到网上，并且把这个图片的地址写到Typora，如此一来，我们不就可以把文档发送给别人的同时别人也可以看到这张图片了吗？
>
> 那么我们如何上传到网上呢？百度云盘吗？百度云盘肯定是不可以的，因为他们做了加密处理，这时候我们就需要寻找图床，图床就是网络图片保存的位置，网络上 图床有免费的有收费的，免费的一般访问速度慢，体验不好。

:round_pushpin: <font color='purple'>我们给大家提供三种方案，让大家能够上传图片</font>，<font color=red>这三种方式各有优点，可自行选择：</font>

- 方案1：使用`gitee`当图床，首先是完全免费的，gitee图床是网上免费图床里面体验算是最好的了，因为服务器在中国，不过半年前gitee加了防盗链，让这个图床变得不太稳定。

  :house: <font color='cornflowerblue'>gitee配置图床教程链接</font>：https://blog.csdn.net/qq_62982856/article/details/127184855?spm=1001.2014.3001.5501

- 方案2：使用`腾讯云cos对象存储`，这个是要钱的，如果个人使用大概一年的成本是15元左右。

  :house: <font color='cornflowerblue'>cos配置图床教程链接</font>：https://ji9ihst4dp.feishu.cn/docx/doxcnpC948g5sd9sAjHqsbQru0e

- 方案3：使用`阿里云oss对象存储`，这个是要钱的，如果个人使用如果只是加载图片大概一年的成本是9元左右，如果需要下载其中的图片或文件需要额外付费，但也不会很多。

  :house: <font color='cornflowerblue'>oss配置图床教程链接</font>：https://blog.csdn.net/qq_62982856/article/details/127477102?spm=1001.2014.3001.5501

:point_down: 学习完以后需要完成以下任务！！

:speech_balloon: 上传一张图片在下面的引用框中，图片路径在 `gitee` ，`cos对象存储`与`oss对象存储`中选择一个即可

>![](https://gitee.com/abigailchang/abigailbox/raw/master/image/image-20221024172223066-16666034667979.png)

# 2.初识C语言

:speech_balloon: 很多理论性的东西也许你不知道，所以你去学习了，但一定不要直接copy，一定要根据自己学习后的对这个知识点的理解用自己的话总结出来。做这些都是希望大家能够真正提升自己对代码的理解。

## 2.1 用<font color='red'>自己的话</font>谈谈对#include<stdio.h>的理解与程序为什么需要这个头文件

>#include预处理器指令就是把.stdio.h这个文件中的东西“复制粘贴”到这个位置，在预处理之后形成完整的源代码，然后再编译运行；我们要使用的输入输出函数的信息包含在这个头文件中，所以需要这个头文件；

## 2.2 用<font color='red'>自己的话</font>谈谈为什么程序一定要main函数

>是程序的入口，有且仅有一个；

## 2.3 为什么在vs中直接使用scanf会报错

>不安全 存在内存溢出的风险，scanf在使用的时候不会检测输入的字符串的长度；	
>
>其实可以用 #define _CRT_SECURE_NO_WARNINGS 在.c的第一行插入解决不安全的这个问题



<font size='5'>负责人你好，我用的编译器是dev c++,所以没有用scanf_s</font>

# 3.顺序结构

:pencil: 讨论以下代码，有没有问题，如果有问题，请说明有几处错误及对应原因，并写出正确的完整代码。

```c
#include<math.h>
int main()
{
  scanf_s("请输入一个整数：%lf",&temp);
  int sum = temp + temp;
  printf("sum = %d",&temp);
  return 0;
}
```

>问题分析：
>
>头文件要引用stdio.h；scanf函数里不要加字，那段话可以在前面加一个printf补上；没有事先定义temp；printf里不要加&；

:point_down: <font color='orange'>修改后的正确代码</font>

```c
#include<stdio.h>

int main()

{   
    int temp;
    printf("请输入一个整数： ");
    scanf_s("%d",&temp);
    int sum=temp+temp;
    printf("sum = %d",sum);
    
    
    return 0;
}
```

# 4.分支结构

## 4.1 一元二次方程求解

:pencil: 根据下面给出的求根公式，计算并输出一元二次方程 a$x^2$+bx+c=0 的两个实根，要求精确到小数点后4位。其中a，b，c的值由用户从键盘输入。如果用户输入的系数不满足求实根的要求，输出错误提示 "error!"。

![预览大图](https://sapfigure-1-1256773093.cos.ap-nanjing.myqcloud.com/learnFile-image/244058.png)

- <font color='cornflowerblue'>输入格式</font>: `%lf,%lf,%lf`
- <font color='cornflowerblue'>输出格式</font>
  1. 如果存在解则输出：`x1=%.4lf, x2=%.4lf\n`
  2. 如果不存在解则输出错误提示信息：`error!`

:speech_balloon: **提醒**

```c
/*
	变量定义：
	a,b,c代表一元二次方程的系数
	x1,x2代表两个解
*/
double a,b,c,x1,x2

//一个双精度浮点数保留小数点后四位输出
printf("%.4lf",a);
```

:point_down: <font color='orange'>答案代码</font>

```c
#include<stdio.h>
#include<math.h>

int main()
{
  
double a,b,c,x1,x2,deta;
 
scanf("%lf,%lf,%lf",&a,&b,&c);

 deta=b*b-4*a*c;

if(deta>=0){
x1=b/-2*a+sqrt(deta)/2*a;
x2=b/-2*a-sqrt(deta)/2*a;
printf("x1=%.4lf,x2=%.4lf",x1,x2);
}else{
printf("error");
}

  return 0;
}

```

## 4.2 成绩等级

:pencil: 给出一百分制成绩，输入一个成绩，要求输出成绩等级A、B、C、D、E。 90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E，如果输入数据不在0~100范围内，请输出一行：“Score is error!”。<font color='red'>请使用 switch 语句完成任务。</font>

- <font color='cornflowerblue'>输入</font>：从键盘输入一个`整型`成绩。
- <font color='cornflowerblue'>输出</font>
  1. 如果输入数据在0到100范围内：输出一个字符，表示成绩等级。
  2. 如果输入数据不在0~100范围内，请输出一行：“Score is error!”。

:point_down: <font color='orange'>答案代码</font>

```c
#include<stdio.h>

int main()
{
  int grades;
  scanf("%d",&grades);
  grades/=10;
  
switch(grades){
  case 10:
  case 9:
  printf("A\n");
  break;

  case 8:
  printf("B\n");
  break;

  case 7:
  printf("C\n");
  break;

  case 6:
  printf("D\n");
  break;

  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
  printf("E\n");
  break;

  default:
  printf("Score is error!");
  break;
 }
   


  return 0;
}

```

# 5.循环结构

## 5.1 求sn=a+aa+aaa+aaaa+......的值

键盘输入正整数a和n，求 s=a+aa+aaa+aaaa+aa...a（n个a）的值。例如：

- a=2 ，n=5时,表示计算由2组成的数的和：2+22+222+2222+22222  ( 此时 共有5个数相加)。
- 输入：5 3   表示3个由5组成的数相加，即计算5+55+555的值，输出：`615`
- 输入：5 4   表示计算5+55+555+5555的值，输出：`6170`

:point_down: <font color='orange'>答案代码</font>   

```c
#include<stdio.h>
#include<math.h>
int main()
{
int a,n,s,i=0,t=1;
scanf("%d %d",&a,&n);

do{

i=10*i+t;
t=t+1; 
s=i*a;

}while(t<=n);

printf("%d",s);


return 0;
}
```

## 5.2 闰年

:pencil: 从键盘输入任意年份year，判别该年份是否闰年。

- <font color='cornflowerblue'>输入</font>：从键盘任意输入一个年份 。
- <font color='cornflowerblue'>输出</font>：根据是否为闰年进行输出，是输出"是闰年！",否输出"不是闰年！"。 

:point_down: <font color='orange'>答案代码</font>   

```c
#include<stdio.h>

int main()
{
	int year;
	scanf("%d",&year);
	 
	if( (year%4!=0)||(year%100==0&&year%400!=0) ){
		
		printf("不是闰年！\n"); 
	}else{
		printf("是闰年！\n"); 
	}
	
	
	return 0;
 } 
```

# 6.进阶练习

:speech_balloon: 掌握了上面的题是基础，接下来的两题才是开拓代码思维的时候，如果你并不会做，也希望去问别人或者bi站上找视频学习，祝你好运！

## 6.1 冒泡排序

:pencil: 从键盘输入五个整数按从小到大的顺序输出。

- <font color='cornflowerblue'>输入格式</font>

  ```c
  printf("请输入五个整数:");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  ```

- <font color='cornflowerblue'>输出格式</font>

  ```c
  printf_s("从小到大排列为:%d,%d,%d,%d,%d",a,b,c,d,e);
  ```

:point_down: <font color='orange'>答案代码</font>   

```c
#include<stdio.h>

int main()
{ 
 
 printf("请输入五个整数：\n");
 int arr[5];
 int i; 
 for ( i = 0; i < 5; i++)
  scanf("%d", &arr[i]);
 
 
 for (i = 0; i < 5; i++)
 {
     int j;
     for (j = i+1; j < 5; j++)
   {
	   int temp = 0;
	   if (arr[i] > arr[j])
	   {
	    temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
       }
   }
 }
   
   int a,b,c,d,e;
   a=arr[0];
   b=arr[1];
   c=arr[2];
   d=arr[3];
   e=arr[4];

   printf("%d,%d,%d,%d,%d", a,b,c,d,e);
   

 return 0;
}
```

## 6.2 斐波拉契数列

:pencil: 斐波拉契数列：1,1,2,3,5,8,13,21,34,55...根据这个规律求斐波拉契数列的第n个元素值

- <font color='cornflowerblue'>输入格式</font>

  ```c
  scanf_s("%d",&n);
  ```

- <font color='cornflowerblue'>输出格式</font>

  ```c
  printf("第 %d 个数为：%d",n,value);
  ```

:point_down: <font color='orange'>答案代码</font>   

```c
#include <stdio.h>

unsigned Fib(unsigned n)    //声明函数 
{
 if(n>2)
  return Fib(n-1)+Fib(n-2);
 else
  return 1;
}



int main(void)
{
 unsigned n,value;
 
 scanf("%d",&n);
 value=Fib(n);
 printf("第 %d 个数为：%d\n",n,value);
 return 0; 
}
```

## 6.3 最大公约数

:pencil: 求两个正整数的最大公约数

- 输入格式

  ```c
  scanf_s("%d %d",&a,&b);
  ```

- 输出格式

  ```c
  printf("两个数的最大公约数为：%d",result);
  ```

:round_pushpin: 提示：辗转相除法

![image-20221023154207854](https://sapfigure-1-1256773093.cos.ap-nanjing.myqcloud.com/learnFile-image/image-20221023154207854.png)

:point_down: <font color='orange'>答案代码</font>   

```c
#include<stdio.h> 
int main()

{

	int a,b,t,result;

	scanf("%d %d",&a,&b);

 		while(b!=0)

    	{

			t=a%b;

			a=b;

			b=t;

	    }

	result=a;

	printf("两个数的最大公约数为:%d",result);

   	return 0;

}

```

# :bookmark: 小结

:house: 了解更多关注软协官网：https://www.csuftsap.cn/

:green_heart: <font color='red'>来自软件协会编辑，注册会员即可获取全部开源.md资源，请勿转载，归软件协会所有。</font>
