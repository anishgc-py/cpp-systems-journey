#include <iostream>

// int main()
// {
//     // An integer can only hold non-fractional values.
//     // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
//     // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

//     // int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

//     // int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
//     // int w3 (4.5);   // compiles: w3 direct-initialized to value 4
//     int width{};
//     std::cout << width;
//     int x{}; // value initialization
//     std::cin >> x;

//     int a, b = 5;     // wrong: a is not initialized to 5!
//     int a = 5, b = 5; // correct: a and b are initialized to 5
//     return 0;
// }

// int main()
// {
//     int x { 5 }; // variable x defined

//     // but not used anywhere

//     return 0;
// }



// #include <iostream>

// int main()
// {
//     // Here's some math/physics values that we copy-pasted from elsewhere
//     double pi { 3.14159 };
//     double gravity { 9.8 };
//     double phi { 1.61803 };

//     std::cout << pi << '\n';  // pi is used
//     std::cout << phi << '\n'; // phi is used

//     // The compiler will likely complain about gravity being defined but unused

//     return 0;
// }



// #include <iostream>

// int main()
// {
//     [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
//     [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
//     [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

//     std::cout << pi << '\n';
//     std::cout << phi << '\n';

//     // The compiler will no longer warn about gravity not being used

//     return 0;
// }


#include <string_view>

class Base
{
protected:
    int m_value {};

public:
    Base(int value)
        : m_value{ value }
    {
    }

    std::string_view getName() const { return "Base"; }
    int getValue() const { return m_value; }
};

class Derived: public Base
{
public:
    Derived(int value)
        : Base{ value }
    {
    }

    std::string_view getName() const { return "Derived"; }
    int getValueDoubled() const { return m_value * 2; }
};

#include <iostream>

int main()
{
    Derived derived{ 5 };
    std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';

    Derived& rDerived{ derived };
    std::cout << "rDerived is a " << rDerived.getName() << " and has value " << rDerived.getValue() << '\n';

    Derived* pDerived{ &derived };
    std::cout << "pDerived is a " << pDerived->getName() << " and has value " << pDerived->getValue() << '\n';

    return 0;
}