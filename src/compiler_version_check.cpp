#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::to_string;

int main() {
    // Uses C++11 features.
    string compiler{};

#if defined(__clang__)
    compiler = "Clang version " __clang_version__ "\n";
#elif defined(__INTEL_COMPILER)
    compiler = "ICC version " + to_string(__ICC) + "\n";
#elif defined(__GNUC__)
    compiler = "GCC version " __VERSION__ "\n";
#elif defined(_MSC_VER)
    compiler = "MSVC version " + to_string(_MSC_VER) + "\n";
#else
    compiler = "Unable to determine compiler";
#endif

    cout << compiler;
    return 0;
}
