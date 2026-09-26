#include <iostream>
#include <cstdint>

int main(){

    bool val_check = false;
    int r, g, b;

    while (!val_check){
        std::cout << "Red: ";
        std::cin >> r;
        std::cout << "Green: ";
        std::cin >> g;
        std::cout << "Blue: ";
        std::cin >> b;

        if ((r >= 0 && r <= 255 ) && ( g>= 0 && g <= 255) && ( b >= 0 && b <= 255)){
            val_check = true;
        }

        std::cout << "All values must be between 0 and 255\n";
    }

    std::cout << r << " " << g << " " << b << std::endl;



    return 0;
}