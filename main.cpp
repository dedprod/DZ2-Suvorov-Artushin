#include <iostream>
#include "main.h"

using namespace std;


void bubblesort(int arr[], int num) {
    int rot = 0;
    for (int i = 0; i < num; i++) {
        for (int g = 0; g < num; g++) {
            if (arr[g] < arr[g + 1]) {
                s(&(arr[g]), &(arr[g + 1]));
                rot = rot + 1;
            }
        }
    }
    std::cout << "Количество перестановок - " << rot << endl;
}
void bubblesortrev(int arr[], int num) {
    int rot = 0;
    for (int i = 0; i < num; i++) {
        for (int g = 0; g < num; g++) {
            if (arr[g] > arr[g + 1]) {
                s(&(arr[g]), &(arr[g + 1]));
                rot = rot + 1;
            }
        }
    }
    std::cout << "Количество перестановок - " << rot << endl;
}




void task1() {
    double a;
    std::cout << "Enter the argument a" << std::endl;
    std::cin >> a;

    double b;
    std::cout << "Enter the argument b" << std::endl;
    std::cin >> b;

    std::cout << "Initial pair: (" << a << ", " << b << ") " << std::endl;

    s(&a, &b);

    std::cout << "Swapped pair: (" << a << ", " << b << ") ";
}


void task2() {
    int n = 0;
    std::cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    s(&(a[0]), &(a[n - 1]));

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

}

void task3() {
    double **p = 0;
    *(*(p = new double *) = new double) = 2;
    std::cout << "The number indicated in the square: " << **p;
    delete *p;
    delete p;
}

void task4() {
    int n = 12;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    bubblesort(a, n);
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
}

void task5() {
    int length = 0;
    int neg = 0;
    std::cout << "Enter first array lenth" << endl;
    std::cin >> length;
    int *a = new int[length];
    for (int i = 0; i < length; i++) {
        std::cout << "Enter an array element [" << i << "] = ";
        std::cin >> a[i];
        if (a[i] < 0) {
            neg++;
        }
    }

    std::cout << "Number of negative elements " << neg << std::endl;
    int negCounter = 0;
    int posCounter = neg;
    int *res = new int[length];
    for (int i = 0; i < length; i++) {
        if (a[i] > 0) {
            res[posCounter] = a[i];
            posCounter++;
        } else {
            res[negCounter] = a[i];
            negCounter++;
        }
    }

    std::cout << "Array: [ ";
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "]" << std::endl;

    std::cout << "Sorted array: [ ";
    for (int i = 0; i < length; i++) {
        std::cout << res[i] << " ";
    }
    std::cout << "]" << std::endl;
}


void task6() {
    int rot;
    int n = 14;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i <= (n / 2) - 1; i++) {
        s(&(a[i]), &(a[n - i - 1]));
        rot = rot + 1;
    }
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << "Количество перестановок - " << rot << endl;
}

void task7() {
    int size;

    std::cout << "Number of array elements: ";
    std::cin >> size;

    int arr[size], count = 0;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter an array element [" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << "Array: [ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;

    for (int i = 1; i < size - 1; i++) {
        if (i == 0 && arr[i] < arr[i + 1])
            count++;
        else if (i > 0 && i < size - 1 && arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            count++;
        else if (i == size - 1 && arr[i] < arr[i - 1])
            count++;
    }
    cout << "Number of local minima: " << count << endl;
}

void task8() {

    int a[4][4] = {
            {0, 4, 1, 0},
            {0, 0, 3, 2},
            {1, 0, 2, 0},
            {0, 6, 0, 1}
    };
    for (int g = 0; g < 4; g++) {
        int arrvar[4];
        for (int i = 0; i < 4; i++) {
            arrvar[i] = a[g][i];
        }
        calc(arrvar, 4);
    }

}

void task9() {
    const int size = 6;
    int arr[size];
    int negCounter = 0;
//    srand(unsigned(time(NULL)));
    for (int i = 0; i < size; i++) {
        std::cin>>arr[i];
        if (arr[i]<0){
            negCounter++;
        }
    }
    int neg[negCounter];
    int pos[size-negCounter];
    int count1= 0;
    int count2= 0;
    for(int i = 0; i < size; i++){
        if (arr[i]<0){
            neg[count1]=arr[i];
            count1++;
        }
        else{
            pos[count2]=arr[i];
            count2++;}
    }
    bubblesortrev(neg,count1-1);
    bubblesort(pos,count2);
    int res[size];
    for(int i=count1;i>=0;i--){
        res[i]=neg[i];
    }
    for(int g=0;g<count2;g++){
        res[count1]=pos[g];
        count1++;
    }
    for(int i=0;i<size;i++){
        std::cout<<res[i]<<" ";
    }
}

void task10() {
    int length = 0;
    int length2 = 0;
    std::cout << "enter first array lenth" << endl;
    std::cin >> length;
    int *a = new int[length];
    std::cout << "enter first array elements" << endl;
    for (int i = 0; i < length; i++) {
        std::cin >> a[i];
    }
    for (int z = 0; z < length; z++) {
        std::cout << a[z] << " ";
    }
    std::cout << endl;
    std::cout << "enter second array lenth" << endl;
    std::cin >> length2;
    int *b = new int[length];
    std::cout << "enter second array elements" << endl;
    for (int i = 0; i < length2; i++) {
        std::cin >> b[i];
    }
    std::cout << endl;
    for (int a = 0; a < length2; a++) {
        std::cout << b[a] << " ";
    }
    int *maxptr1 = &a[0];
    int *maxptr2 = &b[0];
    for (int i = 0; i < length; i++) {
        if (*&a[i] > *maxptr1) {
            maxptr1 = &a[i];
        }
    }
    for (int g = 0; g < length2; g++) {
        if (*&b[g] > *maxptr2) {
            maxptr2 = &b[g];
        }
    }
    std::cout << endl;
    s(maxptr1, maxptr2);
    for (int i = 0; i < length; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << endl;

    for (int i = 0; i < length2; i++) {
        std::cout << b[i] << " ";
    }
}

void task11() {
    int i, j, n, m;

    std::cout << "Введите количество строк" << endl;
    std::cin >> n;

    std::cout << "Введите количество столбцов" << endl;
    std::cin >> m;

    int  arr[n][m];


    for (i = 0; i < n; i++){
        std::cout << "Введите элементы строки номера " << i+1 << endl;
        for (j = 0; j < m; j++){
            std::cin >> arr[i][j];
        }
    }

    std::cout << endl;
    std::cout << "Заданная матрица:" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            std::cout << arr[i][j] << "\t";
        }
        std::cout << endl;
    }

    std::cout << endl;

    for (i = 0; i < n; i++){
        int t;
        t = arr[i][m - 1];
        for (int j = m - 2; j >= 0; j--){
            arr[i][j+1] = arr[i][j];
        }
        arr[i][0] = t;
    }
    std::cout << "Отсортированная матрица:" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            std::cout << arr[i][j] << "\t";
        }
        std::cout << endl;
    }
}

void task12() {
    int sum = 0;
    int maxsum = 0;
    int minsum = 100000000000;
    int a[4][4] = {
            {7,  4,  8, 12},
            {11, -5, 3, 2},
            {1,  23, 2, 1},
            {9,  6,  8, 1}
    };
    for (int g = 0; g < 4; g++) {
        for (int i = 0; i < 4; i++) {
            sum = a[g][i] + sum;
        }
        if (sum > maxsum) {
            maxsum = sum;
        };
        if (sum < minsum) {
            minsum = sum;
        }
        sum = 0;
    }
    std::cout << "max sum - " << maxsum << " min sum - " << minsum;
}

void task13() {
    int length = 0;
    int length2 = 0;
    int count1=0;
    int count2=0;
    std::cout << "enter first array lenth" << endl;
    std::cin >> length;
    int *a = new int[length];
    std::cout << "enter first array elements" << endl;
    for (int i = 0; i < length; i++) {
        std::cin >> a[i];
    }
    for (int z = 0; z < length; z++) {
        std::cout << a[z] << " ";
    }
    std::cout << endl;
    std::cout << "enter second array lenth" << endl;
    std::cin >> length2;
    int *b = new int[length];
    std::cout << "enter second array elements" << endl;
    for (int i = 0; i < length2; i++) {
        std::cin >> b[i];
    }
    int totallen = length+length2;
    int *res = new int[totallen];
    for(int i=0;i<totallen;i++){
        if((a[count1]>b[count2])){
            if(b[count2]!=0){
                res[i]=b[count2];
                count2++;
            }
            if(a[count1]<b[count2]){
                if(a[count1]!=0){
                    res[i]=a[count1];
                    count1++;}
            }
        }
    }
    for(int i=0;i<totallen;i++){
        std::cout<<res[i];
    }}

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();
    task11();
    task12();
    task13();
}

