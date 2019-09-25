# 알고리즘

__배열 겉 부분 돌리기__



#include <stdio.h>
#include <windows.h>
int main() {
	int take[4] [4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	

	int i, j;
	while(1) {
		
		for(i = 0; i < 4; i++) {   
			for(j = 0; j < 4; j++)
				printf("%d ", take[i][j]);
				printf("\n");
		}
		Sleep(1500); 
		
		system("cls");
	 							  
		for(i = 0; i < 4; i++) {  
			for(j = 3; j >= 0; j--)  
				printf("%d ", take[j][i]);
				printf("\n");
		}
		Sleep(1500);
			
		system("cls");
	
		for(i = 3; i >= 0; i--) { 
			for(j = 3; j >= 0; j--)
				printf("%d ", take[i][j]);
				printf("\n");
		}
		Sleep(15000);
		
		system("cls");
	
		for(i = 3; i >= 0; i--) { 
			for(j = 0; j < 4; j++)
				printf("%d ", take[j][i]);
				printf("\n");
		}
		Sleep(15000);
		system("cls");
	}
}