#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    /* defines possible number of items in base array */ 
    int capacity;
    /* defines current number of items in base array */
    int size;
    /* defines memory position of starting item (zeroth index) of base array */
    int *zeroth_index
} arraylist

struct main(int argc, int *argv[])
{
    /* function calls */
}

/* allocates memory to the base array based upon a user-input initial capacity */
int initialize_arraylist(struct *arraylist_reference, int initial_capacity)
{
    *arraylist_reference.zeroth_index = malloc(4 * initial_capacity);
    /* sets the capacity to the initial user-input capacity */
    *arraylist_reference.capacity = initial_capacity;
    return 0;
}

/* reallocates memory to a new base array with double capacity of the original one */
int resize_arraylist(struct *arraylist_reference)
{
    *arraylist_reference.zeroth_index = realloc(4 * (2 * *arraylist_reference.capacity); 
    /* sets the capacity to double the previous capacity */
    *arraylist_reference.capacity = 2 * initial_capacity;
    return 0;
}


/* reallocates memory to a new base array with a user-input new capacity */
int resize_arraylist(struct *arraylist_reference, int new_capacity)
{
    *arraylist_reference.zeroth_index = realloc(4 * new_capacity);
    /* sets the capacity to the new user-input capacity */
    *arraylist_reference.capacity = new_capacity;
    return 0;
}

/* frees memory allocation for base array */
int free_arraylist(struct *arraylist_reference)
{
    free(*arraylist_reference.zeroth_index);
    return 0;
}     

/* appends a user-input value to the end of the current list (by size, not capacity) */
int add(struct *arraylist_reference, int value)
{
    /* checks if resizing is needed */
    if(*arraylist_reference.size == *arraylist_reference.capacity)
    {
        resize_arraylist(arraylist_reference);
    }
    /* sets end of array to user-input value */
    arraylist_reference[size] = value;
    /* incriments size variable in arraylist struct */
    *arraylist_reference.size++;
    return 0;
}

/* appends a user-input value to the end of the current list (by size, not capacity) */
int add(struct *arraylist_reference, int value, int index)
{
    /* checks if user-input index is valid */
    if!(0 <= index && index <= size)
    {
      return 1;
    }
    /* checks if resizing is needed */
    if(*arraylist_reference.size == *arraylist_reference.capacity)
    {
        resize_arraylist(arraylist_reference);
    }
    /* loops through array, shifting values upward */
    for(int i = 0; i < (size - index); i++)
    {
        arraylist_reference[size - i] = arraylist_reference[(size - 1) - i];
    }
    /* sets user-input index to user-input value */
    arraylist_reference[index] = value;
    /* incriments size variable in arraylist struct */
    *arraylist_reference.size++;
    return 0;
}
