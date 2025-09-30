#include <iostream>
#include <iomanip>

const double PI = 3.14159;

int main() {
 
    double r;
    
    std::cin >> r;
    
    r *= r*PI;
    
    std::cout << "A=" << std::fixed << std::setprecision(4) << r << std::endl;
 
    return 0;
}