### DSA ALGORITHMS 
    Data Stucture and Algorithms are the core concept for whole AI, ML, Databases, cryptography, etc.
    So, they are necessary in every field computer science and engineering. 
    
**Data Structure**
- The way data/components are arranged inside the memory, or how data is being represented for the memory to read and write.
**Algorithms**
- They are the operations performed on those Data structure to manage its functionality.
- Step by step procedure before the program to create and maintain efficiency and error handling.
- So, Alogrithm are necessary how data structure functions, each data structures requires unique algorithm for it to function with efficient way which is also known as program.


### Stack
    Stack is the one of the data structure where the data are stored in a LIFO principle "last in first out" like a stack of plate, where the last in plate will be removed first.

#ADT as an Stack
**Abstract Data Type**
- Abstract data type are the implementaions of the operations that are performed to manage and maintain Data Structure. Data Type is the tool to interface memory for human utilization or management.
- Although Abstract Data type are actually doesn't have the actual definitions of the operations on the Data Structure but often refers to as Abstract meanining there are some unknown/hidden variables where the implementaions just give us what to do not how to do?


**Operations on Stack**
- Push Operation
    - check whether the stack is full or not if full then do not push return and prompt
    - if not full then increase the top variable to point to the next memory and insert the value 
- Pop Operation
    - check whether the stack is empty or not if the stack is empty then print "cannot be popped" and return
    - if not empty then print the data pointed by the TOP pointer and decrease TOP by 1
- Traverse Operation
    - Check whether the stack is empty or not if the stack is empty then print "cannot be traversed" and return
    - else create a temporary index varialbe to hold the value of TOP and print the stack item with the help of the temporary index variable and print the data till the temporary index variable doesn't reaches -1
- Is Empty 
    - Check whether TOP == -1 if true then return 1 else return 0
- Is Full
    - Check whether TOP == MAX - 1 if true then return 1 else return 0

