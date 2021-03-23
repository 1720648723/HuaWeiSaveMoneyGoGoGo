#include <bits/stdc++.h>

using namespace std;

struct Server
{
    string name;
    int cpu;
    int memory;
    int cost;
    int dayCost;
    int index;

    int pears[2];

    Server() {}

    Server(string _name, int _cpu, int _memory, int _cost, int _dayCost, int _index)
    {
        name = _name;
        cpu = _cpu;
        memory = _memory;
        cost = _cost;
        dayCost = _dayCost;
        index = _index;
        pears[0] = 0;
        pears[1] = 0;
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
typedef vector<VM> VMList;

//从标准输入输出读到一个服务器信息，返回一个Server
Server getServer() {
    
}

//获取所有服务器信息，存入list
void getAllServer(VMList &list) {}

//将ServerList按serverLess排序
void sortServerList(VMList &list) {}

//将s插入到list（有序）中按serverLess顺序的位置
//服务器index值为index
void InsertToServerList(VMList &list, Server s, int index) {}

//从标准输入输出读到一个虚拟机信息，返回一个VM
VM getVM() {}

//获取一天的需求
void getRequestList(VMList &list) {}

//将vm插入slist和vlist中
//slist保证新插入的vm在满足硬件要求的前提下，尽量处于slist的靠前位置和A（peer[0]）节点
//将slist中的该节点值改为vlist中vm对应的下标（从1开始）
//vlist保证新插入vm在vlist末位，编号从1开始，即vlist[0]为空虚拟机
//注意加入双节点虚拟机时特殊处理
void addVM(serverList &slist, VMList &vlist, VM vm) {}

//将slist中若干个peer迁移至slist尽量靠前的位置（且满足硬件要求）
//最多迁移maxTimes次
//返回一个vector<int>，下标为0~2n-1，其中0为原服务器index，
//注意双节点虚拟机暂不考虑迁移
vector<int> migrateVM(serverList &slist, VMList &vlist, int maxTimes) {}

//根据request，检查slist是否需要购买服务器
//message为可购买的服务器信息，按serverLess升序排序
//若需要购买服务器，则在slist中添加若干服务器
//返回一个serverList，内容为添加的服务器列表
serverList purchaseServer(serverList &slist, VMList &request, serverList &message) {}

void solve()
{
}

int main()
{
    Server myServer = Server("gta5", 1, 1, 1, 1);

    system("pause");
    return 0;
}