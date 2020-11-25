#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 27

struct node {
    char l, r;
};

node arr[MAX];

void preorder(char c) {
    if (c == '.') return ;
    cout << c;
    preorder(arr[c - 'A'].l);
    preorder(arr[c - 'A'].r);
}

void inorder(char c) {
    if (c == '.') return ;
    inorder(arr[c - 'A'].l);
    cout << c;
    inorder(arr[c - 'A'].r);
}

void postorder(char c) {
    if (c == '.') return ;
    postorder(arr[c - 'A'].l);
    postorder(arr[c - 'A'].r);
    cout << c;
}

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    char c;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> c;
        cin >> arr[c - 'A'].l >> arr[c - 'A'].r;
    }
    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    cout << '\n';
    return (0);
}