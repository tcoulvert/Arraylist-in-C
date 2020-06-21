#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    /* defines possible number of items in base array */ 
    int capacity;
    /* defines current number of items in base array */
    int size;
    /* defines memory position of starting item (zeroth index) of base array */
    int *base_array
} arraylist

struct main(int argc, int *argv[])
{
    /* checks the intilization and resizing functions */
    arraylist *my_arraylist = malloc(16);
    int check = 0 
    check += initialize_arraylist(my_arraylist, 10);
    if (check != 0 || *my_arraylist.capacity != 10 || *my_arraylist.size != 0 || 
            *my_arraylist.base_array == NULL)
        return 1;
    check += resize_arraylist(my_arraylist); 
    if (check != 0 || *my_arraylist.capacity != 20 || *my_arraylist.size != 0 || 
            *my_arraylist.base_array == NULL)
        return 1;
    check += resize_arraylist(my_arraylist, 8)
    if (check != 0 || *my_arraylist.capacity != 8 || *my_arraylist.size != 0 || 
            *my_arraylist.base_array == NULL)
        return 1;

    /* checks the add functions of the arraylist */
    check = 0 
    check += add(my_arraylist, 1);
    if (check != 0 || *my_arraylist.base_array[0] != 1)
        return 1;
    check += add(my_arraylist, 6, 0);
    if (check != 0 || *my_arraylist.base_array[0] != 6 || 
            *my_arraylist.base_array[1] != 1)
        return 1;

    /* checks the remove functions of the arraylist */
    check = 0;
    
        
}

/* allocates memory to the base array based upon a user-input initial capacity */
int initialize_arraylist(struct *arraylist_reference, int initial_capacity)
{
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
    *arraylist_reference.base_array = malloc(4 * initial_capacity);
    /* sets the capacity to the initial user-input capacity */
    *arraylist_reference.capacity = initial_capacity;
    *arraylist_reference.size = 0;
    return 0;
}

/* reallocates memory to a new base array with double capacity of the original one */
int resize_arraylist(struct *arraylist_reference)
{
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
    *arraylist_reference.base_array = realloc(4 * (2 * *arraylist_reference.capacity); 
    /* sets the capacity to double the previous capacity */
    *arraylist_reference.capacity = 2 * initial_capacity;
    return 0;
}


/* reallocates memory to a new base array with a user-input new capacity */
int resize_arraylist(struct *arraylist_reference, int new_capacity)
{
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
    *arraylist_reference.base_array = realloc(4 * new_capacity);
    /* sets the capacity to the new user-input capacity */
    *arraylist_reference.capacity = new_capacity;
    return 0;
}

/* frees memory allocation for base array */
int free_arraylist(struct *arraylist_reference)
{
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
    free(*arraylist_reference.base_array);
    return 0;
}     

/* appends a user-input value to the end of the current list (by size, not capacity) */
int add(struct *arraylist_reference, int value)
{
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
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
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
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

int remove(struct *arraylist_reference, int index)
{
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
    /* checks if user-input index is valid */
    if!(0 <= index && index <= size)
    {
      return 1;
    }
    /* checks if index is the end of the array (by size) */
    if(size - index == 0)
    {
        *arraylist_reference.size--;
        return 0;
    }
    /* loops through array, shifting values downward*/
    else
    {
        for(int i = 0; i < (size - index) - 1; i++)
        {
            arraylist_reference[index + i] = arraylist_reference[(index + 1) + i];
        }
        return 0;
    }
}

/* looks for first occurrence of user-input value and removes that value if one is found */
int remove(struct *arraylist_reference, int value)
{
    /* checks if pointer passed was valid */
    if(arraylist_reference == NULL)
    {
        return 1;
    }
    /* loops through base array to find first occurrence of user-input value */
    for(int *i = arraylist_reference; i < arraylist_reference + (4 * size); i += 4)
    {
        /* checks if current value matches user-input value */
        if(*i == value)
        {
            *arraylist_reference.size--;
            int shift_begin = 1;
        }
        /* performs the backward shift after user-input value is found */
        if(shift_begin == 1)
        {
            *i = *(i + 4);
        }
    }
    /* checks if value was found in base array */
    if(shift_begin == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
