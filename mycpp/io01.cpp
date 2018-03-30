// io01.cpp
#include <iostream>
int main()
{
    std::cout << "２つの数字を入れて下さい:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "合計は " << v1 << " と " << v2
              << " について " << v1 + v2 << " になります。" << std::endl;
    return 0;
}
