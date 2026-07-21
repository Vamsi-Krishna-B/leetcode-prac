def selection_sort(arr):
    n = len(arr)
    for i in range(0,n-1):
        mini = i 
        for j in range(i,n):
            if arr[j] < arr[mini]:
                mini = j 
        temp = arr[mini]
        arr[mini] = arr[i]
        arr[i] = temp 
    return arr 

print(selection_sort([13,46,24,52,20,9]))
        