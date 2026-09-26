#include <iostream>
#include <cstdint>

int main(){

    unsigned int r{0}, g{0}, b{0};
    uint32_t total_val{0};

    std::cout << "Enter R: ";
    std::cin >> r;
    std::cout << "Enter G: ";
    std::cin >> g;
    std::cout << "Enter B: ";
    std::cin >> b;

    uint8_t red {static_cast<uint8_t>(r)};
    uint8_t green {static_cast<uint8_t>(g)};
    uint8_t blue {static_cast<uint8_t>(b)};

    total_val = (static_cast<uint32_t>(red << 16) | static_cast<uint32_t>(green << 8) | static_cast<uint32_t>(blue));

    std::cout << total_val << std::endl;
    std::cout << "Hex: #" << std::hex << std::uppercase << total_val << std::endl;
    return 0;
}