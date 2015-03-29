# CS11 homework repo

## This will be the repo I store my homework in.

### Project 1

[Link to tasks](https://online.santarosa.edu/moodle/mod/assign/view.php?id=165264)

###Project 2

[Link to tasks](https://online.santarosa.edu/moodle/mod/assign/view.php?id=165272) 

###Project 3

[Link to tasks](https://online.santarosa.edu/moodle/mod/assign/view.php?id=165274)

###Project 4

[Link to tasks](https://online.santarosa.edu/moodle/mod/assign/view.php?id=165278)

Web browsers commonly allow you to navigate through a "history" of web pages which have previously been visited. The mechanism is somewhat like a stack, in that the most recently visited pages are at the top of the history and revisited when the "back" button is pressed.

However, the history does not really have infinite capacity. In reality, there may exist a fixed limit on the size of the history. The issue arises as to what should happen when the capacity is exhausted and a new item is pushed onto the stack. One possibility is to throw an exception. But this is not how a Web browser behaves. If it only has room to save _50_ pages in its history and yet you visit more pages, it will make room in the history for a new page by throwing away the page which is on the very bottom of the history (i.e., the least recently visited page). The formalStack interface does not help, as it gives us no way to directly access or remove the object on the bottom of the stack.

In this assignment, we define a new ADT which we call aBoundedStack. The interface for aBoundedStack is very similar to the interface given for aStack. However in the case when the capacity is exhausted, a call topush will result in the placement of the new page at the expense of the loss of the least recently accessed page.

**BoundedStack**

    Interface for a bounded stack: A collection of objects that are inserted
    and removed according to the last-in first-out principle, but with
    overflow handled by the removal of the least-recently accessed item.
 

For this assignment, you will be required to give two different implementations for theBoundedStack interface that inherit from the BoundedStack class, as described below.

**BoundedStackA**

    One way to implement aBoundedStack is as follows. Keep an underlying
    array, as with thevector class and use push and pop at the top of the
    stack as you go. In the case when pushing onto a "full" stack, use a
    loop to shift all items down one location in the array. By doing this,
    you will lose your bottommost item while opening up the topmost
    location for the newly pushed object.

**BoundedStackB**

    A second way to implement aBoundedStack is to use an array viewed in a
    circular manner. You can mark the "top" of the circular stack with an
    extra integer variable which is an index into your array. By also
    keeping explicit count of the current size of the stack, you can
    effectively identify the "bottom" of the stack as well, when needed.
    With a bit of care, you can more efficiently handle pushes, even those
    involving overflow.

### Grading Criteria:

You have some flexibility in the way you design your code for this lab. I have a few requirements for the structure of your program, but your program may do more than what is required below to meet the functional requirements. Your program should meet the functional requirements and include _a minimum_ of the following:

*   Use the input file **weblog_unique.url** as input data.

*   Create a stack container class called BoundedStack and two classes that inherit from BoundedStack: BoundedStackA and BoundedStackB as described above. Use a fixed array of size 50 to hold the stack items.**Note:** Do**not** use an STL container class for this lab.

*   Create functions for your implementations that includes _at a minimum_ the following functions. You decide which class or classes the functions should belong to.

*   A function for adding an item to the top of the stack.

*   A function for removing an item from the top of the stack.

*   A function for displaying the item at the top of the stack.

*   A client program that adds items from the input file to the BoundedStackA and BoundedStackB and properly handles overflow for each. The client program should display and pop the entire contents of the stack to demonstrate its contents after adding the above listed input file (note: this will empty the stack completely).

*   Documentation demonstrating how each of the bounded stacks are built and how they handle overflow. You may use images, diagrams and sample data with your explanation.

###Project 5

[Link to tasks](https://online.santarosa.edu/moodle/mod/assign/view.php?id=165282)