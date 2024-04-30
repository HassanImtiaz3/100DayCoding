// Arrays:
// Arrays are a fixed-size sequence container.
// They have a static size that is determined at compile time.
// Elements in an array are stored in contiguous memory locations.
// Accessing elements in an array is done using index notation ([]).
// Arrays cannot be resized once they are created.
// Example: int arr[5];
// Vectors:
// Vectors are dynamic-size sequence containers.
// They can grow or shrink in size dynamically.
// Elements in a vector are stored in contiguous memory locations.
// Accessing elements in a vector is done using index notation ([]).
// Vectors provide functions to add (push_back()) or remove (pop_back()) elements from the back efficiently.
// Example: std::vector<int> vec;
// Lists:
// Lists are doubly linked lists.
// They are dynamic-size sequence containers.
// Elements in a list are not stored in contiguous memory locations.
// Accessing elements in a list is not as efficient as with arrays or vectors because it requires traversing the list.
// Lists provide functions to add elements (push_back(), push_front()) and remove elements (pop_back(), pop_front()) efficiently from both ends.
// Example: std::list<int> lst;
// In summary, arrays are fixed-size and static,
// vectors are dynamic-size and stored in contiguous memory,
// and lists are dynamic-size but not stored in contiguous memory.
// The choice between them depends on the specific requirements of 
//your program, such as the need for dynamic resizing and efficient element
// access.