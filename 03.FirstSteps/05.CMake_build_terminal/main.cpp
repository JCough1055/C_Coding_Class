#include <fmt/core.h>
#include <zlib.h>

int main()
{
    fmt::print("fmt version is {}\n"
               "zlib version is {}\n",
               FMT_VERSION, ZLIB_VERSION);
    fmt::print("Hello, World!\n");
    
    return 0;
}