
#include "combinatorics.h"

/*
* implementation notes:
* ------------------------------------
* ������������ǻᳬ��int long�����Ϳռ䣬������Ҫ�в�ͬ���㷨��
* ����
* ����һ��ֱ�Ӽ��㣬����������ǻ����
* �����������߹�ʽ�ݹ����C(n,k)=C(n-1,k)+C(n-1,k-1),�������Ҳ�ܼ򵥣�����һ����ѡ�ˣ�+��ѡ���ͺ��ˡ���Ȼ����Ҳ���Ż����㷨����������
* �����������ӷ�ĸͬʱ�������־����������С�ܶ࣬�����ڵ�������Ĺ����������İɡ�
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
* ����Ƿǳ��ļ򵥵ģ�Ҳ����Ҫʲô�����ķ������޷Ǿ��ǵ�������ʱ��������û���ȥ���㣬��һ�㣬����Ҳûʲô��˵��
*/
long permutations(int n, int k) {
	long total = 1;
	for (int i = n - k + 1; i <= n; i++)
	{
		total = total * i;
	}
	return total;
}