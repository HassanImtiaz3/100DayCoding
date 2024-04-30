// Infix, prefix, and postfix notations are ways to represent mathematical expressions. Here's a brief explanation of each:

// 1. **Infix Notation**: This is the most common way to write
// expressions, where operators are placed between operands. 
// For example, `2 + 3 * 4` is an infix expression. Infix notation 
// is easy for humans to read and write but can be ambiguous and 
//  require parentheses to clarify the order of operations.

// 2. **Prefix Notation (or Polish Notation)**: In this notation,
// the operator precedes its operands. For example, `+ 2 * 3 4` is a
// prefix expression equivalent to `2 + (3 * 4)` in infix notation. 
// Prefix notation eliminates the need for parentheses to indicate the
// order of operations, as the position of the operators determines
// the order.

// 3. **Postfix Notation (or Reverse Polish Notation)**: In
// postfix notation, the operator follows its operands. 
// For example, `2 3 4 * +` is a postfix expression 
// equivalent to `2 + (3 * 4)` in infix notation. Like prefix
// notation, postfix notation also eliminates the need for parentheses
// to indicate the order of operations.

//Heap

// In computer science, a heap is a specialized tree-based data structure
// that satisfies the heap property. The heap property can vary,
// but in the context of binary heaps (the most common type of heap),
// it typically refers to one of the following:

// 1. **Min-Heap**: In a min-heap, for every node `i` other than the root,
// the value of the node is greater than or equal to the value of its parent.
// This means that the smallest element in the heap is always at the root.

// 2. **Max-Heap**: In a max-heap, for every node `i` other 
//than the root, the value of the node is less than or equal to the 
//value of its parent. This means that the largest element in the heap 
//is always at the root.

// Heaps are commonly used to implement priority queues, where 
// elements are dequeued in order of their priority (smallest or
// largest value). Heaps are also used in algorithms such as heap 
//sort and in implementing the priority queue data structure in
// languages like C++ (using `std::priority_queue`) and Java.