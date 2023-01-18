#include "iostream"

using namespace std;

class Heap{
    public :
    void boostpirority(int i,int newVal);
    private:
    int items[100];
};

void Heap::boostpirority(int i,int newVal){
    items[i] = newVal;
    swap(items[i],items[(i-1)/2]);
}

int main(){
    return 0;
}