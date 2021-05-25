package main

import (
    "fmt"
)

func Max(arrays []int, length int) int {
    for i := 0; i < length-1; i++ {
        if arrays[i] > arrays[i+1] {
            // Swap
            var temp = arrays[i]
            arrays[i] = arrays[i+1]
            arrays[i+1] = temp
        }
    }
    var maxValue = arrays[length-1]
    return maxValue
}

func main() {
    var scores = []int{60,65,95,80,79}
    var length = len(scores)
    fmt.Printf("Max value = %d\n ", Max(scores,length))
}
