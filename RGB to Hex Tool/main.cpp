#include <iostream>
#include <cstdint>

int main(){

    bool valid_vals {};
    unsigned int r{0}, g{0}, b{0};
    uint32_t total_val{0};

    while(!valid_vals){
        std::cout << "Enter R: ";
        std::cin >> r;
        std::cout << "Enter G: ";
        std::cin >> g;
        std::cout << "Enter B: ";
        std::cin >> b;

        if ((r>=0&&r<=255)&&(g>=0&&g<=255)&&(b>=0&&b<=255)){
            valid_vals = true;
        }

        std::cout << "Each value must be in between 0 and 255" << std::endl;
    }

    uint8_t red {static_cast<uint8_t>(r)};
    uint8_t green {static_cast<uint8_t>(g)};
    uint8_t blue {static_cast<uint8_t>(b)};

    total_val = (static_cast<uint32_t>(red << 16) | static_cast<uint32_t>(green << 8) | static_cast<uint32_t>(blue));

    std::cout << total_val << std::endl;
    std::cout << "Hex: #" << std::hex << std::uppercase << total_val << std::endl;
    return 0;
}