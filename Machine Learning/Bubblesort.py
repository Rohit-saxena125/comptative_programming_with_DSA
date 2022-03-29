import numpy as np
def Bubble_sort(arr) :
    for i in range(len(arr)) :
        for j in range(len(arr)-1) :
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr
np.array(Bubble_sort([5,8,9,4,6,1,2,3,7]))