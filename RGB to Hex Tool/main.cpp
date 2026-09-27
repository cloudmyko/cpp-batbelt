#include <iostream>
#include <cstdint>

int main(){

    bool valid_vals {}; 
    unsigned int r{0}, g{0}, b{0};
    uint32_t total_val{0}; // no 24 bit option

    while(!valid_vals){  // input validation
        std::cout << "Enter R: ";
        std::cin >> r;
        std::cout << "Enter G: ";
        std::cin >> g;
        std::cout << "Enter B: ";
        std::cin >> b;

        if ((r>=0&&r<=255)&&(g>=0&&g<=255)&&(b>=0&&b<=255)){ // 8 bit unsigned cap is 255
            valid_vals = true;
            break;
        }

        std::cout << "Each value must be in between 0 and 255" << std::endl;
        
    }

    uint8_t red {static_cast<uint8_t>(r)};
    uint8_t green {static_cast<uint8_t>(g)};
    uint8_t blue {static_cast<uint8_t>(b)};

    total_val = (static_cast<uint32_t>(red << 16) | static_cast<uint32_t>(green << 8) | static_cast<uint32_t>(blue)); // bit shifting within the 4 byte unsigned integer

    std::cout << "#" << std::hex << std::uppercase << total_val << std::endl; // hex conversion
    return 0;
}