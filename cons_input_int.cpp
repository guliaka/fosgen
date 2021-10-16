/* By Gene Tomilko
 * Learning C++ for fun
 */
 #include <iostream>

int cons_input_int()
{
    std::cout << "Enter integer: ";
    int a{};
    std::cin >> a;

    return a;
}
