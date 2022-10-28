package main

import (
	"fmt"
)

func main() {
	var list = []int{5, 19, 3, 1, -1, 4, 2}

	sortList := InsertSort(list)
	fmt.Println("Origin list: ", list)
	fmt.Println("After insert sort list: ", sortList)
}

func InsertSort(list []int) []int {
	var sortList []int = list
	for j := 0; j < len(list); j++ {
		key := list[j]
		i := j - 1
		for i >= 0 && list[i] > key {
			sortList[i+1] = list[i]
			i -= 1
		}
		sortList[i+1] = key
	}
	return sortList
}
