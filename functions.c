#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    int count = 0; // Move the variable declaration to the beginning
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    {
                        char *str = va_arg(args, char *);
                        while (*str != '\0') {
                            putchar(*str);
                            str++;
                            count++;
                        }
                    }
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);
    return count;
}

int main() {
    _printf("Hello, %cWorld! %s\n", 'C', "printf implementation");
    return 0;
}
