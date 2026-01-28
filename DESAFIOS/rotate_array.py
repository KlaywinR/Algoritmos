class Solution(object):
    def rotate(self, nums, k):
        n = len(nums)
        k = k % n

        def reverse(left, right):
            while left < right:
                nums[left], nums[right] = nums[right], nums[left]
                left += 1
                right -= 1

        reverse(0, n - 1)      
        reverse(0, k - 1)      # inverte os k primeiros
        reverse(k, n - 1)      # inverte o resto
