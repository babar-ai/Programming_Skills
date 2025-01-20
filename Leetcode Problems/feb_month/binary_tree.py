#problem
 #Given the root of a binary tree, return the leftmost value in the last row of the tree.

class Node:

    def __init__(self,key):
        self.key = key
        self.left = None
        self.right =  None
        
    def show(self):
        if self.left:
            self.left.show()
        print(self.key)

        if self.right:
            self.right.show()
            
root = Node(100)
L = Node(50)
R = Node(150)
root.left = L
root.right = R
root.show()



