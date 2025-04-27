package main

import (
	"fmt"
	"sort"
)

type Person struct {
	Name string
	Age  int
}

type Byage []Person

func (a Byage) Len() int           { return len(a) }
func (a Byage) Swap(i, j int)      { a[i], a[j] = a[j], a[i] }
func (a Byage) Less(i, j int) bool { return a[i].Age < a[j].Age }

func main() {
	peopel := []Person{
		{"Alex", 66},
		{"Steve", 55},
		{"Him", 404},
	}
	sort.Sort(Byage(peopel))
	fmt.Println("By name:", peopel)
}
