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

// LastNode method return the last Node
func (linkedList *LinkedList) LastNode() *Node {
	var node *Node
	var lastNode *Node
	for node = linkedList.headNode; node != nil; node = node.nextNode {
		if node.nextNode == nil {
			lastNode = node
		}
	}
	return lastNode
}

// AddToEnd method adds the node with property to the end
func (linkedList *LinkedList) AddToEnd(property int) {
	var node = &Node{}
	node.property = property
	node.nextNode = nil
	var lastNode *Node
	lastNode = linkedList.LastNode()
	if lastNode != nil {
		lastNode.nextNode = node
	}
}

// NodeWithValue method returns Node given parameter property
func (linkedList *LinkedList) NodeWithValue(property int) *Node {
	var node *Node
	for node = linkedList.headNode; node != nil; node = node.nextNode {
		if node.property == property {
			nodeWith = node
			break;
		}
	}
	return nodeWith
}
func main() {
	var linkedList LinkedList
	linkedList = LinkedList{}
	linkedList.AddToHead(1)
	linkedList.AddToHead(3)
	fmt.Println(linkedList.headNode.property)
}
