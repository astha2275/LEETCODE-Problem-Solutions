class Solution:
    def countMajoritySubarrays(self, a: List[int], u: int) -> int:
        sl,res = SortedList([0]),0
        for q in accumulate(map(lambda v:v==u or -1,a)):
            res += bisect_left(sl,q)
            sl.add(q)
            
        return res