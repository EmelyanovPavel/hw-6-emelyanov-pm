////Topic 6. Arrays
//// 
////Exercise 1.
////19)
// 
//#include <iostream>
//
//void task1_19()
//{
//
//    const int n = 5; 
//    int countp = 0;
//    int pol[n] = { 1, 2, 3, 4, 5 }; 
//
//    std::cout << "Elements with even indexes: ";
//    for (int i = 0; i < n; ++i) 
//        if (i % 2 == 0) {
//            std::cout << pol[i] << " ";
//        }
//}
//
//int main()
//{
//
//    task1_19();
//    return 0;
//}
 
////Exercise 2.
////19)
// 
//#include <iostream>
//
//void task2_19()
//{
//    unsigned int count = 0;
//    int arr[] = { 1, 2, 4, 3, 5, 25, 4, 4, 1 };
//    int size = sizeof(arr);
//
//    for (int i = 1; i != size; i++) {
//        if (arr[i] % arr[i - 1] == 0) {
//            count++;
//        }
//    }
//
//    std::cout << "Pairs of neighboring elements in which the previous element is a multiple of the next one: " << count << std::endl;
//}
//
//int main()
//{
//    task2_19();
//    return 0;
//}
 
////Exercise 3. 
////19)
//
//#include <iostream>
//#include <iomanip>
//
//void task3_19()
//{
//    int n, m;
//    int mxc = 0;
//    std::cout << "n m? ";
//    std::cin >> n >> m;
//    std::cout << "array?\n";
//    int** a = new int* [n];
//
//    for (int r = 0; r < n; ++r) {
//        a[r] = new int[m];
//        for (int c = 0; c < m; ++c)
//            std::cin >> a[r][c];
//    }
//
//    for (int r = 0; r < n; ++r) {
//
//        for (int c = 1; c < m; ++c)
//            if (a[r][c] > a[r][mxc])
//                mxc = c;
//
//
//        a[r][mxc] = a[r][m - mxc - 1];
//    }
//
//    std::cout << "result array:\n";
//
//    for (int r = 0; r < n; ++r) {
//        for (int c = 0; c < m; ++c)
//            std::cout << setw(4) << a[r][c];
//        std::cout << endl;
//    }
//
//    for (int r = 0; r < n; ++r)
//        delete a[r];
//    delete a;
//}
//
//int main() 
// {
// 
//    task3_19();
//    return 0;
//}
 
////Exercise 4.
////19) 
//
//#include <iostream>
//
//void task4_19()
//{
//
//    int ralls;
//    int calls;
//    std::cout << "ralls="; 
//    std::cin >> ralls;
//    std::cout << "calls="; 
//    std::cin >> calls;
//    int** arr = new int* [ralls];
//    int arraw[10];
//
//    for (int i = 0; i < ralls; i++) {
//        arr[i] = new int[calls];
//    }
// 
//    for (int i = 0; i < ralls; i++) {
//        for (int j = 0; j < calls; j++) {
//            std::cout << "arr[][]=";
//            std::cin >> arr[i][j];
//        }
//    }
// 
//    for (int i = 0; i < ralls; i++) {
//        for (int j = 0; j < calls; j++) {
//            if (arr[i][j] != arr[i][j + 1]) {
//                arraw[i] = j;
//            }
//        }
//    }
// 
//    for (int i = 0; i < ralls; i++)
//    {
//        std::cout << arraw[i] << endl;
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
// 
//    return 0;
//}
