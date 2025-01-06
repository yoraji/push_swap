
    THE GENERAL CONCEPT OF THE PUSH_SWAP PROJECT
 
    The push_swap project is a sorting algorithm challange .so you primarly goal is to sort a stack of
    int using a limited set of operation and second auxiliary stack and the chalenge is to solve it 
    efficient as possible in term of number of operation.
    you have limited operation (swap(s),push(p),rotate(r) ,reverse rotate(rr))
    so the first thing is to build you own algo and optimize it in way that you can minimize the 
    number of operations.

    and from my precpective i think this is the best structer for this projct:
        (if you dont wanna get lost with all those files )...

    push_swap/
    ├── Makefile
    ├── push_swap.h
    ├── src/
    │   ├── main.c "enrty point"
    │   ├── parse_input.c "for validating the command line"
    │   ├── stack_operations.c "basic stack operation (push, pop , rotate, reverse_rotate)"
    │   ├── sort_small.c "sorting algorithm for small numbers"
    │   ├── sort_large.c "sorting algorthim for lager numbers"
    │   ├── utils.c      "just for helper functions"
    │   ├── error_handling.c "handling error like failed allocations"
    │   ├── instructions.c    "implemente the operation"
    │   └── free_resources.c "Frees allocated memory to prevent leaks"
    ├── libft/ "you familar with it :)"
    │   ├── Makefile 
    │   ├── libft.h
    │   ├── ...
    ├── bonus/
    │   ├── checker.c
    │   ├── get_next_line.c
    │   ├── get_next_line_utils.c
    │   ├── Makefile
    │   └── checker_utils.c

    and i highly recommand to work with doubly linkedlist (for travarsing both direction) 
    IN THE END I WILL PUT ALL THE LINK OF ALL RESOURCES THAT HELP UNDERSTAND THIS PROJECT :)  
