<font size="6">  “自顶向下，逐步求精”的编程方法  </font><br />

一、定义

很多问题我们无法一步到位，这时候就要走一步再走一步，将复杂的问题分成简单的问题，将一个复杂的功能的实现分为自上而下的解构过程，将所谓的“黑箱”分崩离析，逐步细化为它所要实现的一个个简单功能集合，并一点点地将简单功能实现，再组合，最后实现我们所要实现的复杂功能，这便是我理解的“自顶向下，逐步求精”。 

即：
<div align="center">
<img src="images\hw07\20171127195320148.jfif"height="350" width="500">  </div>

二、例子

我们以洗衣机工作为例：
利用自顶向下的编程方法，得到：

```
read 用户模式
    start 电源

read 目标水位
水位 = get_water_volume()
    WHILE 水位 != 目标水位
        water_in_switch(open)
        water_out_switch(close)
        水位 = get_water_volume()
    ENDWHILE
    water_in_switch(close)

 READ 浸泡时间
    时间 = time_counter()
    WHILE 时间 != 浸泡时间
        water_in_switch(close)
        water_out_switch(close)
        时间 = time_counter() - 之前步骤时间
    ENDWHILE

READ 转动时间
    时间 = time_counter() - 之前步骤时间
    WHILE 时间 != 滚筒时间
        motor_run(left)
        motor_run(right)
        时间 = time_counter() - 之前步骤时间
    ENDWHILE

水位 = get_water_volume()
    WHILE 水位 != 0
        water_in_switch(close)
        water_out_switch(open)
        水位 = get_water_volume()
    ENDWHILE
    water_out_switch(close)

read 转动时间
    时间 = time_counter() - 之前步骤时间
     WHILE 时间 != 滚筒时间
        motor_run(left)
        motor_run(right)
        时间 = time_counter() - 之前步骤时间
    ENDWHILE

```