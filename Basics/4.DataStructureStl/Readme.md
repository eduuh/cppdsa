## Container
Container is an object that stroes a collection of other objects (elements)
Container manages the storgage space for its elements $ provides memeber functions to access them (mostly through iterators)

Iterators are object that behave like pointers.

Example - Stack , Map , Vector etc

## Containers

### Sequence Containers
- Array
- Vector
- Deque
- Forward List
- List

### Associative Containers
- Set 
- Map
- Multiset
- Multimap


### Unordered Associative Containers

- Unordered Set
- Unorderd Map
- Unordered Multiset
- Unordered Multimap

### Container Adaptors
- Stack
- Queue
- Priority Queue


#### Array

- Classical 
- Stl

#### Methods
array class is introduced c++11 has offered a better alternative for c-style arrays.

```c
at()
operator()
front()
back()
size()
max_size()
```


#### Vector
- Dynamic arrays with the ability to resize itselef automatically when an element is inserted.
- Contigous store locations, reallocation happeens when underlying array is full.

- When an array is full, in order to add more items , the vector will double itself.
- Dyanmic memory allocation.


##### methods

```
- []
- at()
- back()
- begin()
- capacity()
- clear()
- empty()
- end()
- erase()
- front()
- insert()
- pop_back()
- push_back()
- reserve()
- resize()
- size()
```

if you know that for sure, that you need at least 100 elements. you can use the reserve method


### Deque

double-ended queue is sequence container with dynnamic sizes that can be expanded or contracted on both ends (front or back)

deque are not guranteed to store all its elements in contigouse storage locations: accessing elementsina deque by offsetting a pointer to another element causes undefined behaviour.

Elements of a deque can be scatteren in different chunks of storage.

```c
- []
- at()
- back()
- begin()
- capacity()
- clear()
- emptly()
- end()
- erase()
- front()
- insert()
- pop_back()
- pop_front()
- push_back()
- push_front()

- resize()
- size()
```

initialization of a deque

```c
#include <deque>

using namespace std;

deque<int> first;                  //empty deque of ints
deque<int> second (4, 100);        //four ints with value 100
deque<int> third (second.begin(), second.end()); // iterating through second
deque<int>  fourth (third);  // a copy of third
```



