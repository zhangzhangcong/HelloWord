#include<bits/stdc++.h>
using namespace std;
void sort(int arr[], int i, int j)
{
	int val = arr[i];
	int l = i;
	int r = j;
	
}


void sort(int arr[], int size)
{
   
   sort(arr,0,size);
}
int main()
{
	//windows端的更改
	int arr[] = {12,4,5,78,8};
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, size);
	return 0;
}





