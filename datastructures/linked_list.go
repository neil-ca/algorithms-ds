package main

import "fmt"

/* LinkedList is a sequence of nodes that have properties and a reference to the next
node in the secuence. It is a linear data structure that is used to store data
*/

// Node class
type Node struct {
	property int
	nextNode *Node
}

type LinkedList struct {
	headNode *Node
}

//AddToHead method of LinkedList class
func (linkedList *LinkedList) AddToHead(property int) {
	var node = Node{}
	node.property = property
	if node.nextNode != nil {
		node.nextNode = linkedList.headNode
	}
	linkedList.headNode = &node
}

// IterateList method iterates over LinkedList
func (linkedList *LinkedList) IterateList() {
	var node *Node
	for node = linkedList.headNode; node != nil; node = node.nextNode {
		fmt.Println(node.property)
	}
}
func main() {
	var linkedList LinkedList
	linkedList = LinkedList{}
	linkedList.AddToHead(1)
	linkedList.AddToHead(3)
	fmt.Println(linkedList.headNode.property)
}
