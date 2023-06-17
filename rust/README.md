# Smart Pointers
1. Smart pointers usually own the data they point to
2. Smart pointers are data structures they are tipically
implementing using structures.
3. Implement two major traits: Dref and Drop

* Box<T>: A unique ownership smart pointer that points to data of type T
stored on the heap
* Rc<T>: A reference counting smart pointer that shares ownership and is used to 
track the number of references to a value stored on the heap.
* Arc<T>: A thread-safe reference counting smart pointer that shares ownership 
and can be used for multi-threading.
* Cell<T>: A container that provides interior mutability and is not a smart pointer.
It allows for borrowed mutable data with run-time checks, with no requirement for 
T to implement the Copy trait.
* RefCell<T>: A container that provides interior mutability and is not a smart
pointer. It allows for borrowed mutable data with run-time checks, with no 
requirement for T to implement the Copy trait.
* Weak<T>: A weak reference type that correspons to Rc and is used to solve the 
problem of circular references in RefCell.
* Cow<T>: A copy-on-write enumerated smart poiner that is primarly used to reduce
memory allocation and copying. It is suitable for scenarios with frecuent reads 
and infrequent writes.

In rust, Deref and Drop are two most important traits for smart pointers

Implementing Deref and Drop for a custom data type similar to Box, we can better 
understand the difference between references and smart pointers.
```rust
// define tuple struct
struct SBox<T>(T);
impl<T> SBox<T> {
    fn new(x: T) -> Self {
        Self(x)
    }
}

use std::ops::Deref;
impl <T> Deref for SBox {
    type Target = T;
    fn deref(&self) -> &Self::Target {
        &self.0 // first element of tuple struct
    }
}
impl<T> Drop for SBox<T> {
    fn drop(&mut self) {
        println("SBox drop itself!");
    }
}
fn main() {
    let x = 10;
    let y = SBox::new(x);
    println!("x = {x}");
    // println!("y = {}", *y); Cannot dereference a raw pointer without a deref
}
```

Box stores its data on the heap, and after implementing Deref, it can be 
automatically dereferenced
```rust
let num = 10; // num stored in stack
let n_box = Box::new(num); // n_box stored in heap
println!("n_box = {}", n_box); // n_box deref to num automatically
println!("{}", 10 == *n_box); // n_box deref to num manually
```
The ownership system rules state that a value can only have one owner at any givem
time, but in some scenarios, we need to have multiple owners. Rc produce multiple 
ownership values. It tracks whether a value is still in use by counting the number 
of references to it. Once the reference count drops to zero, the value can be cleaned up.
Rc can be use for single thread and multi environments, Rust provides Arc (atomic
reference counting), a thread-safe version of Rc. It allocates a T type value 
with shared ownership on the heap. Cloning an Arc icreases the reference count while
producing a new Arc instance pointing to the same heap as the source Arc.
Arc is immutable by default and requires locking mechanisms like mutex to modify 
it between multiple threads. By default, Rc and Arc do not allow internal data 
modification. Rust provides tow containers with internal mutability, Cell and RefCell,
for scenarios where modification while having immutable references. Cell mutability
is a Rust design pattern that allows data modification while having immutable 
references. Some methods are into_inner: Consumes Cell and returns the internal 
value, take method replaces the internal and returns it and replace that returns
the replaced value. 

```rust
use std::cell::Cell;
struct Fields {
    regular_field: u8,
    special_field: Cell<u8>
}
fn main() {
    let fields = Fields {
        regular_field: 0,
        special_field: Cell::new(1)
    };
    let value = 10;
    fields.special_fiel.set(value);
    println!("{}", fields.special_field.get());
}
```
