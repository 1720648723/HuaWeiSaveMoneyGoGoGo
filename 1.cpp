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

//比较两个服务器的优先级，按cpu数、内存大小、每日价格、成本的顺序依次判断
//若s1<s2返回1，否则返回0
bool serverLess(Server s1, Server s2) {}

int main()
{
    Server myServer = Server("gta5", 1, 1, 1, 1);

    system("pause");
    return 0;
}