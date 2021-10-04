def twoSum(self, nums: List[int], target: int) -> List[int]:

    m = {} # store compliment and index of other value
    
    for i in range(len(nums)):
        n = nums[i]
        c = target - n
        
        if n in m:
            i1 = m[n]
            return [i1, i]
        else:
            m[c] = i