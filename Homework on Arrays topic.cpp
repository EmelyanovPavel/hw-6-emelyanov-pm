////Topic 6. Arrays
//// 
////Exercise 1.
////19)
// 
//#include <iostream>
//
//using namespace std;
//
//void task1_20()
//{
//
//    const int n = 5; 
//    int countp = 0;
//    int pol[n] = { 1, 2, 3, 4, 5 }; 
//
//    cout << "Elements with odd indexes: ";
//    for (int i = 0; i < n; ++i) 
//        if (i % 2 == 0) {
//            cout << pol[i] << " ";
//        }
//}
//
//int main()
//{
//
//    task1_20();
//    return 0;
//}
// 
////Exercise 2.
////19) 
//#include <iostream>
//#include <vector>
//
//int main() 
//{
//    
//    unsigned int count = 0;
//    std::vector<int> arr = { 1, 2, 4, 3, 5, 25, 4, 4, 1 }; 
//
//    for (auto i = 1; i != arr.size(); i++) {
//        if (arr[i] % arr[i - 1] == 0) {
//            count++;
//        }
//    }
//    std::cout << "Pairs of neighboring elements in which the previous element is a multiple of the next one: " << count;
//    return 0;
//}
// 
////Exercise 3. 
////19)
//
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() 
// {
// 
//    int n, m;
//    int mxc = 0;
//    cout << "n m? ";
//    cin >> n >> m; 
//    cout << "array?\n";
//
//    int** a = new int* [n];
//    for (int r = 0; r < n; ++r) {
//        a[r] = new int[m];
//        for (int c = 0; c < m; ++c)
//            cin >> a[r][c];
//    }
//    for (int r = 0; r < n; ++r) {
//
//            for (int c = 1; c < m; ++c)
//                if (a[r][c] > a[r][mxc])
//                    mxc = c;
//
//            
//            a[r][mxc] = a[r][m - mxc - 1];
//    }
//
//    // вывод получившегося массива
//    cout << "result array:\n";
//    for (int r = 0; r < n; ++r) {
//        for (int c = 0; c < m; ++c)
//            cout << setw(4) << a[r][c];
//        cout << endl;
//    }
//    for (int r = 0; r < n; ++r)
//        delete a[r];
//    delete a;
// 
//    return 0;
//}
// 
////Exercise 4.
////19) 
//
//#include<iostream>
//
//using namespace std;
//
//void task4_19()
//{
//
//    int ralls;
//    int calls;
//    cout << "ralls="; cin >> ralls;
//    cout << "calls="; cin >> calls;
//    int** arr = new int* [ralls];
//    int arraw[10];
//
//    for (int i = 0; i < ralls; i++) {
//        arr[i] = new int[calls];
//    }
//    for (int i = 0; i < ralls; i++) {
//        for (int j = 0; j < calls; j++) {
//            cout << "arr[][]=";
//            cin >> arr[i][j];
//        }
//    }
//    for (int i = 0; i < ralls; i++) {
//        for (int j = 0; j < calls; j++) {
//            if (arr[i][j] != arr[i][j + 1]) {
//                arraw[i] = j;
//            }
//        }
//    }
//    for (int i = 0; i < ralls; i++)
//    {
//        cout << arraw[i] << endl;
//    }
//    
//    for (int i = 0; i < ralls; i++) {
//        delete[]arr[i];
//    }
//    delete[] arr;
//
//}
//
//int main()
//{
//
//    task4_19();
//    return 0;
//}

