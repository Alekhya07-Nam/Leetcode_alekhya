class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        if(len(arr)<=3):
            return arr.index(max(arr))
        i=0
        j=i+1
        while(i!=len(arr)-1 and j!=len(arr)-2):
            if(arr[i]<arr[j]>arr[j+1]):
                return j
            i=i+1
            j=i+1
        else:
            return arr.index(max(arr))