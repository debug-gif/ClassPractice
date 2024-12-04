#include <iostream>

using namespace std;

// 函数用于执行选择排序
void selectionSort(int heights[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // 找到最小元素的索引
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (heights[j] < heights[minIndex]) {
                minIndex = j;
            }
        }
        // 交换当前位置和最小元素的位置
        int temp = heights[i];
        heights[i] = heights[minIndex];
        heights[minIndex] = temp;
    }
}

// 主函数
int main() {
    int heights[10]; // 存储身高的数组
    int height;

    // 从用户那里获取10位学生的身高
    cout << "请输入10位学生的身高：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> height;
        heights[i] = height;
    }

    // 执行选择排序
    selectionSort(heights, 10);

    // 输出排序后的结果
    cout << "排序后的身高：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << heights[i] << " ";
    }
    cout << endl;

    return 0;
}