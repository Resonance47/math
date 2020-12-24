#include <iostream>
int main()
{
    int n;//число
    std::cin >> n;
    int j; //счетчик для простых чисел
    int k = 0; //предыдущее простое число
    int l = 0;
    bool flag=0;
    if (n >= 2)
        std::cout << 2 << " ";
    for (int i = 3; i <= n; i+=2) 
    {
 
        l = sqrt(i);
        for (int j = 3; j <= l; j+=2) 
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            flag = 0;
            continue;
        }
        if (k < i - i % 10)
            std::cout << std::endl;
        std::cout << i << " ";
        k = i;
    }
    return 47;
}