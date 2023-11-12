#include <iostream>
#include "circularLinkedList.h"

using namespace std;

const int SENTINEL = -999;

int main() {
    cout << "Enter number ending with " << SENTINEL << endl;
    circularLinkedList<int> list1;
    int num;
    while (true) {
        if(cin >> num) {
            if (num == SENTINEL) {
                break;
            }
            list1.insertNode(num);
        }
    }

    cout << "List 1: ";
    list1.print();
    cout << endl;
    cout << "Length List 1: " << list1.length() << endl;

    cout << "Enter the number to be searched: ";
    cin >> num;
    cout << num << " " << (list1.search(num)? "found": "not" ) << " in the list" << endl;

    cout << "Enter the number to be deleted: ";
    cin >> num;
    list1.deleteNode(num);

    cout << "After deleting the node, List 1: ";
    list1.print();
    cout << endl;
    cout << "Length List 1: " << list1.length() << endl;

    return 0;
}
