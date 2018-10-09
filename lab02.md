---
layout: default
title: 游戏开发技术博客
---

***一&emsp;&emsp;安装一个Construct2***

&emsp;&emsp;1.安装链接[Construct 2:](https://www.scirra.com/construct2)

&emsp;&emsp;2.对于初学者来说，free版本就够用了。如果不是特别喜欢不建议购买

---
***二&emsp;&emsp;开始制作***

&emsp;&emsp;1.新建一个框架

&emsp;&emsp;2.单击File按钮，然后选择New

<img src="images\制作技术博客\QQ图片20181007204106.jpg"  height="300" width="400">

然后点击新建

---
3.插入对象

我们想要的第一件事是重复的背景图块。首先，这是你的背景纹理 - 右键单击​​它并将其保存到你的计算机某处：
<img src="images\制作技术博客\bg.png"  height="300" width="400">

现在，双击布局中的空格以插入新对象。并且左键单击布局中间附近的某个位置,现在导入您之前保存的图块图像。单击文件夹图标以从磁盘加载纹理，找到将文件下载到的位置，然后选择它（第二张图）。
<div align="center">
<img src="images\制作技术博客\insertobject.png"  height="150" width="200">
<img src="images\制作技术博客\loadtexturefromfile.png"  height="150" width="200">
 </div>
现在，您应该在布局中看到平铺的背景对象。让我们调整它以覆盖整个布局。先选中它，然后像下图一样更改属性
<div align="center">
<img src="images\制作技术博客\tiledproperties.png"  height="150" width="200">
 </div>

---

 3.添加图层

 要管理图层，请单击Layers键。然后点击新建图层，并将之命名为Main.
<div align="center">
<img src="images\制作技术博客\layerstab.png"  height="150" width="200">
<img src="images\制作技术博客\layersbar.png"  height="150" width="200">
 </div>
 
 ---
 4.添加输出对象

 双击以插入另一个新对象。这次，选择Mouse对象，因为我们需要鼠标输入。对Keyboard对象再次执行相同操作。
 注意：这些对象不需要放置在布局中。它们是隐藏的，并自动在项目范围内工作。现在我们项目中的所有布局都可以接受鼠标和键盘输入。

---
 5.插入游戏对象

 player 和 monster 和 bullet 和 explode
 <div align="center">
<img src="images\制作技术博客\player.png"  height="75" width="100">
<img src="images\制作技术博客\monster.png"  height="75" width="100">
<img src="images\制作技术博客\bullet.png"  height="75" width="100">
<img src="images\制作技术博客\explode.png"  height="75" width="100">
 </div>
双击来插入对象，然后双击“Sprite”对象。

当鼠标变为十字准线时，单击布局中的某个位置。工具提示应为“Main”。

弹出纹理编辑器。单击打开图标，然后加载四个纹理中的一个。

关闭纹理编辑器，保存更改。

（或者可以鼠标直接拖动到目标区域）

注：这些对象将被称为Sprite，Sprite2，Sprite3和Sprite4，我们可以根据需要将它们重命名为Player，Monster，Bullet和Explosion

---
6.添加行为

首先为玩家添加8方向移动行为；
<div align="center">
<img src="images\制作技术博客\openbehaviors.png"  height="150" width="200">
<img src="images\制作技术博客\add8dir.png"  height="150" width="200">
 </div>
 接下来我们可以按照同样的方法为其他对象添加行为

 将Bullet移动和Destroy外部布局添加到Bullet对象

 将子弹移动添加到Monster对象

 将Fade行为添加到Explosion对象

 自从我们添加了一个行为后，属性栏中出现了一些额外的属性：
 <div align="center">
 <img src="images\制作技术博客\bulletproperties.png"  height="150" width="200">
 </div>
 然后我们调整行为的工作方式。将速度从400更改为80，将Bullet对象的速度更改为600，将Explosion对象的淡入淡出行为的淡出时间更改为0.5（即半秒）

 ---
 7.创造更多的怪物

首先选中怪物，然后按住Ctrl键，鼠标拖动即可复制出更多的怪物

这时会出现这样的布局
<div align="center">
 <img src="images\制作技术博客\severalghosts.png"  height="150" width="200">
 </div>
 然后就可以进入下一步操作啦

 ---
 8.增加活动

 首先切换到事件表
 <div align="center">
 <img src="images\制作技术博客\eventsheettab.png"  height="75" width="200">
 </div>
 然后开始添加活动，首先双击事件表中的空白处
 <div align="center">
 <img src="images\制作技术博客\newevent_2.png"  height="250" width="300">
 </div>
 双击的每个标记的条件，将其插入.最后就会得到这样的界面
  <div align="center">
 <img src="images\制作技术博客\alwayslookatmouse.png"  height="50" width="500">
 </div>
 这样就完成第一个活动啦

 接下来，就是同样增加各种活动：

 条件：鼠标 - > 单击 - >左键单击（默认值）

 操作：播放器 - >生成另一个对象 - >对于对象，选择Bullet对象。

对于Layer，放1（“Main”层是第1层 - 记住Construct 2从零开始计数）。将图像点保留为0。

---
如果你运行游戏，你会注意到子弹从玩家中间射击，而不是从枪尾射出。让我们通过在枪的末端放置一个图像点来解决这个问题。

右键单击项目或对象栏中的播放器，然后选择“ 编辑动画”.

播放器的图像编辑器重新出现。单击原点和图像点工具
<div align="center">
 <img src="images\制作技术博客\editanimations.png"  height="150" width="200">
 <img src="images\制作技术博客\imagepointstool.png"  height="50" width="300">
 </div>
 单击绿色添加按钮。出现蓝点 - 这是我们的新图像点。在玩家枪的末端单击鼠标左键，将图像点放在那里
   <div align="center">
 <img src="images\制作技术博客\placingimagepoint.png"  height="150" width="200">

 这样就OK啦
 </div>

 ---
 让子弹杀死怪物。添加以下事件：

Condition: Bullet -> On collision with another object -> pick Monster.

Action: Monster -> Destroy

Action: Bullet -> Spawn another object -> Explosion, layer 1

Action: Bullet -> Destroy

---
爆炸效果设置：

单击右下角的对象栏中的Explosion对象，或单击项目栏（带有图层栏的选项卡）。其属性显示在左侧的属性栏中。在底部，将其Blend mode属性设置为Additive。

---
设置怪物随机布局

Condition: Monster -> Is outside layout

Action: Monster -> Set angle toward position -> For X, Player.X - for Y, Player.Y.
 <div align="center">
 <img src="images\制作技术博客\ghostshooterevent4.png"  height="50" width="500">
 </div>

 ---
 实例变量

 实例变量允许每个怪物存储自己的健康值。变量只是一个可以改变（或变化）的值，它们是为每个实例单独存储的，因此是名称实例变量。
  <div align="center">
 <img src="images\制作技术博客\instvars.png"  height="150" width="300">
 <img src="images\制作技术博客\healthinstvar.png"  height="100" width="150">
 </div>
这启动了5个生命中的每个怪物。当它们被击中时，我们将从健康状态中减去1，然后当健康状态为零时，我们将摧毁该物体

---
保持得分

右键单击事件表底部的空间，然后选择“ 添加全局变量”。
<div align="center">
 <img src="images\制作技术博客\addglobal.png"  height="150" width="150">
 <img src="images\制作技术博客\addglobalscore.png"  height="150" width="150">
 </div>
 这样就可以在屏幕上显示玩家得分啦

 ---
 现在，你的第一个游戏就制作完成了，你可以选择分享它

 效果展示（局部）
 <div align="center">
 <img src="images\制作技术博客\效果图.gif"  height="200" width="200">
 </div>
