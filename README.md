Project-lemon-mac
=============

An adapted version of project lemon for MacOS.

基于[Project-Lemon](https://github.com/Sojiv/Project_lemon)修改。
方法参考自[在MacOS下使用lemon评测](https://www.cnblogs.com/FallDream/p/maclemon.html)。

请用git clone源代码，或使用右方的Download ZIP功能。

安装qt5:
```sh
brew install qt@5
```

将qmake加入$PATH:
```sh
export PATH=$PATH:/opt/homebrew/opt/qt@5/bin
```

进入源代码目录编译：
```sh
qmake lemon.pro
make
```

关于图标：
可参考[MacOS使用手册](https://support.apple.com/zh-cn/guide/mac-help/mchlp2313/mac)更改lemon的图标。