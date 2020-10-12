import sys

_, *nums = map(int, sys.stdin.read().split())
print(min(nums), max(nums))
