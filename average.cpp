#include <iostream>
#include <vector>
#include <cstdlib>  
#include <iomanip>  
#include <cmath>    

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Please input numbers to find average." << std::endl;
        return 0;
    }

    std::vector<double> numbers;
    double sum = 0.0;

    for (int i = 1; i < argc; ++i) {
        try {
            double num = std::stod(argv[i]);  
            numbers.push_back(num);
            sum += num;
        } catch (...) {
            std::cerr << "Invalid input: " << argv[i] << std::endl;
            return 1; 
        }
    }

    double average = sum / numbers.size();

    std::cout << "---------------------------------\n";
    std::cout << "Average of " << numbers.size() << " numbers = ";

    if (std::floor(average) == average) {
        std::cout << static_cast<int>(average) << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(3) << average << std::endl;
    }

    std::cout << "---------------------------------" << std::endl;

    return 0;
}
