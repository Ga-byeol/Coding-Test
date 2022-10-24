parent = [[0 for _ in range(2)] for _ in range(26)]

def preorder(root):
    if root == '.': return
    else:
        print(root, end = "")
        preorder(chr(parent[ord(root)-65][0]))
        preorder(chr(parent[ord(root)-65][1]))

def inorder(root):
    if root == '.': return
    else:
        inorder(chr(parent[ord(root)-65][0]))
        print(root,end = "")
        inorder(chr(parent[ord(root)-65][1]))

def postorder(root):
    if root =='.': return
    else:
        postorder(chr(parent[ord(root)-65][0]))
        postorder(chr(parent[ord(root)-65][1]))
        print(root,end = "")

n = int(input())

for i in range(n):
    x,y,z = input().split()
    parent[ord(x)-65][0] = ord(y)
    parent[ord(x)-65][1] = ord(z)
    
preorder('A')
print()
inorder('A')
print()
postorder('A')