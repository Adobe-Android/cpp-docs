#include <chrono>
#include <iostream>

void if_else_benchmark() {
    std::cout << "If Else Bench\n";
    int array[] = {1, 3, 5, 7, 9, 11, 13, 17, 18};

    for (auto x : array) {
        if (x == 1) {
            std::cout << "The number is 1: " << x << "\n";
        } else if (x == 3) {
            std::cout << "The number is 3: " << x << "\n";
        } else if (x == 5) {
            std::cout << "The number is 5: " << x << "\n";
        } else if (x == 7) {
            std::cout << "The number is 7: " << x << "\n";
        } else if (x == 9) {
            std::cout << "The number is 9: " << x << "\n";
        } else if (x == 11) {
            std::cout << "The number is 11: " << x << "\n";
        } else if (x == 13) {
            std::cout << "The number is 13: " << x << "\n";
        } else if (x == 17) {
            std::cout << "The number is 17: " << x << "\n";
        } else {
            std::cout << "The number is 18: " << x << "\n";
        }
    }
}

void switch_benchmark() {
    std::cout << "Switch Bench\n";
    int array[] = {1, 3, 5, 7, 9, 11, 13, 17, 18};

    for (auto x : array) {
        switch (x) {
            case 1: {
                std::cout << "The number is 1: " << x << "\n";
            } break;
            case 3: {
                std::cout << "The number is 3: " << x << "\n";
            } break;
            case 5: {
                std::cout << "The number is 5: " << x << "\n";
            } break;
            case 7: {
                std::cout << "The number is 7: " << x << "\n";
            } break;
            case 9: {
                std::cout << "The number is 9: " << x << "\n";
            } break;
            case 11: {
                std::cout << "The number is 11: " << x << "\n";
            } break;
            case 13: {
                std::cout << "The number is 13: " << x << "\n";
            } break;
            case 17: {
                std::cout << "The number is 17: " << x << "\n";
            } break;
            default: {
                std::cout << "The number is 18: " << x << "\n";
            }
        }
    }
}

void clock_time(std::chrono::steady_clock::time_point start,
                std::chrono::steady_clock::time_point end) {
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
    std::cout << "elapsed time: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed_seconds).count()
              << "ns\n";
}

int main(int argc, char const* argv[]) {
    auto switch_start = std::chrono::steady_clock::now();
    switch_benchmark();
    auto switch_end = std::chrono::steady_clock::now();
    clock_time(switch_start, switch_end);

    auto if_else_start = std::chrono::steady_clock::now();
    if_else_benchmark();
    auto if_else_end = std::chrono::steady_clock::now();
    clock_time(if_else_start, if_else_end);

    return 0;
}
