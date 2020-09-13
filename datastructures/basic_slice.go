package main

import "fmt"

func main() {
	var slice = []int{1, 3, 5, 6}
	slice = append(slice, 8)
	slice = append(slice, 9)
	slice = append(slice, 10)
	slice = append(slice, 11)
	slice = append(slice, 12)
	slice = append(slice, 13)

	fmt.Println("Capacity", cap(slice))
	fmt.Println("Length", len(slice))
}
