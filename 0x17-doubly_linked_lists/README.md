# Doubly Linked List

A Doubly Linked List is a data structure that consists of a sequence of elements, each of which contains a reference to both its previous and next element in the sequence. This allows for efficient insertion and deletion of elements at both the beginning and end of the list. It also provides bidirectional traversal, making it a versatile choice for certain data manipulation tasks.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Methods](#methods)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Features

- Efficient insertion and deletion at both ends of the list.
- Bidirectional traversal.
- Supports various data types as elements.

## Usage

To use the Doubly Linked List in your project, follow these steps:

1. Include the `DoublyLinkedList` class in your project.
2. Create an instance of the `DoublyLinkedList` class.

```python
from doubly_linked_list import DoublyLinkedList

# Create a new doubly linked list
my_list = DoublyLinkedList()
```

3. You can now use the provided methods to manipulate the list.

## Methods

The following methods are available for manipulating the Doubly Linked List:

### `append(data)`

Appends the specified data to the end of the list.

```python
my_list.append(42)
```

### `prepend(data)`

Prepends the specified data to the beginning of the list.

```python
my_list.prepend(24)
```

### `delete(data)`

Deletes the first occurrence of the specified data from the list.

```python
my_list.delete(42)
```

### `delete_at(index)`

Deletes the element at the specified index.

```python
my_list.delete_at(2)
```

### `get(index)`

Returns the data at the specified index.

```python
data = my_list.get(1)
```

### `size()`

Returns the number of elements in the list.

```python
count = my_list.size()
```

## Example

```python
from doubly_linked_list import DoublyLinkedList

# Create a new doubly linked list
my_list = DoublyLinkedList()

# Append some elements
my_list.append(10)
my_list.append(20)
my_list.append(30)

# Prepend an element
my_list.prepend(5)

# Delete an element
my_list.delete(20)

# Get the size of the list
size = my_list.size()

# Print the elements of the list
current = my_list.head
while current:
    print(current.data)
    current = current.next
```

## Contributing

Contributions are welcome! If you have any bug fixes, improvements, or new features to add, please submit a pull request. Make sure to follow the existing coding style and provide tests for your changes.
