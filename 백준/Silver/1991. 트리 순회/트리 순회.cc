#include<iostream>

using namespace std;

int parent[26][2];

void preorder(char root)
{
    if (root == '.') return;
    else 
    {
        cout << root;
        preorder(parent[root - 'A'][0]);
        preorder(parent[root - 'A'][1]);
    }
}

void inorder(char root)
{
    if (root == '.') return;
    else 
    {
        inorder(parent[root - 'A'][0]);
        cout << root;
        inorder(parent[root - 'A'][1]);
    }
}

void postorder(char root)
{
    if (root == '.') return;
    else 
    {
        postorder(parent[root - 'A'][0]);
        postorder(parent[root - 'A'][1]);
        cout << root;
    }
}

int main()
{
    int n;
    char x, y, z;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		parent[x - 'A'][0] = y;
		parent[x - 'A'][1] = z;
	}

    preorder('A');
    cout << '\n';

    inorder('A'); 
    cout << '\n';

    postorder('A');
    cout << '\n';
}