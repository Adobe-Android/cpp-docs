#include <iostream>
#include <sstream>

std::string get_compiler_info()
{
    std::stringstream compiler_str;

    #if defined(__clang__)
        compiler_str << "Clang version " << __clang_major__ << '.' << __clang_minor__ << '.' << __clang_patchlevel__;
    #elif defined(__GNUC__) && !defined(__ICC)
        compiler_str << "GCC version " << __VERSION__;
    #elif defined(_MSC_VER)
        compiler_str << "MSVC version " << _MSC_VER;
    #elif defined(__INTEL_COMPILER)
        compiler_str << "ICC version " << __ICC;
    #else
        compiler_str << "Unable to determine compiler"; 
    #endif

    return compiler_str.str();
}

int main()
{
    std::cout << get_compiler_info() << '\n';
    return 0;
}
