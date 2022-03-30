#include<bits/stdc++.h>
using namespace std;
void sort(int arr[], int size)
{
    //mac端的更改
    int tmp = 0;
	bool flag = false;
    for(int i = 0; i < size- 1; ++i)
    {
        for(int j = 0; j < size - 1 - i; ++j)
        {
	    //mac端修改排序算法，从大到小排序
            if(arr[j] < arr[j + 1])
            {
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
					flag = true;
            }
        }
		if(!flag) break;
    }
}
int main()
{
	//windows端的更改
	int arr[] = {12,4,5,78,8};
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, size);
	return 0;
}





