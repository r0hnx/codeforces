#include "iostream"
#include "algorithm"

/*
isYourHorseshoeOnTheOtherHoof
GNU G++ 11 5.1.0
*/

int main()
{
    int a[4], c(0);
    for (int i = 0; i < 4; i++)
        std::cin >> a[i];
    std::sort(a, a+4);
    for (int i = 0; i < 3; i++)
        if(a[i] == a[i+1])
            c++;
    std::cout<<c;
    return 0;
}