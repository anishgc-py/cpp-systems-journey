// #include <iostream> // for std::cout and std::endl

// int main()
// {
//     std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
//     std::cout << "My name is Alex." << std::endl;
//     std::cout << "------------------------." << '\n';

//     std::cout << "x is equal to: " << 5 << '\n';
//     std::cout << "Yep." << "\n";
//     std::cout << "And that is all, folks! \n";
//     return 0;

//     std::cin

//     std::cout << "Enter the number:" << '\n';
//     int x{};
//     std::cin >> x;
//     std::cout << "You entered " << x << '\n';
//     return 0;

//     std::cout << "Enter two numbers seperarted by space:" << '\n';
//     int x{};
//     int y{};
//     std::cin >> x >> y;
//     std::cout << "You entered " << x << " and " << y << '\n';
//     return 0;

//     std::cout << "Enter two numbers: ";

//     int x{};
//     std::cin >> x;

//     int y{};
//     std::cin >> y;

//     std::cout << "You entered " << x << " and " << y << '\n';

//     return 0;
//     define an integer variable named x
//     int x; // this variable is uninitialized because we haven't given it a value

//     // print the value of x to the screen
//     std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized

//     return 0;
// }


// #include <iostream>

// void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
// {
// }

// int main()
// {
//     // define an integer variable named x
//     int x; // this variable is uninitialized

//     doNothing(x); // make the compiler think we're assigning a value to this variable

//     // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
//     std::cout << x << 'c\n';

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes
//     return 0;
// }
// #include <iostream>


// int main()
// {
//     std::cout << "This is a really, really, really, really, really, really, really, "
//         "really long line\n"; // one extra indentation for continuation line

//     std::cout << "This is another really, really, really, really, really, really, really, "
//                  "really long line\n"; // text aligned with the previous line for continuation line

//     std::cout << "This one is short\n";
// }

