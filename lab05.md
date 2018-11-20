<font size="6">  机器语言编程  </font><br /> 

<font size="5">  任务一：简单程序  </font><br /> 

<font size="4">（1）点step after step。观察并回答下面问题：</font><br />

1.  PC，IR 寄存器的作用。

&emsp;&emsp;PC的作用：存储下一条指令

&emsp;&emsp;IR的作用：存储当前要执行的指令

2. ACC 寄存器的全称与作用。

&emsp;&emsp;Accumulator累加器

&emsp;&emsp;作用：运算器中既能存放运算前的操作数，又能存放运算结果的寄存器。

3. 用“LOD #3”指令的执行过程，解释Fetch-Execute周期。

&emsp;&emsp;第一步：IR读取指令 “LOD #3”

&emsp;&emsp;第二步：Decoder编译

&emsp;&emsp;第三步：ALU执行，并将3存储到ACC中

4. 用“ADD W” 指令的执行过程，解释Fetch-Execute周期。

&emsp;&emsp;第一步：IR读取指令 “ADD W”

&emsp;&emsp;第二步：Decoder编译

&emsp;&emsp;第三步：ALU执行，把W中存储的数读出并与此时ACC中的"7"相加，得到“10”

5. “LOD #3” 与 “ADD W” 指令的执行在Fetch-Execute周期级别，有什么不同。

&emsp;&emsp;不同之处在于“LOD #3”直接在指令中读入数字3；而“ADD W”则在内存中读入数字3


<font size="4">（2）点击“Binary”,观察回答下面问题</font><br />

1. 写出指令 “LOD #7” 的二进制形式，按指令结构，解释每部分的含义。

&emsp;&emsp;00010100 00000111

&emsp;&emsp;00010100代表操作指令

&emsp;&emsp;00000111以0开头，代表数字

2. 解释 RAM 的地址。

&emsp;&emsp;以0开头代表指令单元

&emsp;&emsp;以1开头代表地址单元

3. 该机器CPU是几位的？（按累加器的位数）

&emsp;&emsp;8位

4. 写出该程序对应的 C语言表达。

&emsp;&emsp;int a = 3;

&emsp;&emsp;int b = 7;

&emsp;&emsp;int c = a + b;

---

<font size="5">  任务二:简单循环 </font><br /> 

<font size="4"> (1) 输入程序Program 2，运行并回答问题
</font><br /> 

1. 用一句话总结程序的功能

&emsp;&emsp;将x中的数不断减1

2. 写出对应的 c 语言程序

&emsp;&emsp;int x = 3;

&emsp;&emsp;while(x != 0){

&emsp;&emsp;&emsp;&emsp;x = x - 1;

&emsp;&emsp;}

<font size="4">(2) 修改该程序，用机器语言实现 10+9+8+..1 ，输出结果存放于内存 Y
</font><br /> 

1. 写出 c 语言的计算过程

&emsp;&emsp;int x = 10,y = 0;

&emsp;&emsp;while(x > 1){

&emsp;&emsp;&emsp;&emsp;y = y + x;

&emsp;&emsp;&emsp;&emsp;x = x - 1;

&emsp;&emsp;}

&emsp;&emsp;return y;

2. 写出机器语言的计算过程

&emsp;&emsp;
<div align="center">
<img src="images\lab05\捕获.PNG"height="300" width="500">  </div>

3. 用自己的语言，简单总结高级语言与机器语言的区别与联系。

&emsp;&emsp;区别：高级语言是人能容易理解的语言，而机器语言是计算机使用的语言，人难以理解

&emsp;&emsp;联系：我们在编程时，编译器将高级语言编译成机器语言，再交由CPU执行