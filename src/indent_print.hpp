#ifndef INDENT_PRINT_HPP
#define INDENT_PRINT_HPP

#include <iostream>
#include <cstdarg>
#include <string>

namespace indent_print
{

    class IndentPrinter
    {
    private:
        bool disabled = false;
        int indentLevel = 0;
        std::string indentContent = "\t";

    public:
        IndentPrinter() = default;

        explicit IndentPrinter(const std::string &indentContent)
        {
            this->indentContent = indentContent;
        }

        IndentPrinter(const std::string &indentContent, int indentLevel)
        {
            this->indentContent = indentContent;
            this->indentLevel = indentLevel;
        }

        void disable()
        {
            disabled = true;
        }

        void enable()
        {
            disabled = false;
        }

        void setIndentLevel(int level)
        {
            indentLevel = level;
        }
        void increaseIndent()
        {
            indentLevel++;
        }
        void decreaseIndent()
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

        void _printIndent()
        {
            for (int i = 0; i < indentLevel; i++)
            {
                std::cout << indentContent;
            }
        }

        void printf(const char* format, ...)
        {
            if (disabled) return;
            _printIndent();
            va_list args;
            va_start(args, format);
            vprintf(format, args);
            va_end(args);
        }

        void println(const char *str)
        {
            if (disabled) return;
            _printIndent();
            std::cout << str << std::endl;
        }
        void println(const std::string &str)
        {
            this->println(str.c_str());
        }
        void println(const char c)
        {
            this->println(std::string(1, c));
        }
        void println(const int i)
        {
            this->println(std::to_string(i));
        }
    };

} // namespace indent_print

#endif // INDENT_PRINT_HPP
