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
 接下来我们可以按照同样的方法为其他对象添加行为。
 