package main

import (
	"reflect"
	"testing"
)

func Test_Insert_Sort(t *testing.T) {
	list := []int{3, 1, 2, 5, 4}

	actual := InsertSort(list)

	expect := []int{1, 2, 3, 4, 5}
	if !reflect.DeepEqual(actual, expect) {
		t.Error("result should be [1 2 3 4 5], got", actual)
	}
}
