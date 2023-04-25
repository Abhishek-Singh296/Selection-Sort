# Selection-Sort
__Selection sort__ is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion. This process is repeated for the remaining unsorted portion of the list until the entire list is sorted.
This algorithm chooses the minimum element from the list of elements and swaps it with the first element of the list. Similarly, it chooses the second minimum element from the list and swaps it with the second element of the list. It continue swapping the elements until all the elements of the list are completely sorted in either direction.

This selection sort in C is an in-place algorithm as it swaps the elements in the list itself. It does not require an extra list or array to sort the elements.

## __Working__
1.Set the first element as minimum.
<img width="377" alt="Selection-sort-0-initial-array (1)" src="https://user-images.githubusercontent.com/113619312/234350839-8bfeafd7-c961-45c6-889c-3d1aec78d3cb.png">

2.Compare minimum with the second element. If the second element is smaller than minimum, assign the second element as minimum.
Compare minimum with the third element. Again, if the third element is smaller, then assign minimum to the third element otherwise do nothing. The process goes on until the last element.
<img width="377" alt="Selection-sort-0-comparision" src="https://user-images.githubusercontent.com/113619312/234351030-b0763d17-0f8f-41e8-98bd-ed17ccbca30e.png">

3.After each iteration, minimum is placed in the front of the unsorted list.
<img width="377" alt="Selection-sort-0-swapping" src="https://user-images.githubusercontent.com/113619312/234351177-537ca334-a291-40de-b00a-ebc94360caac.png">

4.For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions.


---

## __Algorithm__
The algorithm of the Selection Sort in C is as follows -
```
- Make a variable (say min_index) and initialize it to the location 0 of the array.
- Traverse the whole array to find the smallest element in the array.
- While traversing the array, if we find an element that is smaller than min_index then swap both these elements.
- After which, increase the min_index by 1 so that it points to the next element of the array.
- Repeat the above process until the whole array is sorted.
- The whole algorithm has been depicted with the help of a pictorial representation below.
```

## __Code__
```
