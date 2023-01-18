#include "iostream"

using namespace std;

class ChainStudentNode
{
private:
    int studentID;
    string name;
    string dept;
    ChainStudentNode *next;

    friend class StudentHashTable;
};

class StudentHashTable
{
public:
    void insertStudentNode(int sID, string sName, string sDept);
    string retruveName(int sID);

protected:
    int hashIndex(int sID)
    {
        return sID % 101;
    };

private:
    static const int HASH_TABLE_SIZE = 101;
    ChainStudentNode *Table[HASH_TABLE_SIZE];// allocated memory

};

void StudentHashTable::insertStudentNode(int sID, string sName, string sDept)
{
    ChainStudentNode *t = Table[hashIndex(sID)];
    if (t->name == "")
    {
        t->studentID = sID;
        t->name = sName;
        t->dept = sDept;
        return;
    }

    while (t->next != nullptr && t->next->name != "") // nullptr == null pointer
    {
        t = t->next;
    }

    ChainStudentNode *sptr = new ChainStudentNode;
    sptr->studentID = sID;
    sptr->name = sName;
    sptr->dept = sDept;

    t->next = sptr;
};

string StudentHashTable::retruveName(int sID)
{
    ChainStudentNode *t = Table[hashIndex(sID)]; 

    if (t == nullptr)
    {
        return "not have student";
    }

    while (t->next != nullptr && t->studentID != sID)
    {
        t = t->next;
    }

    return t->name;
};

int main()
{
    StudentHashTable sht;
    sht.insertStudentNode(295, "Tony", "C3");
    sht.insertStudentNode(93, "Vincent", "C3");
    cout << sht.retruveName(93) << endl;
    cout << sht.retruveName(295) << endl;


    return 0;
}
