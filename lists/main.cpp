#include <iostream>
#include <fstream>

using namespace std;

struct newList {
    int id;
    struct newList *next;
};

int main() {
    struct newList *L = new struct newList;
    struct newList *e = L;

    int temp;
    fstream file("nums.txt");
    while(file >> temp) {
        struct newList *n = new struct newList;
        n->id = temp;
        n->next = NULL;

        e->next = n;
        e = n;
    }
    file.close();

    struct newList *a = L->next;
    while(a) {
        cout << a->id << "\n";
        a = a->next;
    }
    return 0;
}
