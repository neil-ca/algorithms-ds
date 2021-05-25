[![GoDoc](https://godoc.org/github.com/emirpasic/gods?status.svg)](https://godoc.org/github.com/emirpasic/gods)

The management of data is one of the most important considerations to bear in mind while designing
any application. The purpose of any application is to get some data as input, process or operate
on in, and then provide suitable data as output.

## Mix of ds and algorithms 
This repo pretend understand and fun with datastructures and algorithms.

We will look at how we can use these data structures to create more sophisticated data structures, such as stacks, queues,
and trees, which are needed to develop complex algorithms.

### Data Structures Used in algorithms
Algorithms need necessary in-memory data structures that can hold temporary data while executing. Choosing the right data
structures is essential for their efficient implementation. Certain classes of algorithms are recursive or iterative in logic and need data structures that ase specially designed for them.
For example, a recursive algorithm may be more easily implemented, exhibiting better performance, if nested data structures are used. 

#### Common data structures
  * Lists: Ordered mutable sequences of elements 
  * Tuples: Ordered inmmutable sequence of elements 
  * Sets: Unordered bags of elements 
  * Dictionary: Unordered bags of key-values pairs 
  * Data frames: Two-dimensional structures to store two dimensional data 

#### The time complexity of lists 
The time complexity of various functions of a list can be summarized as follows using the 
Big O notation:

| Different methods                 | Time complexity  |
| :-------------------------------: | :--------------: | 
| Insert an element                 | O(1)             | 
| Delete an elment                  | O(n)(as in the worst case may have to iterate the whole list)  | 
| Slicing a list                    | O(n)  | 
| Element retrieval                | O(n)  | 
| Copy                               | O(n)  | 

sell
