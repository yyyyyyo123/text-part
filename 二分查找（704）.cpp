#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
<<<<<<< HEAD
//以下是第一版错误版
=======

//浠ヤ笅鏄涓�鐗堥敊璇増
>>>>>>> 4939e828138a0074e461ad756c4d322884ed1e48
/*int search(int* nums, int numsSize, int target) {
	int answer = -1;
	int left = -1; int right = numsSize;
	while (left +1 != right) {
		int middle = (left + right) / 2;
		if (nums[middle] < target) {
			left = middle;
		}
		else {
			right = middle;
		}
	}
	if (nums[right] = target) {
		answer = right;
	}
	return answer;
}

int main() {
	int n;
	cin >> n;
	int a[10];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;
	int answer = search(a, n, target);
	printf("%d", answer);
}*/
<<<<<<< HEAD
//二改将判断句“=”改成“==”
//三改如下版本，accept
=======
//浜屾敼灏嗗垽鏂彞鈥�=鈥濇敼鎴愨��==鈥�
//涓夋敼濡備笅鐗堟湰锛宎ccept
>>>>>>> 4939e828138a0074e461ad756c4d322884ed1e48
int search(int* nums, int numsSize, int target) {
	int answer = -1;
	int left = -1; int right = numsSize;
	while (left + 1 != right) {
		int middle = (left + right) / 2;
		if (nums[middle] < target) {
			left = middle;
		}
		else {
			right = middle;
		}
		if (right != numsSize && nums[right] == target) {
			answer = right;
		}
		return answer;
	}
}

int main() {
	int n;
	cin >> n;
	int a[10];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;
	int answer = search(a, n, target);
	printf("%d", answer);
<<<<<<< HEAD
}
=======
}
>>>>>>> 4939e828138a0074e461ad756c4d322884ed1e48
