def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1,0,-1):
        for j in range(i):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp 
    return arr

print(bubble_sort([13,46,24,52,20,9]))