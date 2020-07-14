#include <iostream>

// Global vars should always be const
const int kGlobalVar = 3;
// You're not really going to define a macro, are you?
#define PI_ROUNDED 3.14

namespace my_namespace {
void Foo() { std::cout << kGlobalVar << "\n"; }
}  // namespace my_namespace

enum class UrlTableError {
  kOk = 0,
  kOutOfMemory,
  kMalformedInput,
};

enum UrlTableError2 {
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

void NumberLoop() {
  int array[] = {1, 3, 5, 7, 9, 11, 13, 17, 18};

  for (auto x : array) {
    std::cout << "The number is " << x << "\n";
  }
}

int main(int argc, char const *argv[]) {

  NumberLoop();
  my_namespace::Foo();

  return 0;
}