#include "iostream"

using namespace std;

class List
{
public:
    // value int to remove;
    // success whether the val remove successful or not;
    void remove(int val, bool &success);
    void doubleArray();
    int array[4] = {3, 2, 1,4};
    int *p_item = array;
    int arraySize = 4;
    int itemCount = 4;

private:
};

void List::remove(int val, bool &success)
{
    success = false;
    int index;
    for (int i = 0; i < itemCount; i++)
    {
        if (p_item[i] == val)
        {
            success = true;
            index = i;
            break;
        }
    }
    if (success == true)
    {
        for (int i = index; i < itemCount - 1; i++)
        {
            p_item[i] = p_item[i+1];
        }
        p_item[itemCount-1] = 0;
    }
}

void List::doubleArray()
{
    int *newArray = new int[arraySize*2];
    for (int i = 0; i < arraySize; i++)
    {
        newArray[i] = p_item[i];
    }
    p_item = newArray;
    arraySize = arraySize*2;
}

int main()
{
    List list;
    bool success;
    list.remove(2,success);
    // list.doubleArray();
    int arr[3] ={1,3,2};

    for (int i = 0; i < list.arraySize; i++)
    {
        cout << list.p_item[i] << endl;
    }
    // cout << success << endl;

    return 0;
}