// MSVC requires this macro.
// https://stackoverflow.com/questions/6563810/m-pi-works-with-math-h-but-not-with-cmath-in-visual-studio
#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

// Global vars should always be const
// Should be enforced in Clang-Tidy 11 via cppcoreguidelines-avoid-non-const-global-variables
const int kGlobalVar = 3;
// You're not really going to define a macro, are you?
#define PI_ROUNDED 3.14

namespace my_namespace {
void Foo() { std::cout << kGlobalVar << '\n'; }
// M_PI is non-standard
void PrintBadPi() { std::cout << std::setprecision(30) << M_PI << '\n'; }
// Part of official C++20 standard
void PrintGoodPi() { std::cout << std::setprecision(30) << std::numbers::pi_v<long double> << '\n'; }
}  // namespace my_namespace

enum class UrlTableError {
  kOk = 0,
  kOutOfMemory,
  kMalformedInput,
};

enum UrlTableErrorLegacyEnum {
  kOk = 0,
  kOutOfMemory,
  kMalformedInput,
};

class TableInfo {
 private:
  std::string table_name_;  // OK - underscore at end.
 public:
  static int class_const_;
};

struct TableInfo2 {
 private:
  std::string table_name;  // OK - underscore at end.
 public:
  static int class_const;
};

typedef TableInfo Foo;

// Prefer using over typedef in modern C++
using Foo = TableInfo;

void NumberLoop(int x, int y) {
  int array[] = {1, 3, 5, 7, 9, 11, 13, 17, 18};

  // nullptr check
  int* arr_ptr = NULL;

  for (auto x : array) {
    std::cout << "The number is " << x << '\n';
  }
}

int main(int argc, char const* argv[]) {
  // Example of magic numbers
  NumberLoop(4, 5);
  my_namespace::Foo();
  my_namespace::PrintBadPi();
  my_namespace::PrintGoodPi();
  return 0;
}