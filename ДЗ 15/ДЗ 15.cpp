//I. Реализовать следующие функции для работы с массивами:
//1. Поиск минимума
//2. Поиск максимума
//3. Поиск суммы элементов массива
//4. Поиск произведения элементов массива
//5. Поиск индекса заданного элемента в массиве, если такого элемента в массиве нет то возвращать - 1
//6. Проверка наличия элемента в массиве.Возвращает true, если элемент в массиве есть, false – нет.
//7. Печать массива на экран
//8. Среднее арифметическое элеметов массива
//9. Подсчёт количества отрицательных элементов массива
//10. Подсчёт количества вхождений элемента в массив
//11. Подсчёт количества чётных элементов в массив
//12. Подсчёт количества положительных элементов в массиве
//13. Подсчёт количества нечётных элементов в массиве
//14. Проверка является ли массив отсортированным по возрастанию.Если массив отсортирован, то возвращать true, иначе - false.



#include <iostream>
using namespace std;
int minArray(const int array[], size_t size)  // Минимальный элемент массива
{
    int min = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}
int maxArray(const int array[], size_t size) // Максимальный элемент массива
{
    int max = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}
int sumArray(const int array[], size_t size) // Сумма элементов массива
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
		sum += array[i];
	return sum;
}
long long multiplication(int array[], size_t size) // Произведение элементов массива
{
    long long P = 1;
    for (size_t i = 0; i < size; i++)
    {
        P *= array[i];
    }
    return P;
}
int Nindex(const int array[], size_t size)  //5. Поиск индекса заданного элемента в массиве, если такого элемента в массиве нет то возвращать - 1
{
    int count = 0;
    int number;
    cout << "Enter the index of number" << endl;
    cin >> number;
    int flag = -1;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == number)
           flag = i+1;
     }
    return flag;
}
int IsNumb(const int array[], size_t size)  //6. Проверка наличия элемента в массиве.Возвращает true, если элемент в массиве есть, false – нет.
{
    int count = 0;
    int number;
    cout << "Enter the number" << endl;
    cin >> number;
    bool flag = false;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == number)
            flag = true;
    }
    return flag;
}
int SrArifm(const int array[], size_t size) //Среднее арифметическое элеметов массива
{   
    int sum = 0;
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        ++count;
    }
    return sumArray(array, size) / count;
}
int NegativElemArray(const int array[], size_t size) // Подсчёт количества отрицательных элементов в массиве
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        if (array[i] < 0)
            sum ++;
    return sum;
}
int Nvhozd(const int array[], size_t size) //10. Подсчёт количества вхождений элемента в массив
{
    int count = 0;
    int number;
    cout << "Enter the number" << endl;
    cin >> number;
    int flag = - 1;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == number)
        { 
            count++;
            flag=count;
         }
     }
     return flag;
 }
int ChetElemArray(const int array[], size_t size) //Подсчёт количества чётных элементов в массив
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        if (array[i]%2==0)
            sum ++;
    return sum;
}
int PozitivElemArray(const int array[], size_t size) // Подсчёт количества положительных элементов в массиве
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        if(array[i]>0)
        sum ++;
    return sum;
}
int NoChetElemArray(const int array[], size_t size) //Подсчёт количества нечётных элементов в массиве
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        if (array[i] % 2)
            sum++;
    return sum;
}
bool IsArraySort(const int array[], size_t size)  //14. Проверка является ли массив отсортированным по возрастанию.Если массив отсортирован, то возвращать true, иначе - false.
{
    for (size_t i = 0; i < size-1; i++)
    {
        if (array[i + 1] < array[i])
        {
            return  false;
        }
    }
    return true;
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main() 
{
    const size_t size = 5;
    int array[size];
    cout << "Enter your array: " << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element of array: ";
        cin >> array[i];
    }
    cout << "Your array: ";
    for (size_t i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    /*cout << "Min element of array: " << minArray(array, size) << endl;
    cout << "Max element of array: " << maxArray(array, size) << endl;
    cout << "Sum elements of array: " << sumArray(array, size) << endl;
    cout << "Multiplication element of array: " << multiplication(array, size) << endl;
    cout << "Index of element: " << Nindex(array, size) << endl;
    cout << "Is the element: " << IsNumb(array, size) << endl;*/
    cout << "Srednee arifmeticheckoe elements of array: " << SrArifm(array, size) << endl;
   /* cout << "Sum negativ elements of array: " << NegativElemArray(array, size) << endl;
    cout << "Number of enters: " << Nvhozd(array, size) << endl; 
    cout << "Sum chetniy elements of array: " << ChetElemArray(array, size) << endl;
    cout << "Sum pozitiv elements of array: " << PozitivElemArray(array, size) << endl;
    cout << "Sum Nechetniy elements of array: " << NoChetElemArray(array, size) << endl;          
    cout << "Is the Array sorted: " << IsArraySort(array, size) << endl;*/

    return 0;
}




//II.Реализовать следующие функции : +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//1. Функцию, которая вычисляет число a в степени n

//#include <iostream>
//using namespace std;
//int Stepen(int x, int y)
//{
//    int res = 1;
//    for (int i = 1; i <= y; i++)
//        res *= x;
//    return res;
//}
//
//int main()
//{
//    int x,y;
//    cin >> x>>y;
//    int Step = Stepen(x,y);
//    cout << Step << endl;
//
//    return 0;
//}
//
////2. Функцию, которая вычисляет факториал числа n
//
//#include <iostream>
//using namespace std;
//int factNumber(int x) 
//{
//    int res = 1;
//    for (int i = 1; i <= x; i++) 
//        res *= i;
//    return res;
//}
//
//int main()
//{
//    int x;
//    cin >> x;
//    int factorial = factNumber(x);
//    cout << factorial << endl;
//
//    return 0;
//}
//
//
////3. Функцию, которая вычисляет сумму цифр произвольного целого числа n
//
//#include <iostream>
//using namespace std;
//int Sumdigits(int x)
//{
//    int sum=0;
//    while (x)
//    {
//        sum += x % 10;
//        x=x / 10;
//    }
//    return sum;
//}
//
//int main()
//{
//    int x;
//    cin >> x;
//    int Sum = Sumdigits(x);
//    cout << Sum << endl;
//
//    return 0;
//}
//
//
////4. Функцию, которая проверяет является ли заданное число n полиндромом
//
//#include <iostream>
//using namespace std;
//
//int Palindrom(int number)
//{
//    int n = 0;
//    while (number)
//    {
//        n = 10 * n + number % 10;
//        number /= 10;
//    }
//
//    return n;
//}
//
//
//int main()
//{
//    cout << "Enter the digit "<< endl;
//    int number;
//    cin >> number;
//    if (number == Palindrom(number))
//        cout << number << " This is palindrom!" << endl;
//    else
//        cout << "This is not palindrom " << endl;
//
//    return 0;
//}
//
//
//
////5. Функцию, складывающую два целых числа
//
//#include <iostream>
//using namespace std;
//int Sum(int first, int second)
//{
//	int result = first + second;
//	return result;
//}
//
//int main()
//{
//	int number1;
//	int number2;
//	cout << "Enter the first and second number ";
//	cin >> number1 >> number2;
//	int S = Sum(number1, number2);
//	cout << "Sum of digits = " << S << endl;
//	return 0;
//}
//
//
////6. Создать функцию, определяющую является ли число простым, то есть возвращающую true, если число простое, иначе - false
//
//#include <iostream>
//using namespace std;
//bool isSimpleNum(int x) 
//{
//    int d = 2; 
//    if (x >= 2)
//    {
//        while (x % d)
//            d++;
//        return x == d;
//     }
//    else if (x == 1)
//     return x == 0;
//}
//
//int main()
//{
//    int x;
//    cin >> x;
//    bool isSimpleNumber = isSimpleNum(x);
//    cout << "Is this number simple?  " << isSimpleNumber << endl;
//
//    return 0;
//}
//
//
//
////7. Функцию, определяющую является ли число чётным, то есть возвращающую true, если число чётное, иначе - false
//
//#include <iostream>
//using namespace std;
//bool Chet(int x)
//{
//    int res = 0;
//    if (!(x % 2))
//        res = 1;
//    return res;
//}
//
//int main()
//{
//    int x;
//    cin >> x;
//    bool isChet = Chet(x);
//    cout << "Is this number chetnoe?  " << isChet << endl;
//
//    return 0;
//}
//
//




/*   Задание 1. Даны два массива : А[M] и B[N] (M и N вводятся с клавиатуры).
                Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
                элементы массива A, которые не включаются в массив B, без повторений.*/

                /*  Задание 2. Даны два массива : А[M] и B[N] (M и N вводятся с клавиатуры).
                               Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
                               элементы массивов A и B, которые не являются общими для них, без повторений. */

                               //#include <iostream>
                               //#include <cmath>
                               //using namespace std;
                               //
                               //void printarrElements(const int* arr, int size) {
                               //    for (size_t i = 0; i < size; i++) {
                               //        cout << arr[i] << " ";
                               //    }
                               //    cout << endl;
                               //}
                               //
                               //int minElem(int x, int y) 
                               //{
                               //    return (x < y) ? x : y;
                               //}
                               //
                               ///*   Задание 1. Даны два массива : А[M] и B[N] (M и N вводятся с клавиатуры).
                               //                Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
                               //                элементы массива A, которые не включаются в массив B, без повторений.*/
                               //
                               //void diffOfElements(int* A, int* B, int size_A, int size_B) 
                               //{
                               //    int size_С = 0;
                               //
                               //    int minSize_C = minElem(size_A, size_B);
                               //    int* C = new int[minSize_C];
                               //
                               //    int flag;
                               //
                               //    for (int i = 0; i < size_A; i++) 
                               //    {
                               //        flag = 0;
                               //        for (int j = 0; j < size_B; j++) 
                               //        {
                               //            if (A[i] == B[j])
                               //            {
                               //                flag = 1;
                               //                break;
                               //            }
                               //        }
                               //
                               //        if (!flag) 
                               //        {
                               //            C[size_С] = A[i];
                               //            size_С++;
                               //        }
                               //    }
                               //        
                               //    printarrElements(C, size_С);
                               //
                               //    delete[] C;
                               //}
                               //
                               //
                               ///*  Задание 2. Даны два массива : А[M] и B[N] (M и N вводятся с клавиатуры).
                               //                Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
                               //                элементы массивов A и B, которые не являются общими для них, без повторений. */
                               //
                               //void intersectionOfElements(int* A, int* B, int size_A, int size_B) 
                               //{
                               //    int size_С = 0;
                               //
                               //    int minSize_C = minElem(size_A, size_B);
                               //    int* C = new int[minSize_C];
                               //
                               //    int flag = 0;
                               //
                               //    for (int i = 0; i < size_A; i++)
                               //    {        
                               //        for (int j = 0; j < size_B; j++)
                               //        {
                               //            if (A[i] == B[j])
                               //            {
                               //                flag = 1;
                               //                break;
                               //            }
                               //        }
                               //
                               //        if (!flag)
                               //        {
                               //            C[size_С] = A[i];
                               //            size_С++;
                               //        }
                               //    }
                               //    for (int i = 0; i < size_B; i++)
                               //    {
                               //        flag = 0;
                               //
                               //        for (int j = 0; j < size_A; j++)
                               //        {
                               //            if (B[i] == A[j])
                               //            {
                               //                flag = 1;
                               //                break;
                               //            }
                               //        }
                               //
                               //        if (!flag)
                               //        {
                               //            C[size_С] = B[i];
                               //            size_С++;
                               //        }
                               //    }
                               //
                               //    printarrElements(C, size_С);
                               //
                               //    delete[] C;
                               //}
                               //
                               //int main() 
                               //{
                               //    srand(4);
                               //
                               //    size_t size_A;
                               //    size_t size_B;
                               //
                               //    cout << "Input size of arr A" << endl;
                               //    cin >> size_A;
                               //
                               //    cout << "Input size of arr B" << endl;
                               //    cin >> size_B;
                               //
                               //    int* A = new int[size_A] {8, 16, 11, 17, 2};
                               //    int* B = new int[size_B] {8, 13, 15, 18, 11, 16};
                               //
                               //
                               //    //    for (size_t i = 0; i < size_A; i++) {
                               //    //        A[i] = rand() % 100;
                               //    //    }
                               //    //
                               //    //    for (size_t i = 0; i < size_B; i++) {
                               //    //        B[i] = rand() % 100;
                               //    //    }
                               //    printarrElements(A, size_A);
                               //    cout << endl;
                               //    printarrElements(B, size_B);
                               //    cout << endl;
                               //    diffOfElements(A, B, size_A, size_B);
                               //    cout << endl;
                               //    intersectionOfElements(A, B, size_A, size_B);
                               //    
                               //    
                               //
                               //    delete[] A;
                               //    delete[] B;
                               //
                               //    return 0;
                               //}