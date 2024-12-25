

#include <iostream>
using namespace std;



/*
* function:roundToNearestInt
* usage: int n=roundToNearestInt(x);
* ---------------------------------------
* 返回一维坐标轴上离这个数值最近的整数
*/

int roundToNearestInt(double x);

int main()
{
    double x;
    cout << "Enter a double type x: ";
    cin >> x;
    cout << "NearestInt: " << roundToNearestInt(x) << endl;

}


/*
* implement note
* -------------------
* 注意负值的时候
* 在double转int的过程中会直接的truncated这个值
* 全部加0.5，然后truncated
* 如果是负数就
* truncaton always moves toward zero, rounding negative numbers requires you to subtract 0.5, rather than adding it.
*/
int roundToNearestInt(double x)
{

    return x>0?int(x+0.5):int(x-0.5);
}
