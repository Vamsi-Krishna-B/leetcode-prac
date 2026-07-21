def insertion_sort(arr,n):
    for i in range(n):
        j = i 
        while (j > 0  and arr[j-1] > arr[j]):
            temp  =arr[j-1]
            arr[j-1]  =arr[j]
            arr[j] = temp 
            j-=1 
    print(arr)
insertion_sort([14,9,15,12,6,8,13],7)