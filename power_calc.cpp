#include <iostream>

//https://edabit.com/challenge/a2D3cva6PKrHyqdXC

int circuitPower(int v,int c) {
    return (v*c);
}

int main(void) {
    int current,voltage;
    std::cin >> voltage >> current;
    circuitPower(voltage, current); 
}
