package main

import "fmt"

func main() {
	var languages = map[int]string{
		3: "english",
		4: "french",
		5: "spanish",
	}
	var products = make(map[int]string)
	products[1] = "beer"
	products[2] = "wine"

	var i int
	var value string
	for i, value = range languages {
		fmt.Println("language", i, ":", value)
	}
	fmt.Println("product with key 2:", products[2])
	fmt.Println(products)
	delete(products, 1)
	fmt.Println("products: ", products)
}
