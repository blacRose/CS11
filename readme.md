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

#### Grading Criteria:

You have some flexibility in the way you design your code for this lab. I have a few requirements for the structure of your program, but your program may do more than what is required below to meet the functional requirements. Your program should meet the functional requirements and include _a minimum_ of the following:

*   Use the input file **weblog_unique.url** as input data.

*   Create a stack container class called BoundedStack and two classes that inherit from BoundedStack: BoundedStackA and BoundedStackB as described above. Use a fixed array of size 50 to hold the stack items. **Note:** Do **not** use an STL container class for this lab.

*   Create functions for your implementations that includes _at a minimum_ the following functions. You decide which class or classes the functions should belong to.

*   A function for adding an item to the top of the stack.

*   A function for removing an item from the top of the stack.

*   A function for displaying the item at the top of the stack.

*   A client program that adds items from the input file to the BoundedStackA and BoundedStackB and properly handles overflow for each. The client program should display and pop the entire contents of the stack to demonstrate its contents after adding the above listed input file (note: this will empty the stack completely).

*   Documentation demonstrating how each of the bounded stacks are built and how they handle overflow. You may use images, diagrams and sample data with your explanation.

###Project 5

[Link to tasks](https://online.santarosa.edu/moodle/mod/assign/view.php?id=165282)

A reverse poem, or palindrome poem, is a poem that can be read forwards one way and have a meaning, but also be read backwards and have another different meaning. Here is a great example on YouTube (the reader reverses it): [Lost Generation](http://www.youtube.com/watch?feature=player_embedded&v=42E2fAWM6rA)

For this project, you will create a function that will allow a poet to write the forward poem and output the entire reverse poem: the original forward poem followed by its mirror image. For example, if this poem is entered:
    REVENGE
    seeks destruction,
    like a dragon
    breathes
    fire
The output should be:
    REVENGE
    seeks destruction,
    like a dragon
    breathes
    fire
    fire
    breathes
    like a dragon
    seeks destruction,
    REVENGE

####Requirements

To accomplish this objective, create two objects of a template queue class and put each line of the forward poem into each object. Then, create a recursive template function to reverse one of the queues and push each line onto the other queue so that it contains the entire palindrome poem.

This needs to be a template function because the poet may want to create a palindrome poem using characters rather than entire strings. For an example of a character palindrome poem, check out this page (scroll to example 2): [Reverse Poetry](http://wikidave.wikispaces.com/Reverse+Poetry)

For this project, use the following prototype:
    template&lt;class Item&gt;
    void reversePoem(queue&lt;Item&gt; &initialQ, queue&lt;Item&gt; &finalQ);
    
    // Precondition: Two objects, initialQ and finalQ, of a queue class have been filled with data.
    // Postcondition: The queue object initialQ has been loaded in reverse order onto the end of the queue object finalQ. In other words, finalQ contains its original data plus the reversed data from initialQ. The initialQ is empty.

Your program must contain the following:

- A template queue class of your choosing. It can be the template queue class demonstrated in lecture, a template queue class from a textbook or the Internet (please give attribution) or the STL queue class.
- A function using the prototype listed above. This function must be a template function and a recursive function.
- A main function that loads two queue objects and calls the reversePoem function, then the main function should pop all of the contents of the finalQ for display.

Here is an example in which the the poem above would be loaded into the queue objects. The chart below shows the queue states before and after the reversePoem function is called. The data is displayed from the front of the queue on top, to the back of the queue on bottom.

||Before the function|After the function|
|---|---|---|
|initialQ|REVENGE<br> seeks destruction,<br> like a dragon<br> breathes<br> fire|/\*EMPTY\*/|
|finalQ|REVENGE<br> seeks destruction,<br> like a dragon<br> breathes<br> fire|REVENGE<br> seeks destruction,<br> like a dragon<br> breathes<br> fire<br> fire<br> breathes<br> like a dragon<br> seeks destruction,<br> REVENGE|