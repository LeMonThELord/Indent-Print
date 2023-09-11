# IndenPrint

IndenPrint是一个供C和C++开发者使用的工具，用于在控制台中打印带有缩进的文本。它可以帮助你更方便地组织和显示缩进层级，使代码的可读性更好。

## 使用示例

下面是一个简单的C++示例，展示了如何使用IndenPrint工具：

```cpp
#include "indend_print.hpp"

int main()
{
    IndentPrinter printer;

    printer.increaseIndentLevel();
    printer.printIndented("This is indented text.");
    
    printer.increaseIndentLevel();
    printer.printIndented("This is indented even more.");
    
    printer.decreaseIndentLevel();
    printer.printIndented("This is back to previous indentation level.");
    
    return 0;
}
```

## 函数说明

- `setIndentLevel(int level)`: 设置当前的缩进层级。
- `increaseIndentLevel()`: 增加缩进层级。
- `decreaseIndentLevel()`: 减少缩进层级。
- `printIndented(const std::string& text)`: 打印带有缩进的文本。

## 安装和使用

1. 将`indend_print.hpp`文件复制到你的项目中。
2. 在你的代码中包含`indend_print.hpp`头文件。
3. 使用上述示例中的函数来实现你所需的缩进打印功能。



## 贡献

如果你发现任何问题或有改进建议，请随时提出issue或创建一个pull请求。你的贡献将对这个项目产生积极的影响！

## 许可证

这个项目基于MIT许可证进行许可。详细信息请参阅[LICENSE](LICENSE)文件。