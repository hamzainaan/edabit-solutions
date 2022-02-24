#include <iostream>

//https://edabit.com/challenge/HvYiBXgfPtnDHitym

int triArea(int b, int h) {
    return (b*h)/2;
}

int main(void) {
    int base,height;
    std::cin >> base >> height;
    triArea(base,height);
}
