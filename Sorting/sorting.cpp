#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int pil;
string inp;

void insertionSort(string s);
void merge(char arr[], int left, int middle, int right);
void mergeSort(char arr[], int left, int right);
void printMS(string tes);
void shellSort(string s);
int partition(char arr[], int low, int high);
void quickSort(char arr[], int low, int high);
void printQs(string s);
void bubbleSort(string s);
void selectionSort(string s);

int main()
{
    do
    {
        cout << "SORTING" << endl;
        cout << "=================" << endl;
        cout << "1. Insertion Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Shell Sort" << endl;
        cout << "4. Quick Sort" << endl;
        cout << "5. Bubble Sort" << endl;
        cout << "6. Selection Sort" << endl;
        cout << "7. Exit" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pil;

        if (pil < 7)
        {
            cout << "----------------------" << endl;
            cout << "Input : ";
            cin >> inp;
        }

        switch (pil)
        {
        case 1:
            insertionSort(inp);
            break;
        case 2:
            printMS(inp);
            break;
        case 3:
            shellSort(inp);
            break;
        case 4:
            printQs(inp);
            break;
        case 5:
            bubbleSort(inp);
            break;
        case 6:
            selectionSort(inp);
            break;
        default:
            cout << "\nTERIMA KASIH" << endl;
            cout << "Program was made by Muhammad Raihan (2310817110008)." << endl;
        }

        cout << "\nPress any key to continue!" << endl;
        getch();
        system("cls");

    } while (pil < 7);
}

void insertionSort(string s)
{
    int length = s.length();
    for (int i = 1; i < length; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (s[j] < s[j - 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }

    cout << "Hasil : " << s << endl;
}

void merge(char arr[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    char *leftArr = new char[n1];
    char *rightArr = new char[n2];

    for (int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightArr[j] = arr[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(char arr[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

void printMS(string tes)
{
    int size = tes.length();
    char arr[size];
    strcpy(arr, tes.c_str());

    mergeSort(arr, 0, size - 1);

    cout << "Hasil : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "";
    }
}

void shellSort(string s)
{
    int n = s.length();
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = s[i];
            int j;
            for (j = i; j >= gap && s[j - gap] > temp; j -= gap)
                s[j] = s[j - gap];

            s[j] = temp;
        }
    }
    cout << "Hasil : " << s;
}

int partition(char arr[], int low, int high)
{
    char pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(char arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printQs(string s)
{
    int size = s.length();
    char arr[size];
    strcpy(arr, s.c_str());

    quickSort(arr, 0, size - 1);

    cout << "Hasil : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

void bubbleSort(string s)
{
    int length = s.length();
    for (int j = 0; j < length - 1; j++)
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                swap(s[i], s[i + 1]);
            }
        }
    }

    cout << "Hasil : " << s << endl;
}

void selectionSort(string s)
{
    int length = s.length();
    for (int j = 0; j < length; j++)
    {
        int loc_selected = j;
        for (int i = j; i < length; i++)
        {
            if (s[loc_selected] > s[i])
            {
                loc_selected = i;
            }
        }
        swap(s[j], s[loc_selected]);
    }

    cout << "Hasil : " << s << endl;
}