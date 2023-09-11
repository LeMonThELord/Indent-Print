#include "../src/indent_print.hpp"

int main(void)
{
    indent_print::IndentPrinter printer;

    printer.printIndented("This is the first level");

    printer.increaseIndentLevel();
    printer.printIndented("This is the second level");

    printer.increaseIndentLevel();
    printer.printIndented("This is the third level");

    printer.decreaseIndentLevel();
    printer.printIndented("Back to the second level");

    printer.decreaseIndentLevel();
    printer.printIndented("Back to the first level");

    printer.resetIndentLevel();
    
    printer.printIndented("Hello World!");
    printer.increaseIndentLevel();
    printer.printIndented("This is indented!");
    printer.decreaseIndentLevel();
    printer.printIndented("Hello World Again!");
    return 0;
}