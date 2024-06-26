# Bubble Sort

---

Bubble sort is a simple and intuitive sorting algorithm that works by repeatedly stepping through a list, comparing adjacent elements, and swapping them if they are in the wrong order. The process is repeated until the list is sorted. Here’s a step-by-step explanation of how bubble sort works:

How Bubble Sort Works
Compare Adjacent Elements: Starting from the beginning of the list, compare each pair of adjacent elements.
Swap if Necessary: If the current element is greater than the next element, swap them.
Repeat: Move to the next pair and repeat the comparison and swap if necessary.
Pass Through the List: After each pass through the list, the largest element will have "bubbled up" to its correct position.
Repeat Until Sorted: Repeat the process for the remaining elements until no swaps are needed, indicating that the list is sorted.
Example
Let's say we have the following list to sort in ascending order: [5, 3, 8, 4, 2]

First Pass:

Compare 5 and 3. Swap because 5 > 3. List: [3, 5, 8, 4, 2]
Compare 5 and 8. No swap because 5 < 8. List: [3, 5, 8, 4, 2]
Compare 8 and 4. Swap because 8 > 4. List: [3, 5, 4, 8, 2]
Compare 8 and 2. Swap because 8 > 2. List: [3, 5, 4, 2, 8]
Second Pass:

Compare 3 and 5. No swap because 3 < 5. List: [3, 5, 4, 2, 8]
Compare 5 and 4. Swap because 5 > 4. List: [3, 4, 5, 2, 8]
Compare 5 and 2. Swap because 5 > 2. List: [3, 4, 2, 5, 8]
Compare 5 and 8. No swap because 5 < 8. List: [3, 4, 2, 5, 8]
Third Pass:

Compare 3 and 4. No swap because 3 < 4. List: [3, 4, 2, 5, 8]
Compare 4 and 2. Swap because 4 > 2. List: [3, 2, 4, 5, 8]
Compare 4 and 5. No swap because 4 < 5. List: [3, 2, 4, 5, 8]
Compare 5 and 8. No swap because 5 < 8. List: [3, 2, 4, 5, 8]
Fourth Pass:

Compare 3 and 2. Swap because 3 > 2. List: [2, 3, 4, 5, 8]
Compare 3 and 4. No swap because 3 < 4. List: [2, 3, 4, 5, 8]
Compare 4 and 5. No swap because 4 < 5. List: [2, 3, 4, 5, 8]
Compare 5 and 8. No swap because 5 < 8. List: [2, 3, 4, 5, 8]
Fifth Pass:

No swaps needed, the list is already sorted: [2, 3, 4, 5, 8]


---

procedure bubbleSort(arr: list of elements)
    n = length of arr
    for i = 0 to n-1 do
        swapped = false
        for j = 0 to n-i-2 do
            if arr[j] > arr[j+1] then
                swap(arr[j], arr[j+1])
                swapped = true
            end if
        end for
        // If no two elements were swapped by the inner loop, then the array is sorted
        if not swapped then
            break
        end if
    end for
end procedure
