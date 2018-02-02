import random
nums=[]
for i in range(0,50):
    numa=[random.randrange(-100,100)]

print(nums)

if __name__=="__main__":
    sorted= False
    n=len(nums)-1
    for num in range(n-1,0,-1):
        for i in nums[num]: