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
bool serverLess(Server s1, Server s2) {    
    if (s1.cpu < s2.cpu)
    {
        return true;
    }
    else if (s1.cpu == s2.cpu)
    {
        if (s1.memory < s2.memory)
        {
            return true;
        }
        else if (s1.memory == s2.memory)
        {
            if (s1.dayCost < s2.dayCost)
            {
                return true;
            }
            else if (s1.dayCost == s2.dayCost)
            {
                if (s1.cost < s2.cost)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

typedef vector<Server> serverList;
typedef vector<VM> requestList;

//从标准输入输出读到一个服务器信息，返回一个Server
Server getServer() {
    
}

//获取所有服务器信息，存入list
void getAllServer(serverlist &list) {}

//将ServerList按serverLess排序
void sortServerList(serverList &list) {}

//将s插入到list（有序）中按serverLess顺序的位置
void InsertToServerList(serverList &list, Server s) {}

//从标准输入输出读到一个虚拟机信息，返回一个VM
VM getVM() {}

//获取一天的需求
void getRequestList(requestList &list) {}

int main()
{
    Server myServer = Server("gta5", 1, 1, 1, 1);

    system("pause");
    return 0;
}