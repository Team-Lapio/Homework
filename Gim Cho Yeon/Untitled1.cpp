#include <iostream>
using namespace std;
int main()
{
	int arr[10], del, i, j, f = 0, cnt = 10;
	cout << "입력: ";
	for(i=0; i<10; i++)
		cin >> arr[i]; 
	while(cnt != 0)
	{
		cout << "\n삭제할 원소: ";
		cin >> del;
		for(i=0; i<10; i++)
		{
			if(arr[i] == del)
			{
				f = 1;
				for(j=i; j<cnt; j++)
					arr[j] = arr[j+1];
				cnt--;
				for(j=0; j<cnt; j++)
					cout << arr[j] << " ";
			}
		}
		if(f == 0)
			cout << "\n다시 입력: ";
	}
}
