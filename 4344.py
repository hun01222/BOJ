n = int(input())

for i in range(n):
    a = [0, ]
    s = c = 0
    a = list(map(int, input().split()))
    for j in range(1, a[0]+1):
        s = s+a[j]
    m = s/a[0]
    for j in range(1, a[0]+1):
        if a[j] > m:
            c += 1
    print(f'{c*100/a[0]:.3f}%')


# n = int(input())

# for _ in range(n):
#     nums = list(map(int, input().split()))
#     avg = sum(nums[1:])/nums[0]  # 평균을 구함 (nums[0]: 학생수, nums[1:] 점수)
#     cnt = 0
#     for score in nums[1:]:
#         if score > avg:
#             cnt += 1  # 평균 이상인 학생 수
#     rate = cnt/nums[0] * 100
#     print(f'{rate:.3f}%')
