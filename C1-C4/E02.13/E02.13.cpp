
/*
* 模拟原子的半衰期
* 10000个原子，原子每年的衰变的概率为0.5
*/
#include <iostream>
#include "random.h"


using namespace std;


int main()
{
    int atomNum = 10000;
    int live = 0;
    int year = 0;
    double probability = 0.3;//死亡概率
    //用数组来记录该原子是否存在
    bool* arr = new bool[atomNum];
    for (int i = 0; i <atomNum; i++)
    {
        arr[i] = true;
    }
    
    for (int i = 0; i < atomNum; i++){
        if (arr[i]) live++;
    }
    cout << "There are " << live << " atoms initially." << endl;
    

    //sim

    while (live!=0)//当还有存活的时候一直衰变
    {
        for (int i = 0; i < atomNum; i++)
        {
            if (arr[i]) {
                //对存活的衰变
                if (randomChance(probability))
                {
                    arr[i] = false;
                }
            }
                
        }
        year++;
        //统计存活
        live = 0;
        for (int i = 0; i < atomNum; i++) {
            if (arr[i]) live++;
        }
        cout << "There are " << live << " at the end of the year " << year<< "." << endl;
    }

    delete[]arr;//释放动态数组
}
