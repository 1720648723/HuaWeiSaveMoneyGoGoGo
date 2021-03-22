#include <bits/stdc++.h>

using namespace std;

struct Server
{
    string name;
    int cpu;
    int memory;
    int cost;
    int dayCost;

    Server() {}

    Server(string _name, int _cpu, int _memory, int _cost, int _dayCost)
    {
        name = _name;
        cpu = _cpu;
        memory = _memory;
        cost = _cost;
        dayCost = _dayCost;
    }
};

int main()
{
    Server myServer = Server("gta5", 1, 1, 1, 1);

    system("pause");
    return 0;
}