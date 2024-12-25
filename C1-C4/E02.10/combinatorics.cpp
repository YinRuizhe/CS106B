
#include "combinatorics.h"

/*
* implementation notes:
* ------------------------------------
* 这个最大的问题是会超出int long等整型空间，所以需要有不同的算法。
* 递推
* 方法一，直接计算，这个方法就是会溢出
* 方法二，工具公式递归计算C(n,k)=C(n-1,k)+C(n-1,k-1),这个解释也很简单，其中一个球选了，+不选，就好了。当然其中也有优化的算法但是先算了
* 方法三，分子分母同时处理，这种就是溢出风险小很多，但是在单个解算的过程中是最快的吧。
* 
*/
long combinations(int n, int k)
{
	long total = 1;
	for (int i =1; i <= k; i++)
	{
		total = total * (n-k+i)/i;
	}
	return total;
}



/*
* implementation notes:
* ------------------------------------
* 这个是非常的简单的，也不需要什么其他的方法，无非就是单个与多的时候可以利用缓存去计算，这一点，其他也没什么好说的
*/
long permutations(int n, int k) {
	long total = 1;
	for (int i = n - k + 1; i <= n; i++)
	{
		total = total * i;
	}
	return total;
}