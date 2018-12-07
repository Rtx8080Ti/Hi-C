## macOS编译环境

* 系统版本：macOS Mojave 10.14.2

## 快速打开终端
* command（Alt）+空格，会弹出搜索框，输入term(或输入终端),确认.

## 安装gcc
* 打开 启动台>其他>终端
* 打开 输入gcc

![2.1.1](https://raw.githubusercontent.com/Rtx8080Ti/Hi-C/master/screenshots/2/2.1.1.png)

![2.1.2](https://raw.githubusercontent.com/Rtx8080Ti/Hi-C/master/screenshots/2/2.1.2.png)

![2.1.3](https://raw.githubusercontent.com/Rtx8080Ti/Hi-C/master/screenshots/2/2.1.3.png)

当然你也可以在App Store下载并安装Xcode

* 安装完毕后输入gcc -version
* 查看gcc版本

![2.1.3](https://raw.githubusercontent.com/Rtx8080Ti/Hi-C/master/screenshots/2/2.1.4.png)

## 常用macOS命令

命令名|功能描述|使用举例
---|:--:|---:
ls|显示当前目录的内容|ls -la
cd|改变当前目录|cd dirname
cd ..|返回上一级目录|cd ..
cd ~|打开根目录|cd ~
nano|使用nano文本编辑器打开|nano hellow.c
gcc|编译文件|gcc hellow.c
./|运行|./a.out
mkdir|创建一个目录|mkdir name
rmdir|删除一个目录|rmdir name
mvdir|移动或重命名一个目录|mvdir name1 name2
pwd|显示当前目录的路径名|pwd
dircmp|比较两个目录的内容|dircmp name1 name2
rm|删除文件或目录|rm filename
mv|改变文件名或所在目录|mv file1 file2
find|使用匹配表达式查找文件|find . -name "*.c" -print
file|显示文件类型|file filename
open|使用默认的程序打开文件|open filename  
## 使用term（终端）创建“hellow world“


