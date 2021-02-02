package main

import (
	"encoding/json"
	"fmt"
	"net/http"
)

// type fb struct {
// 	fizz string `json:"fizz"`
// 	buzz string `json:"buzz"`
// }

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

func fizzHandler(w http.ResponseWriter, r *http.Request) {
	arr := []int{}
	//fizz := fb{fizz: "fizz", buzz: "buzz"}
	for i := 1; i <= 100; i++ {
		slice := append(arr, i)
		if i%3 == 0 {
			fizz, _ := json.MarshalIndent("fizz", "", "\t")
			w.Write([]byte(fizz))
		} else if i%5 == 0 {
			buzz, _ := json.MarshalIndent("buzz", "", "\t")
			w.Write([]byte(buzz))
		} else if i%3 != 0 && i%5 != 0 {
			x, err := json.MarshalIndent(slice, "", "\t")
			if err != nil {
				http.Error(w, err.Error(), 500)
			}
			w.Write(x)
		}
		w.Header().Set("Content-Type", "application/json")
		//.Write()
	}
}

func main() {
	// var size int
	// fmt.Println("Enter size of arr")
	// fmt.Scan(&size)
	// arr := []int{}
	// for i := 0; i < size; i++ {
	// 	arr = append(arr, i)
	// }
	// input(arr)
	http.HandleFunc("/fizz", fizzHandler)
	fmt.Printf("Starting on 8080")
	if err := http.ListenAndServe(":8080", nil); err != nil {
		panic(err)
	}
}
