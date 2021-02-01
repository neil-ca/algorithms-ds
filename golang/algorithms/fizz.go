package main

import "fmt"

func input(arr []int) []int {
	for i := range arr {
		if i%3 == 0 {
			fmt.Println("fizz")
		} else if i%5 == 0 {
			fmt.Println("buzz")
		} else if i%3 != 0 && i%5 != 0 {
			fmt.Printf("%d", i)
		}
		fmt.Println("\n")
	}
	return arr
}

func main() {
	var size int
	fmt.Println("Enter size of arr")
	fmt.Scan(&size)
	arr := []int{}
	for i := 0; i < size; i++ {
		arr = append(arr, i)
	}
	input(arr)
}
