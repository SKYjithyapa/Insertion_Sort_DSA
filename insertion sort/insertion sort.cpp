

#include <iostream>
using namespace std;
void printarray(int array[], int size) {
    for (int i = 0; i < size; i++) {
    
        cout << " " << array[i] << endl;
    
    
    }


}

void insertionsort(int array[], int size) {
    for (int  step = 1; step < size -1; step++)
    {
        int key = array[step];
        int j = step - 1;
            while (key < array[j] && j >= 0) {
            
                array[j + 1] = array[j];
                j--;
                printf("key 1  = %d", key);
            
            
            
            
            }
            array[j + 1] = key;
            printf(" key 2  = %d", key);

            cout << ' ' << endl;



    }






}







int main()
{
    int data[] = { 1,2,4,54,6,5767,87,787,878 };
    int size = sizeof(data) / sizeof(data[0]);
    insertionsort(data, size);

    printarray(data, size);
}

