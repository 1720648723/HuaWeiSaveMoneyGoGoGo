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

struct VM
{
};

//比较两个服务器的优先级，按cpu数、内存大小、每日价格、成本的顺序依次判断
//若s1<s2返回1，否则返回0
bool serverLess(Server s1, Server s2) {}

typedef vector<Server> serverList;
typedef vector<VM> VMList;

//从标准输入输出读到一个服务器信息，返回一个Server
Server getServer() {}

//获取所有服务器信息，存入list
void getAllServer(VMList &list) {}

//将ServerList按serverLess排序
void sortServerList(VMList &list) {}

//将s插入到list（有序）中按serverLess顺序的位置
void InsertToServerList(VMList &list, Server s) {}

//从标准输入输出读到一个虚拟机信息，返回一个VM
VM getVM() {}

//获取一天的需求
void getRequestList(VMList &list) {}

int main()
{
    Server myServer = Server("gta5", 1, 1, 1, 1);

    system("pause");
    return 0;
}