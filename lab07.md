<font size="6">  制作HTML5游戏2   </font><br />

<font size="5">一 游戏策划   </font><br />

<font size="4"> 楔子(Setting)：</font><br />

&emsp;&emsp;末日来临，怪物降生地球，它们拥有比我们更强的生命力和体质。但是，我们有无畏的勇者，来吧！拿起你手中的武器，消灭它们！

<font size="4"> 玩法(Gameplay)：</font><br />

&emsp;&emsp;敌人会随机出现在视野中，你需要鼠标左键控制玩家攻击，方向键控制玩家移动

&emsp;&emsp;Player：可以移动，无限发射子弹

&emsp;&emsp;Monster: 体制强大，拥有五点血量

&emsp;&emsp;Bullet: 子弹，命中目标后爆炸

&emsp;&emsp;Explode: 子弹命中后效果

<font size="5">二 游戏设计：</font><br />

&emsp;&emsp;Player：
<div align="left">
<img src="images\制作技术博客\player.png"height="50" width="100">  </div>

```
+----------------------------------------------------+  
| Object Name :Player                                |  
+----------------------------------------------------+
| Attributes :图片、位置                              |
+--------------+-------------------------------------+
|      Collaborator        |     Events & Actions    |
+--------------------------+-------------------------+
|           bullet         |    鼠标左键发射bullet    |
|           monster        |  与monster碰撞、被销毁   |
+--------------------------+-------------------------+
```
&emsp;&emsp;Monster:
<div align="left">
<img src="images\制作技术博客\monster.png"height="50" width="100">  </div>

```
+----------------------------------------------------+  
| Object Name ：monster                               |  
+----------------------------------------------------+
| Attributes :图片、位置                              |
+--------------+-------------------------------------+
|      Collaborator        |     Events & Actions    |
+--------------------------+-------------------------+
|          sprite          |与sprite碰撞摧毁对方结束游戏|
|          bullet          |   被bullet击中血量减少   |
|                          |          消失           |
+--------------------------+-------------------------+
```
&emsp;&emsp;Bullet:
<div align="left">
<img src="images\制作技术博客\bullet.png"height="50" width="100">  </div>

```
+----------------------------------------------------+  
| Object Name ：bullet                               |  
+----------------------------------------------------+
| Attributes :图片、位置                              |
+--------------+-------------------------------------+
|      Collaborator        |     Events & Actions    |
+--------------------------+-------------------------+
|       Sprite&Monster     | 碰撞对monster伤害后   消失|
|        &explode          |    &触发explode效果      |
+--------------------------+-------------------------+
```
&emsp;&emsp;Explode:
<div align="left">
<img src="images\制作技术博客\explode.png"height="50" width="100">  </div>

```
+----------------------------------------------------+  
| Object Name ：explode                               |  
+----------------------------------------------------+
| Attributes :图片、位置                              |
+--------------+-------------------------------------+
|      Collaborator        |     Events & Actions    |
+--------------------------+-------------------------+
|           bullet         | bullet击中monster后触发  |
|                          |        0.5s后消失       |
+--------------------------+-------------------------+
```

<font size="5">三 效果展示：</font><br />

<div align="left">
<img src="images\lab07\捕获.PNG"height="200" width="300">  </div>

<div align="right">
<img src="images\lab07\动态效果图.gif"height="200" width="300">  </div>