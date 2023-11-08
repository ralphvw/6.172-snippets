#Swapping two variables without a temp variable
def swap(i, j, arr):
    arr[i] = arr[i] ^ arr[j]
    arr[j] = arr[i] ^ arr[j]
    arr[i] = arr[i] ^ arr[j]

arr = [1,2,3,4,5]
swap(1,2, arr)
print(arr)
