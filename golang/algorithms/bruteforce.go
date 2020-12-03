package main

import "fmt"

//findElement method given array and k element
func findElemnt(arr [10]int, k int) bool {
	var i int
	for i = 0; i < 10; i++ {
		if arr[i] == k {
			return true
		}
	}
	return false
}
func main() {
	var arr = [10]int{1, 4, 7, 8, 3, 9, 2, 4, 1, 8}
	var check bool = findElemnt(arr, 10)
	fmt.Println(check)
	var check2 bool = findElemnt(arr, 9)
	fmt.Println(check2)
}
