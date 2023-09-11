#ifndef __INDENT_PRINT_HPP
#define __INDENT_PRINT_HPP

#include <iostream>
#include <string>

namespace indent_print
{

    class IndentPrinter
    {
    private:
        int indentLevel = 0;
        std::string indentContent = "\t";

    public:
        IndentPrinter();

        IndentPrinter::IndentPrinter() : indentLevel(0) {}

        void setIndentLevel(int level)
        {
            indentLevel = level;
        }
        void increaseIndentLevel()
        {
            indentLevel++;
        }
        void decreaseIndentLevel()
        {
            if (indentLevel > 0)
                indentLevel--;
        }
        void resetIndentLevel() { indentLevel = 0; }

        void setIndentContent(const std::string &str)
        {
            if (str.empty())
            {
                return;
            }
            indentContent = str;
        };

        void printIndented(const char *str)
        {
            for (int i = 0; i < indentLevel; i++)
            {
                std::cout << indentContent;
            }
            std::cout << str << std::endl;
        }
        void printIndented(const std::string &str)
        {
            printIndented(str.c_str());
        }
        void printIndented(const char c)
        {
            printIndented(std::string(1, c));
        }
        void printIndented(const int i)
        {
            printIndented(std::to_string(i));
        }
    };

} // namespace IndenPrint

#endif // INDENT_PRINT_HPP