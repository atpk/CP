#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

struct shelf{
    long num;
    shelf* next;
};

int main() {
    long m;
    scanf("%ld",&m);
    shelf* start;
    shelf* temp;
    temp = start;
    while(m--) {
        temp = (shelf*) malloc (sizeof(shelf));
        scanf("%ld",&temp->num);
        temp = temp->next;
    }
    
    int n;
    scanf("%d",&n);
    while(n--){
        int note;
        long book;
        scanf("%d",&note);
        temp = start;
        if(note == 1){
            book = temp->num;
            start = temp->next;
            temp->next = NULL;
        }
        else{
            note -= 2;
            while(note--)temp = temp->next;
            shelf* temp2;
            temp2 = temp->next;
            book = temp2->num;
            temp->next = temp2->next;
            temp2->next = NULL;
        }
        printf("%ld\n",book);
    }
}