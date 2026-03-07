#include <iostream> // for std::cout and std::endl

int main()
{
    // std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    // std::cout << "My name is Alex." << std::endl;
    // std::cout << "------------------------." << '\n';

    // std::cout << "x is equal to: " << 5 << '\n';
    // std::cout << "Yep." << "\n";
    // std::cout << "And that is all, folks! \n";
    // return 0;

    // std::cin

    // std::cout << "Enter the number:" << '\n';
    // int x{};
    // std::cin >> x;
    // std::cout << "You entered " << x << '\n';
    // return 0;

    // std::cout << "Enter two numbers seperarted by space:" << '\n';
    // int x{};
    // int y{};
    // std::cin >> x >> y;
    // std::cout << "You entered " << x << " and " << y << '\n';
    // return 0;

    std::cout << "Enter two numbers: ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}