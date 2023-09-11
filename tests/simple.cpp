#include "../src/indent_print.hpp"

int main(void)
{
    indent_print::IndentPrinter printer;

    printer.printIndented("Hello World!");
    printer.increaseIndentLevel();
    printer.printIndented("This is indented!");
    printer.decreaseIndentLevel();
    printer.printIndented("Hello World Again!");
    return 0;
}